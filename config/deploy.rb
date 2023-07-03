# config valid for current version and patch releases of Capistrano
# lock "~> 3.17.0"

set :application, 'special_collections'
set :repo_url, 'https://github.com/pulibrary/special_collections.git'
set :branch, ENV['BRANCH'] || 'main'

set :keep_releases, 5

set :deploy_to, '/var/www/special_collections_cap'

set :drupal_settings, '/home/deploy/settings.php'
set :drupal_site, 'default'
set :drupal_file_temporary_path, '../../shared/tmp'
set :drupal_file_public_path, 'sites/default/files'
set :drupal_file_private_path, 'sites/default/files/private'
set :cas_cert_location, '/etc/ssl/certs/ssl-cert-snakeoil.pem'

set :user, 'deploy'

namespace :drupal do
  desc 'Include creation of additional Drupal specific shared folders'
  task :prepare_shared_paths do
    on release_roles :app do
      execute :mkdir, '-p', "#{shared_path}/tmp"
      execute :sudo, "/bin/chown -R www-data #{shared_path}/tmp"
      execute :mkdir, '-p', "#{shared_path}/node_modules"
    end
  end

  desc 'Link settings.php'
  task :link_settings do
    on roles(:app) do |_host|
      execute "cd #{release_path}/sites/#{fetch(:drupal_site)} && ln -sf #{fetch(:drupal_settings)} settings.php"
      info "linked settings into #{release_path}/sites/#{fetch(:drupal_site)} site"
    end
  end

  desc 'Link shared drupal files'
  task :link_files do
    on roles(:app) do |_host|
      execute "cd #{release_path}/sites/#{fetch(:drupal_site)} && ln -sf #{fetch(:drupal_fileshare_mount)}/#{fetch(:files_dir)} files"
      execute "cd #{release_path}/sites/all/themes/rbsc && ln -sf #{shared_path}/node_modules node_modules"
      info "linked files mount into #{fetch(:drupal_site)} site"
    end
  end
  # Do this manually when needed
  # desc "Install Assets"
  # task :install_assets do
  #   on roles(:app) do |host|
  #     execute "cd #{release_path}/sites/all/themes/rbsc && npm install"
  #     execute "cd #{release_path}/sites/all/themes/rbsc && gulp deploy"
  #     info "Installed Assets"
  #   end
  # end

  desc 'Clear the drupal cache'
  task :cache_clear do
    on release_roles :drupal_primary do
      execute "cd #{release_path} && drush cc all"
      info 'cleared the drupal cache'
    end
  end

  desc 'Update file permissions to follow best security practice: https://drupal.org/node/244924'
  task :set_permissions_for_runtime do
    on release_roles :app do
      execute :find, release_path.to_s, '-type f -exec', :chmod, "640 {} ';'"
      execute :find, release_path.to_s, '-type d -exec', :chmod, "2750 {} ';'"
      execute :find, "#{shared_path}/tmp", '-type d -exec', :chmod, "2770 {} ';'"
    end
  end

  desc 'Set the site offline'
  task :site_offline do
    on release_roles :app do
      execute "drush -r #{release_path} vset --exact maintenance_mode 1; true"
      info 'set site to offline'
    end
  end

  desc 'Set the site online'
  task :site_online do
    on release_roles :app do
      execute "drush -r #{release_path} vdel -y --exact maintenance_mode"
      info 'set site to onffline'
    end
  end

  desc 'Set file system variables'
  task :set_file_system_variables do
    on release_roles :app do
      execute "drush -r #{release_path} vset --exact file_temporary_path #{fetch(:drupal_file_temporary_path)}"
      execute "drush -r #{release_path} vset --exact file_public_path #{fetch(:drupal_file_public_path)}"
      execute "drush -r #{release_path} vset --exact file_private_path #{fetch(:drupal_file_private_path)}"
    end
  end

  desc 'change the owner of the directory to www-data for apache'
  task :update_directory_owner do
    on release_roles :app do
      execute :sudo, "/bin/chown -R www-data #{release_path}"
      deploy_directory = capture "ls #{deploy_to}"
      execute :sudo, "/bin/chown -R www-data #{deploy_to}/current/" if deploy_directory.include?('current')
    end
  end

  desc 'change the owner of the directory to deploy'
  task :update_directory_owner_deploy do
    on release_roles :app do
      ls_results = capture "ls #{fetch(:deploy_to)}"
      release_paths = if ls_results.include?('current')
                        current_release_path = capture "readlink #{fetch(:deploy_to)}/current"
                        current_release = current_release_path.split('/').last
                        info current_release
                        ls_results = capture "ls #{fetch(:deploy_to)}/releases/"
                        ls_results.split(ls_results[14])
                      else
                        ['']
                      end
      release_paths.each do |release|
        next if release == current_release

        execute :sudo, "/bin/chown -R deploy #{fetch(:deploy_to)}/releases/#{release}"
        execute :chmod, "-R u+w #{fetch(:deploy_to)}/releases/#{release}"
      end
    end
  end

  desc 'change the owner of the directory to www-data for apache'
  task :restart_apache2 do
    on release_roles :drupal_primary do
      info 'starting restart on primary'
      execute :sudo, '/usr/sbin/service apache2 restart'
      info 'completed restart on primary'
    end
    on release_roles :drupal_secondary do
      info 'starting restart on secondary'
      execute :sudo, '/usr/sbin/service apache2 restart'
      info 'completed restart on secondary'
    end
  end

  desc 'Stop the apache2 process'
  task :stop_apache2 do
    on release_roles :app do
      execute :sudo, '/usr/sbin/service apache2 stop'
    end
  end

  desc 'Start the apache2 process'
  task :start_apache2 do
    on release_roles :app do
      execute :sudo, '/usr/sbin/service apache2 start'
    end
  end

  desc 'Revert the features to the code'
  task :features_revert do
    on release_roles :drupal_primary do
      execute "cd #{release_path} && drush -y features-revert-all"
      info 'reverted the drupal features'
    end
  end

  desc 'Upload the files tar and install it FILES_DIR/FILES_GZ'
  task :upload_files do
    on release_roles :drupal_primary do
      gz_file_name = ENV['FILES_GZ']
      tar_file_name = gz_file_name.sub('.gz', '')
      upload! File.join(ENV['FILES_DIR'], gz_file_name), "/tmp/#{gz_file_name}"
      execute "sudo -u www-data cp /tmp/#{gz_file_name} #{fetch(:drupal_fileshare_mount)}/#{fetch(:files_dir)}"
      execute "sudo -u www-data gzip -f -d #{fetch(:drupal_fileshare_mount)}/#{fetch(:files_dir)}/#{gz_file_name}"
      execute "cd #{fetch(:drupal_fileshare_mount)}/#{fetch(:files_dir)} && sudo -u www-data tar -xvf #{tar_file_name}"
      execute "sudo -u www-data rm -f #{fetch(:drupal_fileshare_mount)}/#{fetch(:files_dir)}/#{tar_file_name}"
    end
  end

  namespace :database do
    task :upload_and_import do
      on release_roles :drupal_primary do
        gz_file_name = ENV['SQL_GZ']
        sql_file_name = gz_file_name.sub('.gz', '')
        upload! File.join(ENV['SQL_DIR'], gz_file_name), "/tmp/#{gz_file_name}"
        execute "gzip -f -d /tmp/#{gz_file_name}"
        execute "drush -r #{release_path} sql-cli < /tmp/#{sql_file_name}"
      end
    end

    desc 'Upload the dump file and import it SQL_DIR/SQL_GZ'
    task :import_dump do
      invoke 'drupal:site_offline'
      invoke 'drupal:database:upload_and_import'
      invoke 'drupal:database:update_db_variables'
      invoke 'drupal:site_online'
      invoke 'drupal:database:clear_search_index'
      invoke 'drupal:database:update_search_index'
    end

    desc 'Update variables on a dump import'
    task :update_db_variables do
      on release_roles :drupal_primary do
        execute "drush -r #{release_path} vset --exact cas_cert #{fetch(:cas_cert_location)}"
        solr_host = fetch(:search_api_solr_host)
        solr_path = fetch(:search_api_solr_path)
        sql = "update search_api_server set options='a:19:{s:9:\\\"clean_ids\\\";b:1;s:14:\\\"site_hash_form\\\";a:0:{}s:9:\\\"site_hash\\\";b:0;s:6:\\\"scheme\\\";s:4:\\\"http\\\";s:4:\\\"host\\\";s:#{solr_host.length}:\\\"#{solr_host}\\\";s:4:\\\"port\\\";s:4:\\\"8983\\\";s:4:\\\"path\\\";s:#{solr_path.length}:\\\"#{solr_path}\\\";s:9:\\\"http_user\\\";s:0:\\\"\\\";s:9:\\\"http_pass\\\";s:0:\\\"\\\";s:7:\\\"excerpt\\\";i:1;s:13:\\\"retrieve_data\\\";i:1;s:14:\\\"highlight_data\\\";i:0;s:17:\\\"skip_schema_check\\\";i:0;s:12:\\\"solr_version\\\";s:1:\\\"4\\\";s:11:\\\"http_method\\\";s:4:\\\"AUTO\\\";s:9:\\\"log_query\\\";i:0;s:12:\\\"log_response\\\";i:0;s:17:\\\"autocorrect_spell\\\";i:1;s:25:\\\"autocorrect_suggest_words\\\";i:1;}';"
        execute "drush -r #{release_path} sql-query \"#{sql}\""
      end
    end

    desc 'Clear the solr index'
    task :clear_search_index do
      on release_roles :drupal_primary do
        execute "cd #{release_path} && drush search-api-clear"
      end
    end

    desc 'Update the solr index'
    task :update_search_index do
      on release_roles :drupal_primary do
        execute "cd #{release_path} && drush search-api-index"
      end
    end

    desc 'Update the drupal database'
    task :update do
      on release_roles :drupal_primary do
        execute "cd #{release_path} && drush -y updatedb"
      end
    end

    desc 'Update primary keys'
    task :update_primary_keys do
      sql_statements = [
        'ALTER TABLE taxonomy_index ADD CONSTRAINT taxonomy_index_pk PRIMARY KEY (nid, tid);',
        'ALTER TABLE panels_allowed_types ADD CONSTRAINT panels_allowed_types_pk PRIMARY KEY (type);',
        'ALTER TABLE media_view_mode_wysiwyg ADD CONSTRAINT media_view_mode_wysiwyg_pk PRIMARY KEY (type, view_mode);',
        'ALTER TABLE media_restrict_wysiwyg ADD CONSTRAINT media_restrict_wysiwyg_pk PRIMARY KEY (type, display);',
        'ALTER TABLE honeypot_user ADD CONSTRAINT honeypot_user_pk PRIMARY KEY (uid, timestamp);'
      ]
      on release_roles :drupal_primary do
        sql_statements.each do |sql|
          execute "drush -r #{release_path} sql-query \"#{sql}\""
        end
      end
    end
  end
end

namespace :deploy do
  desc 'Set file system variables'
  task :after_deploy_check do
    invoke 'drupal:prepare_shared_paths'
  end

  desc 'Set file system variables'
  task :after_deploy_updated do
    invoke 'drupal:link_settings'
    invoke 'drupal:link_files'
    invoke 'drupal:database:upload_and_import' unless ENV['SQL_GZ'].nil?
    # invoke "drupal:install_assets" don't compile on the server
    invoke 'drupal:set_permissions_for_runtime'
    invoke 'drupal:set_file_system_variables'
    invoke 'drupal:update_directory_owner'
  end

  desc 'stop apache before realease'
  task :before_release do
    invoke 'drupal:stop_apache2'
  end

  desc 'Reset directory permissions and Restart apache'
  task :after_release do
    invoke! 'drupal:update_directory_owner'
    invoke 'drupal:start_apache2'
    invoke 'drupal:cache_clear'
    invoke 'drupal:database:update'
    invoke 'drupal:features_revert'
    invoke! 'drupal:cache_clear'
  end

  before 'symlink:release', 'deploy:before_release'

  after :check, 'deploy:after_deploy_check'

  # after :started, "drupal:site_offline"

  after :updated, 'deploy:after_deploy_updated'

  before :finishing, 'drupal:update_directory_owner_deploy'
  after 'symlink:release', 'deploy:after_release'
end

desc 'Database dump'
task :database_dump do
  date = Time.now.strftime('%Y-%m-%d')
  file_name = "backup-#{date}-#{fetch(:stage)}"
  on release_roles :app do
    execute "mysqldump #{fetch(:db_name)} > /tmp/#{file_name}.sql"
    execute "gzip -f /tmp/#{file_name}.sql"
    download! "/tmp/#{file_name}.sql.gz", "#{file_name}.sql.gz"
  end
end

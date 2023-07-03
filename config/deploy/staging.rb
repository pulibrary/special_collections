set :files_dir, 'special_collections_staging_files'

server 'lib-sc-staging1', user: fetch(:user), roles: %w[app drupal_primary]
server 'lib-sc-staging2', user: fetch(:user), roles: %w[app drupal_primary]

set :drupal_fileshare_mount, '/mnt/nfs/drupal7'
set :search_api_solr_host, 'lib-solr8-staging.princeton.edu'
set :search_api_solr_path, '/solr/special-collections-staging'

set :db_name, 'special_collections_staging'

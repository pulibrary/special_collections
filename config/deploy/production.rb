set :branch, ENV["BRANCH"] || "master"

set :files_dir, "special_collections_production_files"

server "library-prod1", user: fetch(:user), roles: %w{app drupal_primary}
server "library-prod3", user: fetch(:user), roles: %w{app drupal_secondary}

set :search_api_solr_host, 'lib-solr.princeton.edu'
set :search_api_solr_path, '/solr/rbsc-production'

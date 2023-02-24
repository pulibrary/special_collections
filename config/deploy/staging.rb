set :files_dir, "special_collections_staging_files"

server "lib-sc-staging1", user: fetch(:user), roles: %w{app drupal_primary}

set :search_api_solr_host, 'lib-solr8-staging.princeton.edu'
set :search_api_solr_path, '/solr/special-collections-staging'

server "mysql-db-staging1", user: 'pulsys', roles: %w{db}
set :db_name, "special_collections_staging"

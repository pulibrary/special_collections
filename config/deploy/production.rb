set :files_dir, "special_collections_production_files"

server "lib-sc-prod1", user: fetch(:user), roles: %w{app drupal_primary}

set :search_api_solr_host, 'library-solr-prod.princeton.edu'
set :search_api_solr_path, '/solr/special-collections-prod'

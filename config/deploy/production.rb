set :files_dir, "special_collections_production_files"

server "library-prod1", user: fetch(:user), roles: %w{app drupal_primary}
# server "library-prod3", user: fetch(:user), roles: %w{app drupal_secondary}
# server "library-prod4", user: fetch(:user), roles: %w{app drupal_secondary}

set :search_api_solr_host, 'library-solr-prod.princeton.edu'
set :search_api_solr_path, '/solr/special-collections-prod'

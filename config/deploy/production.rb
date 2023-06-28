set :files_dir, 'special_collections_production_files'

server 'lib-sc-prod1', user: fetch(:user), roles: %w[app drupal_primary]

set :drupal_fileshare_mount, '/mnt/diglibdata/drupalweb'
set :search_api_solr_host, 'library-solr-prod.princeton.edu'
set :search_api_solr_path, '/solr/special-collections-prod'

set :db_name, 'special_collections_prod'

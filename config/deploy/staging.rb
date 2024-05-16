set :files_dir, 'special_collections_staging_files'

server 'lib-sc-staging1', user: fetch(:user), roles: %w[app drupal_primary]
server 'lib-sc-staging2', user: fetch(:user), roles: %w[app drupal_secondary]

set :drupal_fileshare_mount, '/mnt/diglibdata/drupalweb'
# There is an nfs mount available on the box, but it does
# not yet have the correct permissions, uncomment the following
# when it is ready.
# set :drupal_fileshare_mount, '/mnt/nfs/drupal7'
set :search_api_solr_host, 'lib-solr8-staging.princeton.edu'
set :search_api_solr_path, '/solr/special-collections-staging'

set :db_name, 'special_collections_staging'

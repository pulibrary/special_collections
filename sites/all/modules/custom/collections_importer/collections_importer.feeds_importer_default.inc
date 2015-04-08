<?php
/**
 * @file
 * collections_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function collections_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rbsc_collections_import';
  $feeds_importer->config = array(
    'name' => 'RBSC Collections Import',
    'description' => 'Import collections from Finding Aids and map them to Divisions and Topics',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 1,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'collection',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'abstract',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'topics',
            'target' => 'field_collection_strength',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'call_no',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'node_id',
            'target' => 'field_division:etid',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'drupal_author',
            'target' => 'user_mail',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => 0,
        'authorize' => 0,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['rbsc_collections_import'] = $feeds_importer;

  return $export;
}

<?php
/**
 * @file
 * staff_list_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function staff_list_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rbsc_staff_list_import';
  $feeds_importer->config = array(
    'name' => 'RBSC Staff List Import',
    'description' => 'Import RBSC Staff Members from Library Staff Database',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'https',
        'accept_invalid_cert' => 0,
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
        'expire' => '-1',
        'author' => '3',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Net ID',
            'target' => 'field_staff_netid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Email',
            'target' => 'field_staff_contact_email',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'First Name',
            'target' => 'field_staff_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Net ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'Nick Name',
            'target' => 'field_staff_nick_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Last Name',
            'target' => 'field_staff_last_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Section',
            'target' => 'field_staff_section',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Unit',
            'target' => 'field_staff_unit',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Office',
            'target' => 'field_staff_office',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Phone Number',
            'target' => 'field_staff_phone',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Display Title',
            'target' => 'field_staff_title',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Division',
            'target' => 'field_staff_division',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'rbsc_staff_member',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['rbsc_staff_list_import'] = $feeds_importer;

  return $export;
}

<?php
/**
 * @file
 * databases.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function databases_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_database';
  $strongarm->value = 0;
  $export['comment_anonymous_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_database';
  $strongarm->value = '1';
  $export['comment_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_database';
  $strongarm->value = 1;
  $export['comment_default_mode_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_database';
  $strongarm->value = '50';
  $export['comment_default_per_page_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_database';
  $strongarm->value = 1;
  $export['comment_form_location_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_database';
  $strongarm->value = '1';
  $export['comment_preview_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_database';
  $strongarm->value = 1;
  $export['comment_subject_field_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__database';
  $strongarm->value = array(
    'view_modes' => array(
      'double_feature' => array(
        'custom_settings' => FALSE,
      ),
      'rbsc_grid_view_small_double_feature' => array(
        'custom_settings' => TRUE,
      ),
      'rbsc_grid_view_small_feature' => array(
        'custom_settings' => TRUE,
      ),
      'rbsc_grid_view_large_feature' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_database';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_database';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_database';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_database';
  $strongarm->value = '1';
  $export['node_preview_database'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_database';
  $strongarm->value = 0;
  $export['node_submitted_database'] = $strongarm;

  return $export;
}

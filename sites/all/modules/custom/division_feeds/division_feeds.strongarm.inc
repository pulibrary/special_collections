<?php
/**
 * @file
 * division_feeds.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function division_feeds_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_division';
  $strongarm->value = 0;
  $export['comment_anonymous_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_division';
  $strongarm->value = 1;
  $export['comment_default_mode_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_division';
  $strongarm->value = '50';
  $export['comment_default_per_page_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_division';
  $strongarm->value = '1';
  $export['comment_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_division';
  $strongarm->value = 1;
  $export['comment_form_location_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_division';
  $strongarm->value = '1';
  $export['comment_preview_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_division';
  $strongarm->value = 1;
  $export['comment_subject_field_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__division';
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
      'search_results' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_division';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_division';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_division';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_division';
  $strongarm->value = '1';
  $export['node_preview_division'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_division';
  $strongarm->value = 0;
  $export['node_submitted_division'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * division_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function division_feeds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function division_feeds_node_info() {
  $items = array(
    'division' => array(
      'name' => t('Division'),
      'base' => 'node_content',
      'description' => t('Various divisions of RBSC'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

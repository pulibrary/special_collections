<?php
/**
 * @file
 * database_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function database_importer_ctools_plugin_api($module = NULL, $api = NULL) {
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
function database_importer_node_info() {
  $items = array(
    'database_importer' => array(
      'name' => t('Database Importer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

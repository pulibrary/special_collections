<?php
/**
 * @file
 * databases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function databases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function databases_node_info() {
  $items = array(
    'database' => array(
      'name' => t('Database'),
      'base' => 'node_content',
      'description' => t('RBSC Databases'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

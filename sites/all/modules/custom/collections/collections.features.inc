<?php
/**
 * @file
 * collections.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collections_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function collections_node_info() {
  $items = array(
    'collection' => array(
      'name' => t('Collection'),
      'base' => 'node_content',
      'description' => t('Content type for individual collection in RBSC.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * topics_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function topics_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function topics_importer_node_info() {
  $items = array(
    'topics_importer' => array(
      'name' => t('PULFA Importer'),
      'base' => 'node_content',
      'description' => t('Test Content Type to see if we can import topics.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

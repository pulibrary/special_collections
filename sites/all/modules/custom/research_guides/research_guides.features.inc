<?php
/**
 * @file
 * research_guides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function research_guides_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function research_guides_node_info() {
  $items = array(
    'research_guides' => array(
      'name' => t('Research Guide'),
      'base' => 'node_content',
      'description' => t('Guides to one or more collections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

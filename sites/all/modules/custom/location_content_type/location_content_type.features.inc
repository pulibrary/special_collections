<?php
/**
 * @file
 * location_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function location_content_type_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

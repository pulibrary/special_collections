<?php
/**
 * @file
 * databases.features.inc
 */

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
  return $items;
}

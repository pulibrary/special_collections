<?php

/**
 * @file
 * footer2.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer2_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-services_schedule-a-class-visit:node/5799.
  $menu_links['menu-footer-services_schedule-a-class-visit:node/5799'] = array(
    'menu_name' => 'menu-footer-services',
    'link_path' => 'node/5799',
    'router_path' => 'node/%',
    'link_title' => 'Schedule a Class Visit',
    'options' => array(
      'identifier' => 'menu-footer-services_schedule-a-class-visit:node/5799',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-help-footer-_exhibitions:node/12.
  $menu_links['menu-help-footer-_exhibitions:node/12'] = array(
    'menu_name' => 'menu-help-footer-',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Exhibitions',
    'options' => array(
      'identifier' => 'menu-help-footer-_exhibitions:node/12',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibitions');
  t('Schedule a Class Visit');

  return $menu_links;
}

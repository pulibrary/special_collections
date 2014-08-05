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

  // Exported menu link: menu-footer-services_access-to-collections:node/280
  $menu_links['menu-footer-services_access-to-collections:node/280'] = array(
    'menu_name' => 'menu-footer-services',
    'link_path' => 'node/280',
    'router_path' => 'node/%',
    'link_title' => 'Access to Collections',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-services_access-to-collections:node/280',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-services_request-copies:node/5817
  $menu_links['menu-footer-services_request-copies:node/5817'] = array(
    'menu_name' => 'menu-footer-services',
    'link_path' => 'node/5817',
    'router_path' => 'node/%',
    'link_title' => 'Request Copies',
    'options' => array(
      'identifier' => 'menu-footer-services_request-copies:node/5817',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-services_research-assistance:node/285
  $menu_links['menu-footer-services_research-assistance:node/285'] = array(
    'menu_name' => 'menu-footer-services',
    'link_path' => 'node/285',
    'router_path' => 'node/%',
    'link_title' => 'Research Assistance',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-services_research-assistance:node/285',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-services_schedule-a-class-visit:node/5799
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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-help-footer-_getting-started:node/10
  $menu_links['menu-help-footer-_getting-started:node/10'] = array(
    'menu_name' => 'menu-help-footer-',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Getting Started',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-help-footer-_getting-started:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-help-footer-_research-account:node/5801
  $menu_links['menu-help-footer-_research-account:node/5801'] = array(
    'menu_name' => 'menu-help-footer-',
    'link_path' => 'node/5801',
    'router_path' => 'node/%',
    'link_title' => 'Research Account',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-help-footer-_research-account:node/5801',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Access to Collections');
  t('Getting Started');
  t('Request Copies');
  t('Research Account');
  t('Research Assistance');
  t('Schedule a Class Visit');


  return $menu_links;
}

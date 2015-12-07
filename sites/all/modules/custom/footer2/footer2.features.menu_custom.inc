<?php
/**
 * @file
 * footer2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-services.
  $menus['menu-footer-services'] = array(
    'menu_name' => 'menu-footer-services',
    'title' => 'Services (Footer)',
    'description' => 'These are RBSC Services that are listed in the footer.',
  );
  // Exported menu: menu-help-footer-.
  $menus['menu-help-footer-'] = array(
    'menu_name' => 'menu-help-footer-',
    'title' => 'Help (Footer)',
    'description' => 'Helpful footer links to address common questions.',
  );
  // Exported menu: menu-information-for-footer-.
  $menus['menu-information-for-footer-'] = array(
    'menu_name' => 'menu-information-for-footer-',
    'title' => 'Information For (Footer)',
    'description' => 'Footer menu that allows specific groups of users to locate information relevant to their goals. ',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu that allows specific groups of users to locate information relevant to their goals. ');
  t('Help (Footer)');
  t('Helpful footer links to address common questions.');
  t('Information For (Footer)');
  t('Services (Footer)');
  t('These are RBSC Services that are listed in the footer.');

  return $menus;
}

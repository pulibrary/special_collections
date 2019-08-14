<?php

/**
 * @file
 * front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function front_page_image_default_styles() {
  $styles = array();

  // Exported image style: double_feature.
  $styles['double_feature'] = array(
    'label' => 'Double Feature (565 x180)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 565,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: feature.
  $styles['feature'] = array(
    'label' => 'Feature (273 x 180)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 273,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function front_page_node_info() {
  $items = array(
    'mainmenu' => array(
      'name' => t('Menu Page'),
      'base' => 'node_content',
      'description' => t('Index Page for Navigation in a Category'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * location_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function location_layouts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function location_layouts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function location_layouts_image_default_styles() {
  $styles = array();

  // Exported image style: double_feature_-_small__419_x180_.
  $styles['double_feature_-_small__419_x180_'] = array(
    'name' => 'double_feature_-_small__419_x180_',
    'label' => 'Double Feature - Small (419 x180)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 419,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: feature_-_small__199_x_180_.
  $styles['feature_-_small__199_x_180_'] = array(
    'name' => 'feature_-_small__199_x_180_',
    'label' => 'Feature - Small (199 x 180)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 199,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

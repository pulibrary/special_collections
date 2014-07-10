<?php
/**
 * @file
 * blog_search_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_search_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blog_search_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

<?php
/**
 * @file
 * rbsc_basic_blog_search_index.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbsc_basic_blog_search_index_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

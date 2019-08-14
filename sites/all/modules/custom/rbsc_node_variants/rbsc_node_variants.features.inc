<?php

/**
 * @file
 * rbsc_node_variants.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbsc_node_variants_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

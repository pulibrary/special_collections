<?php

/**
 * Implements hook_preprocess_html().
 */
function rbsc_preprocess_html(&$variables, $hook) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.

  $node = menu_get_object();
  if ($node && $node->nid == 340) {
    drupal_add_js('https://api2.libanswers.com/1.0/widgets/850', array('type' => 'external'));
  }

}

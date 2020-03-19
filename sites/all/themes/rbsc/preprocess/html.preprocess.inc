<?php

/**
 * Implements hook_preprocess_html().
 */
function rbsc_preprocess_html(&$variables, $hook) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.

  drupal_add_js(
    'https://v2.libanswers.com/load_chat.php?hash=b6a26755ec95a6ed065331dfb1298676', array('type' => 'external')
  );

}
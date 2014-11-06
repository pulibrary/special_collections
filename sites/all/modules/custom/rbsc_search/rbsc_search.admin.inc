<?php
// $Id$

/**
 * @file
 * Admin page callback for the scaffolding module.
 */

/**
 * Builds and returns the scaffolding settings form.
 */
function rbsc_search_admin_settings() {
  $form['mudd_db_example_setting'] = array(
    '#type' => 'textarea',
    '#title' => t('Example setting'),
    '#default_value' => variable_get('input_example_setting', ''),
    '#description' => t('This is an example setting.'),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}
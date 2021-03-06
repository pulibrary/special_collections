<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_style.
 */

/**
 * Class to define a style plugin handler.
 */
class ViewsBootstrapThumbnailPluginStyle extends views_plugin_style {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['alignment'] = array('default' => 'horizontal');
    $options['columns'] = array('default' => 0);
    $options['columns_xs'] = array('default' => 12);
    $options['columns_sm'] = array('default' => 6);
    $options['columns_md'] = array('default' => 4);
    $options['columns_lg'] = array('default' => 3);
    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['alignment'] = array(
      '#type' => 'radios',
      '#title' => t('Alignment'),
      '#options' => array(
        'horizontal' => t('Horizontal'),
        'vertical' => t('Vertical'),
      ),
      '#description' => t('Horizontal alignment will place items starting in the upper left and moving right.
      Vertical alignment will place items starting in the upper left and moving down.'),
      '#default_value' => $this->options['alignment'],
    );

    // Number of columns wrapped in a views row for horizontal alignment.
    // Number of columns for vertical alignment.
    $options = array(
      0 => 'Auto',
      1 => 1,
      2 => 2,
      3 => 3,
      4 => 4,
      6 => 6,
      12 => 12,
    );
    $form['columns'] = array(
      '#type' => 'select',
      '#title' => t('Number of columns'),
      '#options' => $options,
      '#required' => TRUE,
      '#description' => t('Choose the number of columns that views will wrap in a single row in horizontal alignment or the number of columns in vertical alignment. This will be reflected in the HTML structure rendered regardless of the device size. If in doubt, leave to Auto.'),
      '#default_value' => $this->options['columns'],
    );

    // Number of columns per device size. To be used for generating css classes.
    // Options are the same for all device sizes.
    $options = array(
      12 => 1,
      6 => 2,
      4 => 3,
      3 => 4,
      2 => 6,
      1 => 12,
    );

    $form['columns_xs'] = array(
      '#type' => 'select',
      '#title' => t('Number of columns for extra small devices'),
      '#options' => $options,
      '#required' => TRUE,
      '#description' => t('Choose the number of columns for a particular device size and up. This affects the css classes that will be applied to the columns and not the actual HTML structure that will be rendered. Not defining the number of columns for a device size will result in inheriting the number of columns from one size below.'),
      '#default_value' => $this->options['columns_xs'],
    );

    // Add option to not define the number of columns for the rest
    $options[0] = 'Do not define';

    $form['columns_sm'] = array(
      '#type' => 'select',
      '#title' => t('Number of columns for small devices'),
      '#options' => $options,
      '#required' => FALSE,
      '#description' => t('See the description on the number of columns for extra small devices.'),
      '#default_value' => $this->options['columns_sm'],
    );

    $form['columns_md'] = array(
      '#type' => 'select',
      '#title' => t('Number of columns for medium devices'),
      '#options' => $options,
      '#required' => FALSE,
      '#description' => t('See the description on the number of columns for extra small devices.'),
      '#default_value' => $this->options['columns_md'],
    );

    $form['columns_lg'] = array(
      '#type' => 'select',
      '#title' => t('Number of columns for large devices'),
      '#options' => $options,
      '#required' => FALSE,
      '#description' => t('See the description on the number of columns for extra small devices.'),
      '#default_value' => $this->options['columns_lg'],
    );
  }
}

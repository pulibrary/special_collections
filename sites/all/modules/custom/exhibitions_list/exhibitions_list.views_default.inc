<?php
/**
 * @file
 * exhibitions_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibitions_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibition_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibition View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['element_label_class'] = 'exhibition-image ';
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_exhibition_url']['id'] = 'field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['table'] = 'field_data_field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['field'] = 'field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibition' => 'exhibition',
  );
  /* Filter criterion: Content: Main Page Feature (field_featured_exhibition) */
  $handler->display->display_options['filters']['field_featured_exhibition_value']['id'] = 'field_featured_exhibition_value';
  $handler->display->display_options['filters']['field_featured_exhibition_value']['table'] = 'field_data_field_featured_exhibition';
  $handler->display->display_options['filters']['field_featured_exhibition_value']['field'] = 'field_featured_exhibition_value';
  $handler->display->display_options['filters']['field_featured_exhibition_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Vital Info */
  $handler = $view->new_display('panel_pane', 'Vital Info', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Image, URL, location, etc.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['element_wrapper_class'] = 'exhibition-image ';
  $handler->display->display_options['fields']['field_cover_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_exhibition_url']['id'] = 'field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['table'] = 'field_data_field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['field'] = 'field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['text'] = 'VIEW THE EXHIBIT ONLINE';
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['path'] = '[field_exhibition_url-url]';
  $handler->display->display_options['fields']['field_exhibition_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_url']['element_wrapper_class'] = 'external-link';
  $handler->display->display_options['fields']['field_exhibition_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_url']['click_sort_column'] = 'url';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Description */
  $handler = $view->new_display('panel_pane', 'Description', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Exhibition Description';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_exhibition_url']['id'] = 'field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['table'] = 'field_data_field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['field'] = 'field_exhibition_url';
  $handler->display->display_options['fields']['field_exhibition_url']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['text'] = 'VIEW THE EXHIBIT ONLINE';
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_url']['alter']['path'] = '[field_exhibition_url-url]';
  $handler->display->display_options['fields']['field_exhibition_url']['element_class'] = 'external-link';
  $handler->display->display_options['fields']['field_exhibition_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_url']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['exhibition_view'] = $view;

  $view = new view();
  $view->name = 'exhibitions_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibitions List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Content: Dates On Display -  start date (field_start_date) */
  $handler->display->display_options['sorts']['field_start_date_value']['id'] = 'field_start_date_value';
  $handler->display->display_options['sorts']['field_start_date_value']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['sorts']['field_start_date_value']['field'] = 'field_start_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibition' => 'exhibition',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['exhibitions_list'] = $view;

  return $export;
}

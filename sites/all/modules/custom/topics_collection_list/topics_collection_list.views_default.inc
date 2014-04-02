<?php
/**
 * @file
 * topics_collection_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function topics_collection_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'filtered_collection_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Filtered Collection List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['id'] = 'field_collection_strength_target_id';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['field'] = 'field_collection_strength_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
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
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Collection Strength (field_collection_strength) */
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['id'] = 'field_collection_strength_target_id';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['field'] = 'field_collection_strength_target_id';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Division (field_division) */
  $handler->display->display_options['arguments']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['arguments']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['arguments']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['arguments']['field_division_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_division_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_division_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_division_target_id']['summary_options']['items_per_page'] = '25';
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
    'collection' => 'collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['id'] = 'field_collection_strength_target_id';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['field'] = 'field_collection_strength_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Collection Strength (field_collection_strength) */
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['id'] = 'field_collection_strength_target_id';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['field'] = 'field_collection_strength_target_id';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_collection_strength_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Division (field_division) */
  $handler->display->display_options['arguments']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['arguments']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['arguments']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['arguments']['field_division_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_division_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_division_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_division_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'collection' => 'collection',
  );
  $handler->display->display_options['path'] = 'collections/%';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_collection_strength_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:node.field-collection-strength',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Collection Strength (field_collection_strength)',
    ),
    'field_division_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.field_division',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '15',
      'label' => 'Content: Division (field_division)',
    ),
  );
  $export['filtered_collection_list'] = $view;

  return $export;
}

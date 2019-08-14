<?php

/**
 * @file
 * blog_search_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function blog_search_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_blog';
  $view->human_name = 'Blog Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="icon-databases"></i> Blog Search Results';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See All Blog Search Results';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'find/!1?f[0]=type:feed_item';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['query']['options']['parse_mode'] = 'direct';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<span data-hit-count="@total" data-search-service="blog_search-panel_pane_2"></span>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No Blog posts found.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_blog';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_blog';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'field_feed_item_description:value' => 'field_feed_item_description:value',
    'title' => 'title',
  );

  /* Display: Blog Search Results */
  $handler = $view->new_display('panel_pane', 'Blog Search Results', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );

  /* Display: Better Blog Search Results */
  $handler = $view->new_display('panel_pane', 'Better Blog Search Results', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Allows search results to point to Feed Source and Feed Item external URLs.';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'find/blogs/!1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Blog Post URL */
  $handler->display->display_options['fields']['field_blog_post_url']['id'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_blog_post_url']['field'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_url']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Source Blog URL */
  $handler->display->display_options['fields']['field_source_blog_url']['id'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_source_blog_url']['field'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['label'] = '';
  $handler->display->display_options['fields']['field_source_blog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: Source Blog URL */
  $handler->display->display_options['fields']['field_source_blog_url_1']['id'] = 'field_source_blog_url_1';
  $handler->display->display_options['fields']['field_source_blog_url_1']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_source_blog_url_1']['field'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_source_blog_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url_1']['alter']['path'] = '[field_source_blog_url]';
  $handler->display->display_options['fields']['field_source_blog_url_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Source Blog Title */
  $handler->display->display_options['fields']['field_source_blog_title']['id'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_source_blog_title']['field'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['label'] = 'in the ';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['text'] = '[field_source_blog_title] Blog';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['path'] = '[field_source_blog_url]';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );

  /* Display: Topic Search Results */
  $handler = $view->new_display('panel_pane', 'Topic Search Results', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Topics Search Results';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'allblogs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_type'] = 'span';
  $handler->display->display_options['fields']['type']['element_class'] = 'label label-default';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_blog';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'field_feed_item_description:value' => 'field_feed_item_description:value',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_blog';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );

  /* Display: Complete Blog Search Results */
  $handler = $view->new_display('panel_pane', 'Complete Blog Search Results', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'Complete listing of Blog search results to point to Feed Source and Feed Item external URLs.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See All Blog Search Results';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'find/blogs/!1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'allblogs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Blog Post URL */
  $handler->display->display_options['fields']['field_blog_post_url']['id'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_blog_post_url']['field'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_url']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Source Blog URL */
  $handler->display->display_options['fields']['field_source_blog_url']['id'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_source_blog_url']['field'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['label'] = '';
  $handler->display->display_options['fields']['field_source_blog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: Source Blog URL */
  $handler->display->display_options['fields']['field_source_blog_url_1']['id'] = 'field_source_blog_url_1';
  $handler->display->display_options['fields']['field_source_blog_url_1']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_source_blog_url_1']['field'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_source_blog_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url_1']['alter']['path'] = '[field_source_blog_url]';
  $handler->display->display_options['fields']['field_source_blog_url_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Source Blog Title */
  $handler->display->display_options['fields']['field_source_blog_title']['id'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['table'] = 'search_api_index_blog';
  $handler->display->display_options['fields']['field_source_blog_title']['field'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['label'] = 'in the ';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['text'] = '[field_source_blog_title] Blog';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['path'] = '[field_source_blog_url]';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );
  $export['blog_search'] = $view;

  return $export;
}

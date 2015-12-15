<?php
/**
 * @file
 * division_layouts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_layouts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog_item';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog Item';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<span class="glyphicon glyphicon-bullhorn"></span> New and Notable';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Feeds item: Owner feed */
  $handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['required'] = TRUE;
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
  /* Contextual filter: Feeds item: Owner feed nid */
  $handler->display->display_options['arguments']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['arguments']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['arguments']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['arguments']['feed_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['feed_nid']['default_argument_options']['argument'] = '65';
  $handler->display->display_options['arguments']['feed_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['feed_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['feed_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['feed_nid']['break_phrase'] = TRUE;
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
    'feed_item' => 'feed_item',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'blog-item';

  /* Display: Blog Item List by Feed ID */
  $handler = $view->new_display('panel_pane', 'Blog Item List by Feed ID', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[field_source_blog_title]';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'striped-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_source_blog_title' => 'field_source_blog_title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Source Blog URL */
  $handler->display->display_options['fields']['field_source_blog_url']['id'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['table'] = 'field_data_field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['field'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['label'] = '';
  $handler->display->display_options['fields']['field_source_blog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url']['element_label_colon'] = FALSE;
  /* Field: Content: Blog Post URL */
  $handler->display->display_options['fields']['field_blog_post_url']['id'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['table'] = 'field_data_field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['field'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_url']['element_label_colon'] = FALSE;
  /* Field: Feeds item: Item URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'blog-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted ';
  $handler->display->display_options['fields']['created']['element_type'] = 'em';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'blog-posted';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Source Blog Title */
  $handler->display->display_options['fields']['field_source_blog_title']['id'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['table'] = 'field_data_field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['field'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['label'] = 'in the ';
  $handler->display->display_options['fields']['field_source_blog_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['text'] = '[field_source_blog_title] Blog';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['path'] = '[field_source_blog_url] ';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_blog_title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_source_blog_title']['element_wrapper_class'] = 'blog-source';
  $handler->display->display_options['fields']['field_source_blog_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'feed_nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_blogs',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feeds item: Owner feed nid',
    ),
  );

  /* Display: All the blog posts */
  $handler = $view->new_display('panel_pane', 'All the blog posts', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Feeds item: Item URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  /* Field: Feeds source: Source */
  $handler->display->display_options['fields']['config']['id'] = 'config';
  $handler->display->display_options['fields']['config']['table'] = 'feeds_source';
  $handler->display->display_options['fields']['config']['field'] = 'config';
  $handler->display->display_options['fields']['config']['relationship'] = 'feed_nid';
  $handler->display->display_options['fields']['config']['label'] = '';
  $handler->display->display_options['fields']['config']['exclude'] = TRUE;
  $handler->display->display_options['fields']['config']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted ';
  $handler->display->display_options['fields']['created']['element_type'] = 'em';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'feed_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'in the ';
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '(from [title])';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[config]';
  $handler->display->display_options['fields']['title_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['link_class'] = 'blog-source';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'em';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'feed_nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_blogs',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feeds item: Owner feed nid',
    ),
  );

  /* Display: All the blogs */
  $handler = $view->new_display('panel_pane', 'All the blogs', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'A better list of blog posts using non-native fields for blog source and url.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Source Blog URL */
  $handler->display->display_options['fields']['field_source_blog_url']['id'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['table'] = 'field_data_field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['field'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['label'] = '';
  $handler->display->display_options['fields']['field_source_blog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url']['element_label_colon'] = FALSE;
  /* Field: Content: Blog Post URL */
  $handler->display->display_options['fields']['field_blog_post_url']['id'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['table'] = 'field_data_field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['field'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_url']['element_label_colon'] = FALSE;
  /* Field: Content: Blog Image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['alter']['text'] = '<img title="[field_blog_image-title]" alt="[field_blog_image-alt]" typeof="foaf:Image" src="[field_blog_image]" width="[field_blog_image-width]" height="[field_blog_image-height]" class="pull-left thumbnail">';
  $handler->display->display_options['fields']['field_blog_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['field_blog_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_image']['element_class'] = 'pull-left thumbnail';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted ';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'em';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Source Blog Title */
  $handler->display->display_options['fields']['field_source_blog_title']['id'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['table'] = 'field_data_field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['field'] = 'field_source_blog_title';
  $handler->display->display_options['fields']['field_source_blog_title']['label'] = 'in the ';
  $handler->display->display_options['fields']['field_source_blog_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['text'] = '[field_source_blog_title] Blog';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['path'] = '[field_source_blog_url]';
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_blog_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_source_blog_title']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="copy">
<h4><a href="[field_blog_post_url]">[title]</a></h4>
<span class="byline">Posted [created] in the [field_source_blog_title]</span>
</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['label'] = '';
  $handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sticky']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['argument_input'] = array(
    'feed_nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_blogs',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feeds item: Owner feed nid',
    ),
  );

  /* Display: New and Notable */
  $handler = $view->new_display('panel_pane', 'New and Notable', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'A full list of posts from the official RBSC blog.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Source Blog URL */
  $handler->display->display_options['fields']['field_source_blog_url']['id'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['table'] = 'field_data_field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['field'] = 'field_source_blog_url';
  $handler->display->display_options['fields']['field_source_blog_url']['label'] = '';
  $handler->display->display_options['fields']['field_source_blog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source_blog_url']['element_label_colon'] = FALSE;
  /* Field: Content: Blog Post URL */
  $handler->display->display_options['fields']['field_blog_post_url']['id'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['table'] = 'field_data_field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['field'] = 'field_blog_post_url';
  $handler->display->display_options['fields']['field_blog_post_url']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_url']['element_label_colon'] = FALSE;
  /* Field: Content: Blog Image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['alter']['text'] = '<img title="[field_blog_image-title]" alt="[field_blog_image-alt]" typeof="foaf:Image" src="[field_blog_image]" width="[field_blog_image-width]" height="[field_blog_image-height]" class="pull-left thumbnail">';
  $handler->display->display_options['fields']['field_blog_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['field_blog_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_blog_image']['element_class'] = 'media-image';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
    'class' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted ';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_blog_post_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_feed_item_description']['id'] = 'field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['table'] = 'field_data_field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['field'] = 'field_feed_item_description';
  $handler->display->display_options['fields']['field_feed_item_description']['label'] = '';
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['text'] = '<div class="media-body"><h4 class="media-heading">[title]</h4> [field_feed_item_description]</div>';
  $handler->display->display_options['fields']['field_feed_item_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_feed_item_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feed_item_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_feed_item_description']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_feed_item_description']['settings'] = array(
    'trim_length' => '275',
    'class' => '',
  );
  $handler->display->display_options['argument_input'] = array(
    'feed_nid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_blogs',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Feeds item: Owner feed nid',
    ),
  );

  /* Display: Blogroll */
  $handler = $view->new_display('panel_pane', 'Blogroll', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RBSC Blogs';
  $handler->display->display_options['display_description'] = 'List of all Departmental Blogs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'blog';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Blog Source */
  $handler->display->display_options['fields']['field_blog_source']['id'] = 'field_blog_source';
  $handler->display->display_options['fields']['field_blog_source']['table'] = 'field_data_field_blog_source';
  $handler->display->display_options['fields']['field_blog_source']['field'] = 'field_blog_source';
  $handler->display->display_options['fields']['field_blog_source']['label'] = '';
  $handler->display->display_options['fields']['field_blog_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_source']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_blog_source]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'feed' => 'feed',
  );
  $export['blog_item'] = $view;

  $view = new view();
  $view->name = 'blogs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blogs';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_blogs_node']['id'] = 'reverse_field_blogs_node';
  $handler->display->display_options['relationships']['reverse_field_blogs_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_blogs_node']['field'] = 'reverse_field_blogs_node';
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
    'feed' => 'feed',
  );
  $export['blogs'] = $view;

  $view = new view();
  $view->name = 'collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collection Strengths';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<span class="glyphicon glyphicon-eye-open"></span> Collection Strengths';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_collection_strength_image' => 'field_collection_strength_image',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Results:';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['id'] = 'field_collection_strength_target_id';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['field'] = 'field_collection_strength_target_id';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_division_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'collections/[nid_1]/division/[nid]';
  /* Field: Content: image */
  $handler->display->display_options['fields']['field_collection_strength_image']['id'] = 'field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['table'] = 'field_data_field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['field'] = 'field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['field_collection_strength_image']['label'] = '';
  $handler->display->display_options['fields']['field_collection_strength_image']['element_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_collection_strength_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_strength_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'collections/[nid_1]/division/[nid]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = '.media-heading';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_division_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
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
    'collection' => 'collection',
  );

  /* Display: Collection Strengths List */
  $handler = $view->new_display('block', 'Collection Strengths List', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: image */
  $handler->display->display_options['fields']['field_collection_strength_image']['id'] = 'field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['table'] = 'field_data_field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['field'] = 'field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['field_collection_strength_image']['label'] = '';
  $handler->display->display_options['fields']['field_collection_strength_image']['element_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_collection_strength_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_strength_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'collections/[nid_1]/division/[nid]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = '.media-heading';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );

  /* Display: Collection Stregths by Divison */
  $handler = $view->new_display('block', 'Collection Stregths by Divison', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['id'] = 'field_collection_strength_target_id';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['field'] = 'field_collection_strength_target_id';
  $handler->display->display_options['relationships']['field_collection_strength_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: image */
  $handler->display->display_options['fields']['field_collection_strength_image']['id'] = 'field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['table'] = 'field_data_field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['field'] = 'field_collection_strength_image';
  $handler->display->display_options['fields']['field_collection_strength_image']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['field_collection_strength_image']['label'] = '';
  $handler->display->display_options['fields']['field_collection_strength_image']['element_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_collection_strength_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_strength_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'collections/[nid_1]/division/[nid]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = '.media-heading';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_division_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Divison Collection Strengths */
  $handler = $view->new_display('panel_pane', 'Divison Collection Strengths', 'panel_pane_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['order'] = 'DESC';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_division',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Related Collections */
  $handler = $view->new_display('panel_pane', 'Related Collections', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Collections';
  $handler->display->display_options['display_description'] = 'Collections related to this one by topic.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_collection_strength',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_collection_strength_image' => 'field_collection_strength_image',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_collection_strength']['id'] = 'field_collection_strength';
  $handler->display->display_options['fields']['field_collection_strength']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['fields']['field_collection_strength']['field'] = 'field_collection_strength';
  $handler->display->display_options['fields']['field_collection_strength']['label'] = '';
  $handler->display->display_options['fields']['field_collection_strength']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_collection_strength']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_collection_strength']['delta_offset'] = '0';
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_division']['id'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['table'] = 'field_data_field_division';
  $handler->display->display_options['fields']['field_division']['field'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['label'] = '';
  $handler->display->display_options['fields']['field_division']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_division']['alter']['text'] = '( [field_division] )';
  $handler->display->display_options['fields']['field_division']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_division']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Related Topics */
  $handler = $view->new_display('panel_pane', 'Related Topics', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Topics';
  $handler->display->display_options['display_description'] = 'Topics related to this collection.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_collection_strength_image' => 'field_collection_strength_image',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_collection_strength']['id'] = 'field_collection_strength';
  $handler->display->display_options['fields']['field_collection_strength']['table'] = 'field_data_field_collection_strength';
  $handler->display->display_options['fields']['field_collection_strength']['field'] = 'field_collection_strength';
  $handler->display->display_options['fields']['field_collection_strength']['label'] = '';
  $handler->display->display_options['fields']['field_collection_strength']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_collection_strength']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_collection_strength']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_collection_strength']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: See Also */
  $handler = $view->new_display('panel_pane', 'See Also', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'See Also';
  $handler->display->display_options['display_description'] = 'Topics cross-references to this topic.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_see_also_node']['id'] = 'reverse_field_see_also_node';
  $handler->display->display_options['relationships']['reverse_field_see_also_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_see_also_node']['field'] = 'reverse_field_see_also_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_collection_strength_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_see_also_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'collection_strength' => 'collection_strength',
  );
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

  /* Display: Main Topic Entries */
  $handler = $view->new_display('panel_pane', 'Main Topic Entries', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Main Topic Entries';
  $handler->display->display_options['display_description'] = 'Topics for which this is a core collection.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_collection_strength_image' => 'field_collection_strength_image',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_core_collections_target_id']['id'] = 'field_core_collections_target_id';
  $handler->display->display_options['relationships']['field_core_collections_target_id']['table'] = 'field_data_field_core_collections';
  $handler->display->display_options['relationships']['field_core_collections_target_id']['field'] = 'field_core_collections_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_core_collections_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'collection_strength' => 'collection_strength',
  );
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
  $export['collection'] = $view;

  $view = new view();
  $view->name = 'division_curator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Division Curator';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'generic-staff-address';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_curator_target_id']['id'] = 'field_curator_target_id';
  $handler->display->display_options['relationships']['field_curator_target_id']['table'] = 'field_data_field_curator';
  $handler->display->display_options['relationships']['field_curator_target_id']['field'] = 'field_curator_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_staff_title']['id'] = 'field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['table'] = 'field_data_field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['field'] = 'field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['field_staff_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_title']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_staff_contact_email']['id'] = 'field_staff_contact_email';
  $handler->display->display_options['fields']['field_staff_contact_email']['table'] = 'field_data_field_staff_contact_email';
  $handler->display->display_options['fields']['field_staff_contact_email']['field'] = 'field_staff_contact_email';
  $handler->display->display_options['fields']['field_staff_contact_email']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['field_staff_contact_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_contact_email']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
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
    'division' => 'division',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'generic-staff-address';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'staff-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_staff_title']['id'] = 'field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['table'] = 'field_data_field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['field'] = 'field_staff_title';
  $handler->display->display_options['fields']['field_staff_title']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['field_staff_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_staff_title']['element_class'] = 'staff-position';
  $handler->display->display_options['fields']['field_staff_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_title']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_staff_contact_email']['id'] = 'field_staff_contact_email';
  $handler->display->display_options['fields']['field_staff_contact_email']['table'] = 'field_data_field_staff_contact_email';
  $handler->display->display_options['fields']['field_staff_contact_email']['field'] = 'field_staff_contact_email';
  $handler->display->display_options['fields']['field_staff_contact_email']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['field_staff_contact_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_contact_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_staff_contact_email']['element_class'] = 'staff-email';
  $handler->display->display_options['fields']['field_staff_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_contact_email']['settings'] = array(
    'class' => '',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['relationship'] = 'field_curator_target_id';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_staff_phone']['element_class'] = 'staff-phone';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_phone']['settings'] = array(
    'class' => '',
  );
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

  /* Display: Generic Staff Address */
  $handler = $view->new_display('panel_pane', 'Generic Staff Address', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Can accept a node-id on the content pane.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
    'rbsc_staff_member' => 'rbsc_staff_member',
  );
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
  $export['division_curator'] = $view;

  $view = new view();
  $view->name = 'division_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Division Location';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_location_target_id']['id'] = 'field_division_location_target_id';
  $handler->display->display_options['relationships']['field_division_location_target_id']['table'] = 'field_data_field_division_location';
  $handler->display->display_options['relationships']['field_division_location_target_id']['field'] = 'field_division_location_target_id';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_location_image']['id'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['table'] = 'field_data_field_location_image';
  $handler->display->display_options['fields']['field_location_image']['field'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['relationship'] = 'field_division_location_target_id';
  $handler->display->display_options['fields']['field_location_image']['label'] = '';
  $handler->display->display_options['fields']['field_location_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_image']['element_class'] = 'img-thumbnail';
  $handler->display->display_options['fields']['field_location_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_division_location_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_division_location_target_id';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
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
    'division' => 'division',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'collection-location';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_location_image']['id'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['table'] = 'field_data_field_location_image';
  $handler->display->display_options['fields']['field_location_image']['field'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['relationship'] = 'field_division_location_target_id';
  $handler->display->display_options['fields']['field_location_image']['label'] = '';
  $handler->display->display_options['fields']['field_location_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_image']['element_class'] = 'img-thumbnail';
  $handler->display->display_options['fields']['field_location_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_division_location_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_division_location_target_id';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'field_division_location_target_id';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'class' => '',
  );
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
  $export['division_location'] = $view;

  return $export;
}

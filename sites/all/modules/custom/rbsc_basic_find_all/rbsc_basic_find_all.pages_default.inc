<?php
/**
 * @file
 * rbsc_basic_find_all.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function rbsc_basic_find_all_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbsc_find_all_page';
  $page->task = 'page';
  $page->admin_title = 'RBSC Find All Page';
  $page->admin_description = '';
  $page->path = 'find/all/%query';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbsc_find_all_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbsc_find_all_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Results for "%query:html_safe"';
  $display->uuid = '16928f5f-c30b-4a46-9345-3d18833a4255';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c88a244-059b-44b8-8c3f-54809cb0df2c';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'catalog_block-catalog_search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<i class="icon-books"></i> Books+ Search Results',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c88a244-059b-44b8-8c3f-54809cb0df2c';
    $display->content['new-1c88a244-059b-44b8-8c3f-54809cb0df2c'] = $pane;
    $display->panels['first'][0] = 'new-1c88a244-059b-44b8-8c3f-54809cb0df2c';
    $pane = new stdClass();
    $pane->pid = 'new-86d51c41-1e1f-4414-b602-8e133b2fa81f';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'catalog_block-catalog_pulfa_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86d51c41-1e1f-4414-b602-8e133b2fa81f';
    $display->content['new-86d51c41-1e1f-4414-b602-8e133b2fa81f'] = $pane;
    $display->panels['second'][0] = 'new-86d51c41-1e1f-4414-b602-8e133b2fa81f';
    $pane = new stdClass();
    $pane->pid = 'new-773fb7a7-5690-48e3-a287-db5aae80e4a5';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'catalog_block-catalog_pudl_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '773fb7a7-5690-48e3-a287-db5aae80e4a5';
    $display->content['new-773fb7a7-5690-48e3-a287-db5aae80e4a5'] = $pane;
    $display->panels['second'][1] = 'new-773fb7a7-5690-48e3-a287-db5aae80e4a5';
    $pane = new stdClass();
    $pane->pid = 'new-195df564-b077-4925-9bf0-2cd6dc9603bf';
    $pane->panel = 'third';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbsc_basic_node_search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '195df564-b077-4925-9bf0-2cd6dc9603bf';
    $display->content['new-195df564-b077-4925-9bf0-2cd6dc9603bf'] = $pane;
    $display->panels['third'][0] = 'new-195df564-b077-4925-9bf0-2cd6dc9603bf';
    $pane = new stdClass();
    $pane->pid = 'new-d58c3f4b-8b6b-4ae1-914a-04b354ca6d9b';
    $pane->panel = 'third';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_search-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd58c3f4b-8b6b-4ae1-914a-04b354ca6d9b';
    $display->content['new-d58c3f4b-8b6b-4ae1-914a-04b354ca6d9b'] = $pane;
    $display->panels['third'][1] = 'new-d58c3f4b-8b6b-4ae1-914a-04b354ca6d9b';
    $pane = new stdClass();
    $pane->pid = 'new-a6c9677f-190b-492c-8361-85dd52325230';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'allsearch_block-allsearch_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6c9677f-190b-492c-8361-85dd52325230';
    $display->content['new-a6c9677f-190b-492c-8361-85dd52325230'] = $pane;
    $display->panels['top'][0] = 'new-a6c9677f-190b-492c-8361-85dd52325230';
    $pane = new stdClass();
    $pane->pid = 'new-0e6d25d8-5dc8-4b64-8284-612db426a58d';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Results section anchor links',
      'title' => '',
      'body' => '<div class="results-section"><label class="show-result-section-menu" for="show-result-section-menu">Skip to Section</label><input id="show-result-section-menu" type="checkbox" /><ul id="result-section-menu" class="result-section-menu"><li><a href="#catalog_block-catalog_search_results">Books+</a></li><li><a href="#catalog_block-catalog_pulfa_results"> Library Archives</a></li><li><a href="#catalog_block-catalog_pudl_results"> Digital Library</a></li><li><a href="#rbsc_basic_node_search-panel_pane_1">RBSC Site Content</a></li><li><a href="#blog_search-panel_pane_2">Blogs</a></li></ul></div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0e6d25d8-5dc8-4b64-8284-612db426a58d';
    $display->content['new-0e6d25d8-5dc8-4b64-8284-612db426a58d'] = $pane;
    $display->panels['top'][1] = 'new-0e6d25d8-5dc8-4b64-8284-612db426a58d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-195df564-b077-4925-9bf0-2cd6dc9603bf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbsc_find_all_page'] = $page;

  return $pages;

}

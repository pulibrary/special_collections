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
  $page->access = array();
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
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Results %query:html_safe';
  $display->uuid = '16928f5f-c30b-4a46-9345-3d18833a4255';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d19eecce-dc83-4bc1-85f5-37631e31121e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk';
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
    $pane->uuid = 'd19eecce-dc83-4bc1-85f5-37631e31121e';
    $display->content['new-d19eecce-dc83-4bc1-85f5-37631e31121e'] = $pane;
    $display->panels['left'][0] = 'new-d19eecce-dc83-4bc1-85f5-37631e31121e';
    $pane = new stdClass();
    $pane->pid = 'new-195df564-b077-4925-9bf0-2cd6dc9603bf';
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-195df564-b077-4925-9bf0-2cd6dc9603bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-195df564-b077-4925-9bf0-2cd6dc9603bf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbsc_find_all_page'] = $page;

  return $pages;

}

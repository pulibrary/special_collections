<?php
/**
 * @file
 * topics_collection_list.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function topics_collection_list_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Topics',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Collection Strength [field_collection_strength])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_collection_strength-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Division [field_division])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_division-node-node',
        'delta' => 0,
        'context' => 'relationship_entity_from_field:field_collection_strength-node-node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'collection_strength' => 'collection_strength',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:field_division Collections';
  $display->uuid = 'ce9fbf6e-d2ef-4ecb-978c-2b7d3f4c9a72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9934b072-4de0-4046-aaee-d636e5ee3aac';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        1 => 'relationship_entity_from_field:field_collection_strength-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9934b072-4de0-4046-aaee-d636e5ee3aac';
    $display->content['new-9934b072-4de0-4046-aaee-d636e5ee3aac'] = $pane;
    $display->panels['right'][0] = 'new-9934b072-4de0-4046-aaee-d636e5ee3aac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function topics_collection_list_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'collections_by_division_page';
  $page->task = 'page';
  $page->admin_title = 'Collections by Division Page';
  $page->admin_description = '';
  $page->path = 'collections/%col_strengthnid/division/%divisionnid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'col_strengthnid' => array(
      'id' => 1,
      'identifier' => 'Collection Strength ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'divisionnid' => array(
      'id' => 2,
      'identifier' => 'Division ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_collections_by_division_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'collections_by_division_page';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%divisionnid:title',
    'panels_breadcrumbs_paths' => '%divisionnid:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%col_strengthnid:title - %divisionnid:title';
  $display->uuid = '28fd46e1-7f60-474e-9f9d-e49c5214f50d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f8783e64-a493-4080-857a-12bbef4bdf65';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f8783e64-a493-4080-857a-12bbef4bdf65';
    $display->content['new-f8783e64-a493-4080-857a-12bbef4bdf65'] = $pane;
    $display->panels['right'][0] = 'new-f8783e64-a493-4080-857a-12bbef4bdf65';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f8783e64-a493-4080-857a-12bbef4bdf65';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['collections_by_division_page'] = $page;

  return $pages;

}

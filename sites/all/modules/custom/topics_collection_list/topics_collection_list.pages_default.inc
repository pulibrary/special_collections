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
  $handler->weight = -26;
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Explore',
    'panels_breadcrumbs_paths' => 'explore',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
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
    $pane->panel = 'second';
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
    $display->panels['second'][0] = 'new-9934b072-4de0-4046-aaee-d636e5ee3aac';
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
  $page->admin_title = 'Division Topic';
  $page->admin_description = '';
  $page->path = 'divisions/%divisionnid/topics/%col_strengthnid/';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'divisionnid' => array(
      'id' => 2,
      'identifier' => 'Division ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'col_strengthnid' => array(
      'id' => 1,
      'identifier' => 'Collection Strength ID',
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
    'panels_breadcrumbs_titles' => 'Home
Collections
%divisionnid:title',
    'panels_breadcrumbs_paths' => '<front>
collections
%divisionnid:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%col_strengthnid:title';
  $display->uuid = '28fd46e1-7f60-474e-9f9d-e49c5214f50d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5f2bc64b-5aa6-499c-99d5-16b23120d18e';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%col_strengthnid:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'topic-img',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5f2bc64b-5aa6-499c-99d5-16b23120d18e';
    $display->content['new-5f2bc64b-5aa6-499c-99d5-16b23120d18e'] = $pane;
    $display->panels['first'][0] = 'new-5f2bc64b-5aa6-499c-99d5-16b23120d18e';
    $pane = new stdClass();
    $pane->pid = 'new-34c1e092-7b91-45f8-8df1-911b13c83afe';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_location-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%divisionnid:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '34c1e092-7b91-45f8-8df1-911b13c83afe';
    $display->content['new-34c1e092-7b91-45f8-8df1-911b13c83afe'] = $pane;
    $display->panels['first'][1] = 'new-34c1e092-7b91-45f8-8df1-911b13c83afe';
    $pane = new stdClass();
    $pane->pid = 'new-518b7b09-b262-4ff8-950d-3453a801ef11';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_curator-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%divisionnid:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '518b7b09-b262-4ff8-950d-3453a801ef11';
    $display->content['new-518b7b09-b262-4ff8-950d-3453a801ef11'] = $pane;
    $display->panels['first'][2] = 'new-518b7b09-b262-4ff8-950d-3453a801ef11';
    $pane = new stdClass();
    $pane->pid = 'new-46bcd965-b465-462d-9274-897f4ab11b27';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_quick_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%divisionnid:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '46bcd965-b465-462d-9274-897f4ab11b27';
    $display->content['new-46bcd965-b465-462d-9274-897f4ab11b27'] = $pane;
    $display->panels['first'][3] = 'new-46bcd965-b465-462d-9274-897f4ab11b27';
    $pane = new stdClass();
    $pane->pid = 'new-1dff1df7-d3ae-4dbf-95cf-b785259c80e3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%col_strengthnid:nid',
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
    $pane->uuid = '1dff1df7-d3ae-4dbf-95cf-b785259c80e3';
    $display->content['new-1dff1df7-d3ae-4dbf-95cf-b785259c80e3'] = $pane;
    $display->panels['middle'][0] = 'new-1dff1df7-d3ae-4dbf-95cf-b785259c80e3';
    $pane = new stdClass();
    $pane->pid = 'new-f8783e64-a493-4080-857a-12bbef4bdf65';
    $pane->panel = 'middle';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f8783e64-a493-4080-857a-12bbef4bdf65';
    $display->content['new-f8783e64-a493-4080-857a-12bbef4bdf65'] = $pane;
    $display->panels['middle'][1] = 'new-f8783e64-a493-4080-857a-12bbef4bdf65';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f8783e64-a493-4080-857a-12bbef4bdf65';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['collections_by_division_page'] = $page;

  return $pages;

}

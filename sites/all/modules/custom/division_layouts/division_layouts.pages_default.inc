<?php

/**
 * @file
 * division_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function division_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Division Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Division [field_division])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_division-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Blogs [field_blogs])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_blogs-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node from Node (on Node: Blogs [field_blogs]) 2',
        'keyword' => 'node_4',
        'name' => 'entity_from_field:field_blogs-node-node',
        'delta' => '1',
        'context' => 'argument_entity_id:node_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'division' => 'division',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections',
    'panels_breadcrumbs_paths' => 'collections',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '40b20fe5-af0d-4624-b465-f0dbb291ee56';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dc4495ef-7c2a-4a46-81f6-a634633eb3c8';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'division_image-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = 'dc4495ef-7c2a-4a46-81f6-a634633eb3c8';
  $display->content['new-dc4495ef-7c2a-4a46-81f6-a634633eb3c8'] = $pane;
  $display->panels['first'][0] = 'new-dc4495ef-7c2a-4a46-81f6-a634633eb3c8';
  $pane = new stdClass();
  $pane->pid = 'new-7774b7a0-9a4a-494e-8e37-5f52c738d51b';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'division_location-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = '7774b7a0-9a4a-494e-8e37-5f52c738d51b';
  $display->content['new-7774b7a0-9a4a-494e-8e37-5f52c738d51b'] = $pane;
  $display->panels['first'][1] = 'new-7774b7a0-9a4a-494e-8e37-5f52c738d51b';
  $pane = new stdClass();
  $pane->pid = 'new-01c8c6b7-839e-4752-a5d2-d305ddd8ed0d';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'division_curator-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = '01c8c6b7-839e-4752-a5d2-d305ddd8ed0d';
  $display->content['new-01c8c6b7-839e-4752-a5d2-d305ddd8ed0d'] = $pane;
  $display->panels['first'][2] = 'new-01c8c6b7-839e-4752-a5d2-d305ddd8ed0d';
  $pane = new stdClass();
  $pane->pid = 'new-b8e75c3a-1d57-4a56-9d9f-6506620780c5';
  $pane->panel = 'first';
  $pane->type = 'views_panes';
  $pane->subtype = 'division_quick_links-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = 'b8e75c3a-1d57-4a56-9d9f-6506620780c5';
  $display->content['new-b8e75c3a-1d57-4a56-9d9f-6506620780c5'] = $pane;
  $display->panels['first'][3] = 'new-b8e75c3a-1d57-4a56-9d9f-6506620780c5';
  $pane = new stdClass();
  $pane->pid = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'jquery_expander',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
      'expandText' => 'Read more »',
      'expandPrefix' => '...',
      'collapseTimer' => '',
      'slicePoint' => '345',
      'userCollapseText' => 'Read less',
      'userCollapsePrefix' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'desc',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
  $display->content['new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e'] = $pane;
  $display->panels['middle'][0] = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
  $pane = new stdClass();
  $pane->pid = 'new-4e26b406-2d8d-4d24-8128-d9d6414e5f09';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'division_collection_strengths-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%node:nid',
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
  $pane->uuid = '4e26b406-2d8d-4d24-8128-d9d6414e5f09';
  $display->content['new-4e26b406-2d8d-4d24-8128-d9d6414e5f09'] = $pane;
  $display->panels['middle'][1] = 'new-4e26b406-2d8d-4d24-8128-d9d6414e5f09';
  $pane = new stdClass();
  $pane->pid = 'new-50da6b08-bbe4-4f0b-b0d9-3067c69c680f';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_item-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'arguments' => array(
      'feed_nid' => '%node_3:nid',
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
  $pane->uuid = '50da6b08-bbe4-4f0b-b0d9-3067c69c680f';
  $display->content['new-50da6b08-bbe4-4f0b-b0d9-3067c69c680f'] = $pane;
  $display->panels['second'][0] = 'new-50da6b08-bbe4-4f0b-b0d9-3067c69c680f';
  $pane = new stdClass();
  $pane->pid = 'new-8e624815-5db6-4277-9cac-555414970786';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_item-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'feed_nid' => '%node_4:nid',
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
  $pane->uuid = '8e624815-5db6-4277-9cac-555414970786';
  $display->content['new-8e624815-5db6-4277-9cac-555414970786'] = $pane;
  $display->panels['second'][1] = 'new-8e624815-5db6-4277-9cac-555414970786';
  $pane = new stdClass();
  $pane->pid = 'new-68b34492-e84a-413c-95a8-e6baea59e636';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'filtered_collection_list-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid_1' => '%node:nid',
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
  $pane->uuid = '68b34492-e84a-413c-95a8-e6baea59e636';
  $display->content['new-68b34492-e84a-413c-95a8-e6baea59e636'] = $pane;
  $display->panels['second'][2] = 'new-68b34492-e84a-413c-95a8-e6baea59e636';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

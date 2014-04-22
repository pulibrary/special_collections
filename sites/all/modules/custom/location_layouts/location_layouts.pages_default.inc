<?php
/**
 * @file
 * location_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function location_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Locations Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Blogs [field_blogs])',
        'keyword' => 'blogs',
        'name' => 'entity_from_field:field_blogs-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'location' => 'location',
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
  $display->layout = 'grid-menu-with-sidebar';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 'main-column',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
        'children' => array(),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(
          0 => 2,
        ),
        'class' => 'middle-col',
        'contains' => 'row',
        'bootstrap_class' => array(
          'md' => 'col-md-9',
        ),
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 4,
          1 => 3,
        ),
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'parent' => '2',
        'children' => array(),
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'md' => 'col-md-6',
          'lg' => 'col-lg-6',
        ),
      ),
      4 => array(
        'type' => 'column',
        'parent' => '2',
        'children' => array(),
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'md' => 'col-md-6',
          'lg' => 'col-lg-6',
        ),
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'feature-left' => NULL,
      'feature-right' => NULL,
      'grid-A' => NULL,
      'grid-B' => NULL,
      'grid-C' => NULL,
      'grid-D' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bc8ef57d-2eae-4bd6-a269-81d444e00642';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b4c8af70-8e84-4ff5-abed-091d756a0b80';
    $pane->panel = 'feature-left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'rbsc_grid_view_small_double_feature',
      'link_node_title' => 1,
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
    $pane->uuid = 'b4c8af70-8e84-4ff5-abed-091d756a0b80';
    $display->content['new-b4c8af70-8e84-4ff5-abed-091d756a0b80'] = $pane;
    $display->panels['feature-left'][0] = 'new-b4c8af70-8e84-4ff5-abed-091d756a0b80';
    $pane = new stdClass();
    $pane->pid = 'new-c75fbad6-7dc7-4dfa-9841-ddc048226db7';
    $pane->panel = 'feature-right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'rbsc_grid_view_small_double_feature',
      'link_node_title' => 1,
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
    $pane->uuid = 'c75fbad6-7dc7-4dfa-9841-ddc048226db7';
    $display->content['new-c75fbad6-7dc7-4dfa-9841-ddc048226db7'] = $pane;
    $display->panels['feature-right'][0] = 'new-c75fbad6-7dc7-4dfa-9841-ddc048226db7';
    $pane = new stdClass();
    $pane->pid = 'new-42612813-649d-4d71-83b7-f2807c3eae2b';
    $pane->panel = 'grid-A';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '10',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'rbsc_grid_view_small_feature',
      'link_node_title' => 1,
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
    $pane->uuid = '42612813-649d-4d71-83b7-f2807c3eae2b';
    $display->content['new-42612813-649d-4d71-83b7-f2807c3eae2b'] = $pane;
    $display->panels['grid-A'][0] = 'new-42612813-649d-4d71-83b7-f2807c3eae2b';
    $pane = new stdClass();
    $pane->pid = 'new-607c8a23-4b59-490e-bf2b-8942e911894d';
    $pane->panel = 'grid-B';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'rbsc_grid_view_small_feature',
      'link_node_title' => 1,
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
    $pane->uuid = '607c8a23-4b59-490e-bf2b-8942e911894d';
    $display->content['new-607c8a23-4b59-490e-bf2b-8942e911894d'] = $pane;
    $display->panels['grid-B'][0] = 'new-607c8a23-4b59-490e-bf2b-8942e911894d';
    $pane = new stdClass();
    $pane->pid = 'new-f12ffb6d-401c-48d9-99fd-e3a420624ab6';
    $pane->panel = 'grid-C';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '340',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'rbsc_grid_view_small_feature',
      'link_node_title' => 1,
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
    $pane->uuid = 'f12ffb6d-401c-48d9-99fd-e3a420624ab6';
    $display->content['new-f12ffb6d-401c-48d9-99fd-e3a420624ab6'] = $pane;
    $display->panels['grid-C'][0] = 'new-f12ffb6d-401c-48d9-99fd-e3a420624ab6';
    $pane = new stdClass();
    $pane->pid = 'new-17c36fcd-0d59-4dac-9f52-bde0d57ef391';
    $pane->panel = 'grid-D';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '341',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'rbsc_grid_view_small_feature',
      'link_node_title' => 1,
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
    $pane->uuid = '17c36fcd-0d59-4dac-9f52-bde0d57ef391';
    $display->content['new-17c36fcd-0d59-4dac-9f52-bde0d57ef391'] = $pane;
    $display->panels['grid-D'][0] = 'new-17c36fcd-0d59-4dac-9f52-bde0d57ef391';
    $pane = new stdClass();
    $pane->pid = 'new-63f5af95-8513-4ea2-b2a8-1bf90e4c6f12';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_info-panel_pane_1';
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
    $pane->uuid = '63f5af95-8513-4ea2-b2a8-1bf90e4c6f12';
    $display->content['new-63f5af95-8513-4ea2-b2a8-1bf90e4c6f12'] = $pane;
    $display->panels['sidebar'][0] = 'new-63f5af95-8513-4ea2-b2a8-1bf90e4c6f12';
    $pane = new stdClass();
    $pane->pid = 'new-3e096c44-9afa-4b31-80e6-d1820a6c1e9e';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'research_account_block-research_account_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3e096c44-9afa-4b31-80e6-d1820a6c1e9e';
    $display->content['new-3e096c44-9afa-4b31-80e6-d1820a6c1e9e'] = $pane;
    $display->panels['sidebar'][1] = 'new-3e096c44-9afa-4b31-80e6-d1820a6c1e9e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  return $export;
}

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
  $handler->weight = 0;
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
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
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
  $display->title = '%node:title';
  $display->uuid = '40b20fe5-af0d-4624-b465-f0dbb291ee56';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7774b7a0-9a4a-494e-8e37-5f52c738d51b';
    $pane->panel = 'left';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7774b7a0-9a4a-494e-8e37-5f52c738d51b';
    $display->content['new-7774b7a0-9a4a-494e-8e37-5f52c738d51b'] = $pane;
    $display->panels['left'][0] = 'new-7774b7a0-9a4a-494e-8e37-5f52c738d51b';
    $pane = new stdClass();
    $pane->pid = 'new-01c8c6b7-839e-4752-a5d2-d305ddd8ed0d';
    $pane->panel = 'left';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '01c8c6b7-839e-4752-a5d2-d305ddd8ed0d';
    $display->content['new-01c8c6b7-839e-4752-a5d2-d305ddd8ed0d'] = $pane;
    $display->panels['left'][1] = 'new-01c8c6b7-839e-4752-a5d2-d305ddd8ed0d';
    $pane = new stdClass();
    $pane->pid = 'new-07389d80-23a3-402e-949d-8e405aecf0c6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'policy_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '07389d80-23a3-402e-949d-8e405aecf0c6';
    $display->content['new-07389d80-23a3-402e-949d-8e405aecf0c6'] = $pane;
    $display->panels['left'][2] = 'new-07389d80-23a3-402e-949d-8e405aecf0c6';
    $pane = new stdClass();
    $pane->pid = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->pid = 'new-1298285e-f56e-439f-ba1a-df4d0baff25c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = '1298285e-f56e-439f-ba1a-df4d0baff25c';
    $display->content['new-1298285e-f56e-439f-ba1a-df4d0baff25c'] = $pane;
    $display->panels['middle'][1] = 'new-1298285e-f56e-439f-ba1a-df4d0baff25c';
    $pane = new stdClass();
    $pane->pid = 'new-50da6b08-bbe4-4f0b-b0d9-3067c69c680f';
    $pane->panel = 'right';
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
    $display->panels['right'][0] = 'new-50da6b08-bbe4-4f0b-b0d9-3067c69c680f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

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

<?php
/**
 * @file
 * front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function front_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Front Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
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
  $display->title = '';
  $display->uuid = '4ffa9de3-98a4-496f-801c-dc1fd79c2a7b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-39331a24-5ce1-4570-b0be-7ea8a2dc0dd0';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = '39331a24-5ce1-4570-b0be-7ea8a2dc0dd0';
    $display->content['new-39331a24-5ce1-4570-b0be-7ea8a2dc0dd0'] = $pane;
    $display->panels['left'][0] = 'new-39331a24-5ce1-4570-b0be-7ea8a2dc0dd0';
    $pane = new stdClass();
    $pane->pid = 'new-8391fab1-3c23-4d6d-888c-99ba5aca8c9f';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
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
    $pane->uuid = '8391fab1-3c23-4d6d-888c-99ba5aca8c9f';
    $display->content['new-8391fab1-3c23-4d6d-888c-99ba5aca8c9f'] = $pane;
    $display->panels['top'][0] = 'new-8391fab1-3c23-4d6d-888c-99ba5aca8c9f';
    $pane = new stdClass();
    $pane->pid = 'new-ae94e051-f3d4-41f6-8613-9b7b95916af1';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ae94e051-f3d4-41f6-8613-9b7b95916af1';
    $display->content['new-ae94e051-f3d4-41f6-8613-9b7b95916af1'] = $pane;
    $display->panels['top'][1] = 'new-ae94e051-f3d4-41f6-8613-9b7b95916af1';
    $pane = new stdClass();
    $pane->pid = 'new-362f38e6-121b-4216-a6d3-0dde73950c77';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '10',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '362f38e6-121b-4216-a6d3-0dde73950c77';
    $display->content['new-362f38e6-121b-4216-a6d3-0dde73950c77'] = $pane;
    $display->panels['top'][2] = 'new-362f38e6-121b-4216-a6d3-0dde73950c77';
    $pane = new stdClass();
    $pane->pid = 'new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $display->content['new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf'] = $pane;
    $display->panels['top'][3] = 'new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $pane = new stdClass();
    $pane->pid = 'new-5a044ae8-492b-4cc6-8883-1bfd2d6d6f31';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '322',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5a044ae8-492b-4cc6-8883-1bfd2d6d6f31';
    $display->content['new-5a044ae8-492b-4cc6-8883-1bfd2d6d6f31'] = $pane;
    $display->panels['top'][4] = 'new-5a044ae8-492b-4cc6-8883-1bfd2d6d6f31';
    $pane = new stdClass();
    $pane->pid = 'new-4021fe41-20e6-483d-9202-ee80e92334e8';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '323',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4021fe41-20e6-483d-9202-ee80e92334e8';
    $display->content['new-4021fe41-20e6-483d-9202-ee80e92334e8'] = $pane;
    $display->panels['top'][5] = 'new-4021fe41-20e6-483d-9202-ee80e92334e8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}

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
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Locations Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'menu-grid',
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
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mudd',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'landingpage';
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
      'loc-desc' => NULL,
      'loc-news' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Seeley G. Mudd Manuscript Library';
  $display->uuid = 'bc8ef57d-2eae-4bd6-a269-81d444e00642';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18e85b53-e159-4ae6-b7e2-eca50c47d753';
    $pane->panel = 'first';
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
    $pane->uuid = '18e85b53-e159-4ae6-b7e2-eca50c47d753';
    $display->content['new-18e85b53-e159-4ae6-b7e2-eca50c47d753'] = $pane;
    $display->panels['first'][0] = 'new-18e85b53-e159-4ae6-b7e2-eca50c47d753';
    $pane = new stdClass();
    $pane->pid = 'new-b2ee202a-5504-4a36-9ea2-0c901a85a368';
    $pane->panel = 'fourth';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'feed_nid' => '359',
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
    $pane->uuid = 'b2ee202a-5504-4a36-9ea2-0c901a85a368';
    $display->content['new-b2ee202a-5504-4a36-9ea2-0c901a85a368'] = $pane;
    $display->panels['fourth'][0] = 'new-b2ee202a-5504-4a36-9ea2-0c901a85a368';
    $pane = new stdClass();
    $pane->pid = 'new-26cf55f0-9f93-4267-ba2b-cd17f1085da9';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '228',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'menugrid',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
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
    $pane->uuid = '26cf55f0-9f93-4267-ba2b-cd17f1085da9';
    $display->content['new-26cf55f0-9f93-4267-ba2b-cd17f1085da9'] = $pane;
    $display->panels['second'][0] = 'new-26cf55f0-9f93-4267-ba2b-cd17f1085da9';
    $pane = new stdClass();
    $pane->pid = 'new-cec67a88-a8cd-4721-bb84-542575a1c937';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '229',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'menugrid',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
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
    $pane->uuid = 'cec67a88-a8cd-4721-bb84-542575a1c937';
    $display->content['new-cec67a88-a8cd-4721-bb84-542575a1c937'] = $pane;
    $display->panels['second'][1] = 'new-cec67a88-a8cd-4721-bb84-542575a1c937';
    $pane = new stdClass();
    $pane->pid = 'new-c4eabe36-2766-4914-b887-3115741e8f1f';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '16491',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'menugrid',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c4eabe36-2766-4914-b887-3115741e8f1f';
    $display->content['new-c4eabe36-2766-4914-b887-3115741e8f1f'] = $pane;
    $display->panels['second'][2] = 'new-c4eabe36-2766-4914-b887-3115741e8f1f';
    $pane = new stdClass();
    $pane->pid = 'new-e76cc13d-78e1-400b-99f2-717417d55fbd';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6295',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'menugrid',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e76cc13d-78e1-400b-99f2-717417d55fbd';
    $display->content['new-e76cc13d-78e1-400b-99f2-717417d55fbd'] = $pane;
    $display->panels['second'][3] = 'new-e76cc13d-78e1-400b-99f2-717417d55fbd';
    $pane = new stdClass();
    $pane->pid = 'new-409e3e26-f602-4ff7-af5d-fa05ad2d3205';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6298',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'menugrid',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '409e3e26-f602-4ff7-af5d-fa05ad2d3205';
    $display->content['new-409e3e26-f602-4ff7-af5d-fa05ad2d3205'] = $pane;
    $display->panels['second'][4] = 'new-409e3e26-f602-4ff7-af5d-fa05ad2d3205';
    $pane = new stdClass();
    $pane->pid = 'new-b0d8bcce-369a-4107-9786-622854957316';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'menugrid',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b0d8bcce-369a-4107-9786-622854957316';
    $display->content['new-b0d8bcce-369a-4107-9786-622854957316'] = $pane;
    $display->panels['second'][5] = 'new-b0d8bcce-369a-4107-9786-622854957316';
    $pane = new stdClass();
    $pane->pid = 'new-88499409-a34d-4b2d-863f-97186a9027d8';
    $pane->panel = 'third';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'About Us',
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
    $pane->uuid = '88499409-a34d-4b2d-863f-97186a9027d8';
    $display->content['new-88499409-a34d-4b2d-863f-97186a9027d8'] = $pane;
    $display->panels['third'][0] = 'new-88499409-a34d-4b2d-863f-97186a9027d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  return $export;
}

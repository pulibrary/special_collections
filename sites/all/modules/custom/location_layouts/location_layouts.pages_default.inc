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
    'panels_breadcrumbs_titles' => 'Visit Us',
    'panels_breadcrumbs_paths' => 'visit-us',
    'panels_breadcrumbs_home' => 1,
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
      'loc-desc' => NULL,
      'loc-news' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bc8ef57d-2eae-4bd6-a269-81d444e00642';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-28c6fea8-c9ba-4b3c-a65c-2c65e782c1c0';
    $pane->panel = 'feature-left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '228',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'color-grid-item',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28c6fea8-c9ba-4b3c-a65c-2c65e782c1c0';
    $display->content['new-28c6fea8-c9ba-4b3c-a65c-2c65e782c1c0'] = $pane;
    $display->panels['feature-left'][0] = 'new-28c6fea8-c9ba-4b3c-a65c-2c65e782c1c0';
    $pane = new stdClass();
    $pane->pid = 'new-959f723b-afce-41cc-9c81-39ce5751ba45';
    $pane->panel = 'feature-right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '229',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'color-grid-item',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '959f723b-afce-41cc-9c81-39ce5751ba45';
    $display->content['new-959f723b-afce-41cc-9c81-39ce5751ba45'] = $pane;
    $display->panels['feature-right'][0] = 'new-959f723b-afce-41cc-9c81-39ce5751ba45';
    $pane = new stdClass();
    $pane->pid = 'new-6185414a-6b9b-4ab3-adf7-ddb8566df132';
    $pane->panel = 'grid-A';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '16491',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
      'override_title' => 0,
      'override_title_text' => 'Managing University Records',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'color-grid-item-small',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6185414a-6b9b-4ab3-adf7-ddb8566df132';
    $display->content['new-6185414a-6b9b-4ab3-adf7-ddb8566df132'] = $pane;
    $display->panels['grid-A'][0] = 'new-6185414a-6b9b-4ab3-adf7-ddb8566df132';
    $pane = new stdClass();
    $pane->pid = 'new-f4f37cf4-e3f1-4e1c-948e-0f9edbd12f22';
    $pane->panel = 'grid-B';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6295',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
      'override_title' => 1,
      'override_title_text' => 'Transfer or Donate Records',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'color-grid-item-small',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4f37cf4-e3f1-4e1c-948e-0f9edbd12f22';
    $display->content['new-f4f37cf4-e3f1-4e1c-948e-0f9edbd12f22'] = $pane;
    $display->panels['grid-B'][0] = 'new-f4f37cf4-e3f1-4e1c-948e-0f9edbd12f22';
    $pane = new stdClass();
    $pane->pid = 'new-607c8a23-4b59-490e-bf2b-8942e911894d';
    $pane->panel = 'grid-C';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'color-grid-item-small',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '607c8a23-4b59-490e-bf2b-8942e911894d';
    $display->content['new-607c8a23-4b59-490e-bf2b-8942e911894d'] = $pane;
    $display->panels['grid-C'][0] = 'new-607c8a23-4b59-490e-bf2b-8942e911894d';
    $pane = new stdClass();
    $pane->pid = 'new-0c125b31-0ad3-444a-ae4e-af937903307c';
    $pane->panel = 'grid-D';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6298',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'double_feature',
      'link_node_title' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'color-grid-item-small',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c125b31-0ad3-444a-ae4e-af937903307c';
    $display->content['new-0c125b31-0ad3-444a-ae4e-af937903307c'] = $pane;
    $display->panels['grid-D'][0] = 'new-0c125b31-0ad3-444a-ae4e-af937903307c';
    $pane = new stdClass();
    $pane->pid = 'new-d233c601-7593-4bce-af45-d3d42dbd8c2b';
    $pane->panel = 'loc-desc';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_summary_or_trimmed',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd233c601-7593-4bce-af45-d3d42dbd8c2b';
    $display->content['new-d233c601-7593-4bce-af45-d3d42dbd8c2b'] = $pane;
    $display->panels['loc-desc'][0] = 'new-d233c601-7593-4bce-af45-d3d42dbd8c2b';
    $pane = new stdClass();
    $pane->pid = 'new-53e8baaf-b436-4559-98c8-aa2477c9f901';
    $pane->panel = 'loc-desc';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_info-panel_pane_3';
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
    $pane->uuid = '53e8baaf-b436-4559-98c8-aa2477c9f901';
    $display->content['new-53e8baaf-b436-4559-98c8-aa2477c9f901'] = $pane;
    $display->panels['loc-desc'][1] = 'new-53e8baaf-b436-4559-98c8-aa2477c9f901';
    $pane = new stdClass();
    $pane->pid = 'new-573447ce-5264-4489-8cc5-3db43bce8a10';
    $pane->panel = 'loc-desc';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align:right"><a href="/locations/seeley-g-mudd-library/more">Read more about the Mudd Manuscript Library</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '573447ce-5264-4489-8cc5-3db43bce8a10';
    $display->content['new-573447ce-5264-4489-8cc5-3db43bce8a10'] = $pane;
    $display->panels['loc-desc'][2] = 'new-573447ce-5264-4489-8cc5-3db43bce8a10';
    $pane = new stdClass();
    $pane->pid = 'new-711d014b-e741-40be-b8c2-208de0735f74';
    $pane->panel = 'loc-news';
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
    $pane->uuid = '711d014b-e741-40be-b8c2-208de0735f74';
    $display->content['new-711d014b-e741-40be-b8c2-208de0735f74'] = $pane;
    $display->panels['loc-news'][0] = 'new-711d014b-e741-40be-b8c2-208de0735f74';
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
    $pane->shown = FALSE;
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

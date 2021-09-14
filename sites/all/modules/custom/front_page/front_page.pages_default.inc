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
  $handler->weight = -24;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'not' => FALSE,
          'settings' => NULL,
        ),
      ),
    ),
    'body_classes_to_add' => 'menu-grid',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Front Page',
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => NULL,
      'default' => NULL,
      'featured' => NULL,
      'fifth' => NULL,
      'first' => NULL,
      'fourth' => NULL,
      'grid-A' => NULL,
      'grid-B' => NULL,
      'grid-C' => NULL,
      'grid-D' => NULL,
      'grid-E' => NULL,
      'grid-F' => NULL,
      'left' => NULL,
      'rbsc-desc' => NULL,
      'rbsc-news' => NULL,
      'right' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ffa9de3-98a4-496f-801c-dc1fd79c2a7b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7b238281-4aaf-485e-b2aa-29714513058c';
  $pane->panel = 'first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'override_title_text' => 'About Us',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7b238281-4aaf-485e-b2aa-29714513058c';
  $display->content['new-7b238281-4aaf-485e-b2aa-29714513058c'] = $pane;
  $display->panels['first'][0] = 'new-7b238281-4aaf-485e-b2aa-29714513058c';
  $pane = new stdClass();
  $pane->pid = 'new-80ee9efa-31bb-4d37-8bac-0723d01858cd';
  $pane->panel = 'second';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_item-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'feed_nid' => '',
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
  $pane->uuid = '80ee9efa-31bb-4d37-8bac-0723d01858cd';
  $display->content['new-80ee9efa-31bb-4d37-8bac-0723d01858cd'] = $pane;
  $display->panels['second'][0] = 'new-80ee9efa-31bb-4d37-8bac-0723d01858cd';
  $pane = new stdClass();
  $pane->pid = 'new-45980ad9-120f-4ee6-8b5c-f5e3166e774d';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'double_feature',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '280',
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '45980ad9-120f-4ee6-8b5c-f5e3166e774d';
  $display->content['new-45980ad9-120f-4ee6-8b5c-f5e3166e774d'] = $pane;
  $display->panels['top'][0] = 'new-45980ad9-120f-4ee6-8b5c-f5e3166e774d';
  $pane = new stdClass();
  $pane->pid = 'new-8b6a0683-32f7-4917-8639-3961e5d01422';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '1',
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '8b6a0683-32f7-4917-8639-3961e5d01422';
  $display->content['new-8b6a0683-32f7-4917-8639-3961e5d01422'] = $pane;
  $display->panels['top'][1] = 'new-8b6a0683-32f7-4917-8639-3961e5d01422';
  $pane = new stdClass();
  $pane->pid = 'new-539e57a6-f5c6-4e4b-8238-9c5ec98a28a0';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '5823',
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '539e57a6-f5c6-4e4b-8238-9c5ec98a28a0';
  $display->content['new-539e57a6-f5c6-4e4b-8238-9c5ec98a28a0'] = $pane;
  $display->panels['top'][2] = 'new-539e57a6-f5c6-4e4b-8238-9c5ec98a28a0';
  $pane = new stdClass();
  $pane->pid = 'new-6af6966b-f921-4a8e-9ff5-750908832997';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '12',
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = '6af6966b-f921-4a8e-9ff5-750908832997';
  $display->content['new-6af6966b-f921-4a8e-9ff5-750908832997'] = $pane;
  $display->panels['top'][3] = 'new-6af6966b-f921-4a8e-9ff5-750908832997';
  $pane = new stdClass();
  $pane->pid = 'new-ba40d0f3-0924-4060-8552-f984ff1eeb0a';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '350',
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = 'ba40d0f3-0924-4060-8552-f984ff1eeb0a';
  $display->content['new-ba40d0f3-0924-4060-8552-f984ff1eeb0a'] = $pane;
  $display->panels['top'][4] = 'new-ba40d0f3-0924-4060-8552-f984ff1eeb0a';
  $pane = new stdClass();
  $pane->pid = 'new-f875637d-0553-442a-a447-83df7e6e839d';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '340',
    'override_title' => 0,
    'override_title_heading' => 'h2',
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
  $pane->uuid = 'f875637d-0553-442a-a447-83df7e6e839d';
  $display->content['new-f875637d-0553-442a-a447-83df7e6e839d'] = $pane;
  $display->panels['top'][5] = 'new-f875637d-0553-442a-a447-83df7e6e839d';
  $pane = new stdClass();
  $pane->pid = 'new-fa64c375-437a-4c86-bef0-9d1702a539a1';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '341',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'fa64c375-437a-4c86-bef0-9d1702a539a1';
  $display->content['new-fa64c375-437a-4c86-bef0-9d1702a539a1'] = $pane;
  $display->panels['top'][6] = 'new-fa64c375-437a-4c86-bef0-9d1702a539a1';
  $pane = new stdClass();
  $pane->pid = 'new-9fd0b080-44b0-4deb-91e7-0c2b5f9435ac';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'double_feature',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '20538',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9fd0b080-44b0-4deb-91e7-0c2b5f9435ac';
  $display->content['new-9fd0b080-44b0-4deb-91e7-0c2b5f9435ac'] = $pane;
  $display->panels['top'][7] = 'new-9fd0b080-44b0-4deb-91e7-0c2b5f9435ac';
  $pane = new stdClass();
  $pane->pid = 'new-563ff844-6b7a-47ff-a30d-50ceb264d26f';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => 'menugrid',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '14',
    'override_title' => 0,
    'override_title_heading' => 'h2',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '563ff844-6b7a-47ff-a30d-50ceb264d26f';
  $display->content['new-563ff844-6b7a-47ff-a30d-50ceb264d26f'] = $pane;
  $display->panels['top'][8] = 'new-563ff844-6b7a-47ff-a30d-50ceb264d26f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'not' => FALSE,
          'settings' => NULL,
        ),
      ),
    ),
    'body_classes_to_add' => '',
    'body_classes_to_remove' => '',
    'contexts' => array(),
    'css' => '',
    'css_id' => '',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'relationships' => array(),
    'title' => 'Homepage',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'children' => array(
          0 => 'main',
        ),
        'contains' => 'column',
        'parent' => NULL,
        'type' => 'row',
      ),
      'grid_box_a' => array(
        'class' => 'col-sm-12 col-md-6 img-grid',
        'parent' => 'main-row',
        'title' => 'Grid Box A',
        'type' => 'region',
        'width' => '585',
        'width_type' => 'px',
      ),
      'grid_box_b' => array(
        'class' => 'col-sm-6 col-md-3 img-grid',
        'parent' => 'main-row',
        'title' => 'Grid Box B',
        'type' => 'region',
        'width' => '292',
        'width_type' => 'px',
      ),
      'grid_box_c' => array(
        'class' => 'col-sm-6 col-md-3 img-grid',
        'parent' => 'main-row',
        'title' => 'Grid Box C',
        'type' => 'region',
        'width' => '291',
        'width_type' => 'px',
      ),
      'grid_d_box' => array(
        'class' => 'col-sm-6 col-md-3 img-grid',
        'parent' => '1',
        'title' => 'Grid D Box',
        'type' => 'region',
        'width' => '292',
        'width_type' => 'px',
      ),
      'grid_e_box' => array(
        'class' => 'col-sm-6 col-md-3 img-grid',
        'parent' => '1',
        'title' => 'Grid E Box',
        'type' => 'region',
        'width' => '292',
        'width_type' => 'px',
      ),
      'grid_f_box' => array(
        'class' => 'col-sm-6 col-md-3 img-grid',
        'parent' => '1',
        'title' => 'Grid F Box',
        'type' => 'region',
        'width' => '292',
        'width_type' => 'px',
      ),
      'grid_g_box' => array(
        'class' => 'col-sm-6 col-md-3 img-grid',
        'parent' => '1',
        'title' => 'Grid G Box',
        'type' => 'region',
        'width' => '292',
        'width_type' => 'px',
      ),
      'main' => array(
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
      ),
      'main-row' => array(
        'children' => array(
          0 => 'grid_box_a',
          1 => 'grid_box_b',
          2 => 'grid_box_c',
        ),
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
      'rbsc_description' => array(
        'class' => 'rbsc-description',
        'parent' => '2',
        'title' => 'RBSC Description',
        'type' => 'region',
        'width' => 50,
        'width_type' => '%',
      ),
      'rbsc_new_and_notable' => array(
        'class' => 'rbsc-news',
        'parent' => '2',
        'title' => 'RBSC New and Notable',
        'type' => 'region',
        'width' => 50,
        'width_type' => '%',
      ),
      1 => array(
        'children' => array(
          0 => 'grid_d_box',
          1 => 'grid_e_box',
          2 => 'grid_f_box',
          3 => 'grid_g_box',
        ),
        'class' => '',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
      2 => array(
        'children' => array(
          0 => 'rbsc_description',
          1 => 'rbsc_new_and_notable',
        ),
        'class' => 'sub-grid',
        'contains' => 'region',
        'parent' => 'main',
        'type' => 'row',
      ),
    ),
  );
  $display->panel_settings = array(
    'grid_box_a' => array(
      'style' => '-1',
    ),
    'grid_box_c' => array(
      'style' => '-1',
    ),
    'grid_d_box' => array(
      'style' => '-1',
    ),
    'style_settings' => array(
      'default' => NULL,
      'foo' => NULL,
      'grid_box_a' => NULL,
      'grid_box_b' => NULL,
      'grid_box_c' => NULL,
      'grid_box_d' => NULL,
      'grid_box_e' => NULL,
      'grid_box_f' => NULL,
      'grid_box_g' => NULL,
      'grid_d_box' => NULL,
      'grid_e_box' => NULL,
      'grid_f_box' => NULL,
      'grid_g_box' => NULL,
      'rbsc_description' => NULL,
      'rbsc_new_and_notable' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45a2109d-e5b9-473e-ad3a-fa230c33c273';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6572d2c1-f02a-4443-895c-254c16dd3edd';
  $pane->panel = 'grid_box_a';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '12',
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
  $pane->uuid = '6572d2c1-f02a-4443-895c-254c16dd3edd';
  $display->content['new-6572d2c1-f02a-4443-895c-254c16dd3edd'] = $pane;
  $display->panels['grid_box_a'][0] = 'new-6572d2c1-f02a-4443-895c-254c16dd3edd';
  $pane = new stdClass();
  $pane->pid = 'new-56eb71bd-a6fc-4aef-beb5-ad24d36bd0e4';
  $pane->panel = 'grid_box_b';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '1',
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
  $pane->uuid = '56eb71bd-a6fc-4aef-beb5-ad24d36bd0e4';
  $display->content['new-56eb71bd-a6fc-4aef-beb5-ad24d36bd0e4'] = $pane;
  $display->panels['grid_box_b'][0] = 'new-56eb71bd-a6fc-4aef-beb5-ad24d36bd0e4';
  $pane = new stdClass();
  $pane->pid = 'new-34774da3-3af3-46a3-9871-176cc1e64b9f';
  $pane->panel = 'grid_box_c';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '5823',
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
  $pane->uuid = '34774da3-3af3-46a3-9871-176cc1e64b9f';
  $display->content['new-34774da3-3af3-46a3-9871-176cc1e64b9f'] = $pane;
  $display->panels['grid_box_c'][0] = 'new-34774da3-3af3-46a3-9871-176cc1e64b9f';
  $pane = new stdClass();
  $pane->pid = 'new-bdcf895c-8639-4df5-9562-1e552e43dc04';
  $pane->panel = 'grid_d_box';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '14',
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
  $pane->uuid = 'bdcf895c-8639-4df5-9562-1e552e43dc04';
  $display->content['new-bdcf895c-8639-4df5-9562-1e552e43dc04'] = $pane;
  $display->panels['grid_d_box'][0] = 'new-bdcf895c-8639-4df5-9562-1e552e43dc04';
  $pane = new stdClass();
  $pane->pid = 'new-3cc4cf2b-1c58-438a-8ef7-5734f3ae3d86';
  $pane->panel = 'grid_e_box';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '350',
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
  $pane->uuid = '3cc4cf2b-1c58-438a-8ef7-5734f3ae3d86';
  $display->content['new-3cc4cf2b-1c58-438a-8ef7-5734f3ae3d86'] = $pane;
  $display->panels['grid_e_box'][0] = 'new-3cc4cf2b-1c58-438a-8ef7-5734f3ae3d86';
  $pane = new stdClass();
  $pane->pid = 'new-cda42eb8-854c-40e1-9557-c5ce6c480aae';
  $pane->panel = 'grid_f_box';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '340',
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
  $pane->uuid = 'cda42eb8-854c-40e1-9557-c5ce6c480aae';
  $display->content['new-cda42eb8-854c-40e1-9557-c5ce6c480aae'] = $pane;
  $display->panels['grid_f_box'][0] = 'new-cda42eb8-854c-40e1-9557-c5ce6c480aae';
  $pane = new stdClass();
  $pane->pid = 'new-403ebb44-7207-455a-9ca6-b50caf18da48';
  $pane->panel = 'grid_g_box';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => 'teaser',
    'identifier' => '',
    'leave_node_title' => 0,
    'link_node_title' => 1,
    'links' => 0,
    'nid' => '341',
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
  $pane->uuid = '403ebb44-7207-455a-9ca6-b50caf18da48';
  $display->content['new-403ebb44-7207-455a-9ca6-b50caf18da48'] = $pane;
  $display->panels['grid_g_box'][0] = 'new-403ebb44-7207-455a-9ca6-b50caf18da48';
  $pane = new stdClass();
  $pane->pid = 'new-cc3d7491-91e5-4fc1-a5a1-d93559d49572';
  $pane->panel = 'rbsc_description';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'RBSC Description',
    'body' => '<p><strong>The Department of Special Collections</strong>&nbsp;is one of the premier repositories of its kind. Its holdings span five millennia and five continents, and include around 200,000 rare or significant printed works; 30,000 linear feet of textual materials, ranging from cuneiform tablets to contemporary manuscripts; a wealth of prints, drawings, photographs, maps, coins, and other visual materials; the Cotsen Children\'s Library; and the Princeton University Archives. The privately owned Scheide Library is associated with the Department.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
    'title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'rbsc-front-page-desc',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cc3d7491-91e5-4fc1-a5a1-d93559d49572';
  $display->content['new-cc3d7491-91e5-4fc1-a5a1-d93559d49572'] = $pane;
  $display->panels['rbsc_description'][0] = 'new-cc3d7491-91e5-4fc1-a5a1-d93559d49572';
  $pane = new stdClass();
  $pane->pid = 'new-67421f06-4834-4d29-a305-1ad46495a60e';
  $pane->panel = 'rbsc_new_and_notable';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_item-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'feed_nid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'allblogs',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67421f06-4834-4d29-a305-1ad46495a60e';
  $display->content['new-67421f06-4834-4d29-a305-1ad46495a60e'] = $pane;
  $display->panels['rbsc_new_and_notable'][0] = 'new-67421f06-4834-4d29-a305-1ad46495a60e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

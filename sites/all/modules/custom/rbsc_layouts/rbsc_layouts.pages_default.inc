<?php
/**
 * @file
 * rbsc_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function rbsc_layouts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_24ce433e-d881-4354-a39f-6d02ed28b570';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'RBSC Form Template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'webform' => 'webform',
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
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f53d73c-30ee-40f3-a00b-4cc5194671ff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-68b56cca-2a39-46b8-8ca3-1fa24619039e';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '68b56cca-2a39-46b8-8ca3-1fa24619039e';
    $display->content['new-68b56cca-2a39-46b8-8ca3-1fa24619039e'] = $pane;
    $display->panels['middle'][0] = 'new-68b56cca-2a39-46b8-8ca3-1fa24619039e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-68b56cca-2a39-46b8-8ca3-1fa24619039e';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_24ce433e-d881-4354-a39f-6d02ed28b570'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_35f7038b-cd25-4e7f-ac13-a7e1af065381';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'RBSC Staff Member',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'rbsc_staff_member' => 'rbsc_staff_member',
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
  $display->layout = 'pul-base-nine-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7907195c-17ba-4ba3-a058-b12395c65ad0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f67d9c37-1631-4b97-962f-86c8c53b879a';
    $pane->panel = 'first';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'f67d9c37-1631-4b97-962f-86c8c53b879a';
    $display->content['new-f67d9c37-1631-4b97-962f-86c8c53b879a'] = $pane;
    $display->panels['first'][0] = 'new-f67d9c37-1631-4b97-962f-86c8c53b879a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f67d9c37-1631-4b97-962f-86c8c53b879a';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_35f7038b-cd25-4e7f-ac13-a7e1af065381'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_29';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'For Children',
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
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'children',
          ),
          'context' => 'empty',
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
  $display->layout = 'three-six-three';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d01b66a8-9d2e-4afc-80c2-1ac53b56b8f3';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_image-panel_pane_2';
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
    $pane->uuid = 'd01b66a8-9d2e-4afc-80c2-1ac53b56b8f3';
    $display->content['new-d01b66a8-9d2e-4afc-80c2-1ac53b56b8f3'] = $pane;
    $display->panels['first'][0] = 'new-d01b66a8-9d2e-4afc-80c2-1ac53b56b8f3';
    $pane = new stdClass();
    $pane->pid = 'new-6626a903-753a-40f8-8a58-f1c246070da6';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_curator-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '1157',
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
    $pane->uuid = '6626a903-753a-40f8-8a58-f1c246070da6';
    $display->content['new-6626a903-753a-40f8-8a58-f1c246070da6'] = $pane;
    $display->panels['first'][1] = 'new-6626a903-753a-40f8-8a58-f1c246070da6';
    $pane = new stdClass();
    $pane->pid = 'new-0e2841ff-befd-4b03-a9fa-dc329407e6eb';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '0e2841ff-befd-4b03-a9fa-dc329407e6eb';
    $display->content['new-0e2841ff-befd-4b03-a9fa-dc329407e6eb'] = $pane;
    $display->panels['middle'][0] = 'new-0e2841ff-befd-4b03-a9fa-dc329407e6eb';
    $pane = new stdClass();
    $pane->pid = 'new-0fa7edbb-42b0-4531-8b02-ae2227dce9c1';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'feed_nid' => '268',
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
    $pane->uuid = '0fa7edbb-42b0-4531-8b02-ae2227dce9c1';
    $display->content['new-0fa7edbb-42b0-4531-8b02-ae2227dce9c1'] = $pane;
    $display->panels['second'][0] = 'new-0fa7edbb-42b0-4531-8b02-ae2227dce9c1';
    $pane = new stdClass();
    $pane->pid = 'new-808a2c17-39c0-42ac-9ce2-ca3e37bcd36d';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'feed_nid' => '257',
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
    $pane->uuid = '808a2c17-39c0-42ac-9ce2-ca3e37bcd36d';
    $display->content['new-808a2c17-39c0-42ac-9ce2-ca3e37bcd36d'] = $pane;
    $display->panels['second'][1] = 'new-808a2c17-39c0-42ac-9ce2-ca3e37bcd36d';
    $pane = new stdClass();
    $pane->pid = 'new-368eb57e-73c8-4e2c-bd63-bb1942c3f44a';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid_1' => '279',
      ),
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
    $pane->uuid = '368eb57e-73c8-4e2c-bd63-bb1942c3f44a';
    $display->content['new-368eb57e-73c8-4e2c-bd63-bb1942c3f44a'] = $pane;
    $display->panels['second'][2] = 'new-368eb57e-73c8-4e2c-bd63-bb1942c3f44a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_29'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_34';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Explore Grid',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'menu-grid',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'mainmenu' => 'mainmenu',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'explore',
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
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'featured' => NULL,
      'grid-A' => NULL,
      'grid-B' => NULL,
      'grid-C' => NULL,
      'grid-D' => NULL,
      'grid-E' => NULL,
      'grid-F' => NULL,
      'rbsc-desc' => NULL,
      'rbsc-news' => NULL,
      'middle' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Explore';
  $display->uuid = '4ffa9de3-98a4-496f-801c-dc1fd79c2a7b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9fa3f39d-f2ea-485b-9004-400b09106aa9';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12',
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
    $pane->uuid = '9fa3f39d-f2ea-485b-9004-400b09106aa9';
    $display->content['new-9fa3f39d-f2ea-485b-9004-400b09106aa9'] = $pane;
    $display->panels['top'][0] = 'new-9fa3f39d-f2ea-485b-9004-400b09106aa9';
    $pane = new stdClass();
    $pane->pid = 'new-1e372a51-ce74-4957-9c93-5e76626f5107';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5822',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1e372a51-ce74-4957-9c93-5e76626f5107';
    $display->content['new-1e372a51-ce74-4957-9c93-5e76626f5107'] = $pane;
    $display->panels['top'][1] = 'new-1e372a51-ce74-4957-9c93-5e76626f5107';
    $pane = new stdClass();
    $pane->pid = 'new-a7c77687-0ca3-4081-959d-f9edc587af20';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '289',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a7c77687-0ca3-4081-959d-f9edc587af20';
    $display->content['new-a7c77687-0ca3-4081-959d-f9edc587af20'] = $pane;
    $display->panels['top'][2] = 'new-a7c77687-0ca3-4081-959d-f9edc587af20';
    $pane = new stdClass();
    $pane->pid = 'new-eba03c58-5cfa-4e4f-89b9-58ce8b13aea4';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '288',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'eba03c58-5cfa-4e4f-89b9-58ce8b13aea4';
    $display->content['new-eba03c58-5cfa-4e4f-89b9-58ce8b13aea4'] = $pane;
    $display->panels['top'][3] = 'new-eba03c58-5cfa-4e4f-89b9-58ce8b13aea4';
    $pane = new stdClass();
    $pane->pid = 'new-4690c831-ff3e-456e-8ea4-1bc15363674c';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '290',
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
    $pane->uuid = '4690c831-ff3e-456e-8ea4-1bc15363674c';
    $display->content['new-4690c831-ff3e-456e-8ea4-1bc15363674c'] = $pane;
    $display->panels['top'][4] = 'new-4690c831-ff3e-456e-8ea4-1bc15363674c';
    $pane = new stdClass();
    $pane->pid = 'new-8d8d8b0d-a835-4a08-a6f7-047307064d9f';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '355',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'menugrid',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
      'override_title' => 1,
      'override_title_text' => 'Collaborative Projects',
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
    $pane->uuid = '8d8d8b0d-a835-4a08-a6f7-047307064d9f';
    $display->content['new-8d8d8b0d-a835-4a08-a6f7-047307064d9f'] = $pane;
    $display->panels['top'][5] = 'new-8d8d8b0d-a835-4a08-a6f7-047307064d9f';
    $pane = new stdClass();
    $pane->pid = 'new-fd96e294-503d-40d7-a773-0bcbc8ebf6fa';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '16326',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'fd96e294-503d-40d7-a773-0bcbc8ebf6fa';
    $display->content['new-fd96e294-503d-40d7-a773-0bcbc8ebf6fa'] = $pane;
    $display->panels['top'][6] = 'new-fd96e294-503d-40d7-a773-0bcbc8ebf6fa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_34'] = $handler;

  return $export;
}

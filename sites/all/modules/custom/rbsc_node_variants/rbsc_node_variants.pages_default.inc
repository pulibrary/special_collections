<?php
/**
 * @file
 * rbsc_node_variants.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function rbsc_node_variants_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_062ffb1c-c9c7-47a4-94e4-520f7ac51a22';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -9;
  $handler->conf = array(
    'title' => 'Policy Book',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Service [field_service])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_service-node-node',
        'delta' => 0,
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
              'policy' => 'policy',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'book',
          'settings' => array(
            'book' => array(
              'any' => 'any',
              305 => 0,
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research
Services & Policies
%node_2:title',
    'panels_breadcrumbs_paths' => 'conducting-research
services-policies
%node_2:url

',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '9',
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
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['second'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane = new stdClass();
    $pane->pid = 'new-ddc5503d-6c97-43ce-abd0-bd0a4b54fc46';
    $pane->panel = 'top';
    $pane->type = 'node_book_children';
    $pane->subtype = 'node_book_children';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Table of Contents',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'book-nav',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ddc5503d-6c97-43ce-abd0-bd0a4b54fc46';
    $display->content['new-ddc5503d-6c97-43ce-abd0-bd0a4b54fc46'] = $pane;
    $display->panels['top'][0] = 'new-ddc5503d-6c97-43ce-abd0-bd0a4b54fc46';
    $pane = new stdClass();
    $pane->pid = 'new-dba1c143-d65c-4a19-bf1a-fae940ba64ca';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_policy_web_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 1,
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'dba1c143-d65c-4a19-bf1a-fae940ba64ca';
    $display->content['new-dba1c143-d65c-4a19-bf1a-fae940ba64ca'] = $pane;
    $display->panels['top'][1] = 'new-dba1c143-d65c-4a19-bf1a-fae940ba64ca';
    $pane = new stdClass();
    $pane->pid = 'new-3729e263-2989-446f-9642-2a4846b26f83';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_downloadable_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_download_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'text' => 'Download [file:name]',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Downloadable Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3729e263-2989-446f-9642-2a4846b26f83';
    $display->content['new-3729e263-2989-446f-9642-2a4846b26f83'] = $pane;
    $display->panels['top'][2] = 'new-3729e263-2989-446f-9642-2a4846b26f83';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_062ffb1c-c9c7-47a4-94e4-520f7ac51a22'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Service',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'services' => 'services',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research
Services & Policies
',
    'panels_breadcrumbs_paths' => 'conducting-research
services-policies
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-57e468f2-962b-45e3-a1b7-fc8ff19c77d2';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'policy_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
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
    $pane->uuid = '57e468f2-962b-45e3-a1b7-fc8ff19c77d2';
    $display->content['new-57e468f2-962b-45e3-a1b7-fc8ff19c77d2'] = $pane;
    $display->panels['first'][0] = 'new-57e468f2-962b-45e3-a1b7-fc8ff19c77d2';
    $pane = new stdClass();
    $pane->pid = 'new-04e81737-260e-43fe-bbc7-2f6d6c846019';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'services-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->uuid = '04e81737-260e-43fe-bbc7-2f6d6c846019';
    $display->content['new-04e81737-260e-43fe-bbc7-2f6d6c846019'] = $pane;
    $display->panels['second'][0] = 'new-04e81737-260e-43fe-bbc7-2f6d6c846019';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_11';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'FAQ',
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
            'paths' => 'ask-question',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd492b5c7-3275-4029-813d-8752fc7548ae';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b88fc62e-0d31-4235-bc38-aba7399746d0';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-conducting-research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b88fc62e-0d31-4235-bc38-aba7399746d0';
    $display->content['new-b88fc62e-0d31-4235-bc38-aba7399746d0'] = $pane;
    $display->panels['first'][0] = 'new-b88fc62e-0d31-4235-bc38-aba7399746d0';
    $pane = new stdClass();
    $pane->pid = 'new-b6acd6fc-5fa9-40a3-8ba8-1712f0f2c5e2';
    $pane->panel = 'second';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '16271',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'forms--ask-question',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b6acd6fc-5fa9-40a3-8ba8-1712f0f2c5e2';
    $display->content['new-b6acd6fc-5fa9-40a3-8ba8-1712f0f2c5e2'] = $pane;
    $display->panels['second'][0] = 'new-b6acd6fc-5fa9-40a3-8ba8-1712f0f2c5e2';
    $pane = new stdClass();
    $pane->pid = 'new-318d8c85-216d-4c51-b052-11717d17ea41';
    $pane->panel = 'second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Search FAQs - LibAnswers Widget',
      'title' => 'Search FAQs',
      'body' => '<div id="s-la-widget-850"></div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '318d8c85-216d-4c51-b052-11717d17ea41';
    $display->content['new-318d8c85-216d-4c51-b052-11717d17ea41'] = $pane;
    $display->panels['second'][1] = 'new-318d8c85-216d-4c51-b052-11717d17ea41';
    $pane = new stdClass();
    $pane->pid = 'new-65db7579-a381-458a-a90b-aeac2a7199f9';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'faqs-panel_pane_1';
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
    $pane->uuid = '65db7579-a381-458a-a90b-aeac2a7199f9';
    $display->content['new-65db7579-a381-458a-a90b-aeac2a7199f9'] = $pane;
    $display->panels['second'][2] = 'new-65db7579-a381-458a-a90b-aeac2a7199f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_12';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Division Topics',
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
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '/divisions/*/topics',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
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
    $pane->pid = 'new-07389d80-23a3-402e-949d-8e405aecf0c6';
    $pane->panel = 'first';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '07389d80-23a3-402e-949d-8e405aecf0c6';
    $display->content['new-07389d80-23a3-402e-949d-8e405aecf0c6'] = $pane;
    $display->panels['first'][3] = 'new-07389d80-23a3-402e-949d-8e405aecf0c6';
    $pane = new stdClass();
    $pane->pid = 'new-31e2e58e-8725-4318-9c2e-893ab439830e';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'research_account_block-research_account_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Research Account',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '31e2e58e-8725-4318-9c2e-893ab439830e';
    $display->content['new-31e2e58e-8725-4318-9c2e-893ab439830e'] = $pane;
    $display->panels['first'][4] = 'new-31e2e58e-8725-4318-9c2e-893ab439830e';
    $pane = new stdClass();
    $pane->pid = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = FALSE;
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
    $display->panels['second'][0] = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
    $pane = new stdClass();
    $pane->pid = 'new-1298285e-f56e-439f-ba1a-df4d0baff25c';
    $pane->panel = 'second';
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
    $display->panels['second'][1] = 'new-1298285e-f56e-439f-ba1a-df4d0baff25c';
    $pane = new stdClass();
    $pane->pid = 'new-4473c5ed-09b0-49d1-ad4c-2c5277dcd66c';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_collection_strengths-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = '4473c5ed-09b0-49d1-ad4c-2c5277dcd66c';
    $display->content['new-4473c5ed-09b0-49d1-ad4c-2c5277dcd66c'] = $pane;
    $display->panels['second'][2] = 'new-4473c5ed-09b0-49d1-ad4c-2c5277dcd66c';
    $pane = new stdClass();
    $pane->pid = 'new-50da6b08-bbe4-4f0b-b0d9-3067c69c680f';
    $pane->panel = 'third';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_1';
    $pane->shown = FALSE;
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
    $display->panels['third'][0] = 'new-50da6b08-bbe4-4f0b-b0d9-3067c69c680f';
    $pane = new stdClass();
    $pane->pid = 'new-885ed1f4-9304-4806-9926-40f072615014';
    $pane->panel = 'third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Collections with this topic in other Divisions...',
      'title' => 'Collections with this topic in other Divisions...',
      'body' => '<p>List of Divisions here...</p>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '885ed1f4-9304-4806-9926-40f072615014';
    $display->content['new-885ed1f4-9304-4806-9926-40f072615014'] = $pane;
    $display->panels['third'][1] = 'new-885ed1f4-9304-4806-9926-40f072615014';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'Division Collection',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Related division [field_related_division])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_related_division-node-node',
        'delta' => 0,
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
              'collection' => 'collection',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Home
Collections
%node_2:title
%node_1:title
%node:title
',
    'panels_breadcrumbs_paths' => '/
collections
%node_2:url
%node_1:url
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
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
    $pane->shown = FALSE;
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
    $pane->pid = 'new-4473c5ed-09b0-49d1-ad4c-2c5277dcd66c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_collection_strengths-panel_pane_1';
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
    $pane->uuid = '4473c5ed-09b0-49d1-ad4c-2c5277dcd66c';
    $display->content['new-4473c5ed-09b0-49d1-ad4c-2c5277dcd66c'] = $pane;
    $display->panels['middle'][2] = 'new-4473c5ed-09b0-49d1-ad4c-2c5277dcd66c';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f991112d-ff80-4ee1-9b0c-4aa4b7d1f11e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_13'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_14';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'Collection',
    'no_blocks' => 0,
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
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Collection Strength [field_collection_strength])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_collection_strength-node-node',
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
              'collection' => 'collection',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections
%node_2:title
',
    'panels_breadcrumbs_paths' => 'collections
%node_2:url
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-six-three-stacked';
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
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '5',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7db7b2da-639b-47c0-b140-4b9797b12711';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-313f8278-16e3-41fe-ba2a-0cc54c5a63d0';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_collection_icon';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '313f8278-16e3-41fe-ba2a-0cc54c5a63d0';
    $display->content['new-313f8278-16e3-41fe-ba2a-0cc54c5a63d0'] = $pane;
    $display->panels['first'][0] = 'new-313f8278-16e3-41fe-ba2a-0cc54c5a63d0';
    $pane = new stdClass();
    $pane->pid = 'new-7bfc5066-2e65-45e6-907c-16a4ee10e288';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection-panel_pane_5';
    $pane->shown = FALSE;
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
    $pane->uuid = '7bfc5066-2e65-45e6-907c-16a4ee10e288';
    $display->content['new-7bfc5066-2e65-45e6-907c-16a4ee10e288'] = $pane;
    $display->panels['first'][1] = 'new-7bfc5066-2e65-45e6-907c-16a4ee10e288';
    $pane = new stdClass();
    $pane->pid = 'new-9421a167-c920-4b7f-93cc-358b122bfd99';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection-panel_pane_3';
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
    $pane->uuid = '9421a167-c920-4b7f-93cc-358b122bfd99';
    $display->content['new-9421a167-c920-4b7f-93cc-358b122bfd99'] = $pane;
    $display->panels['first'][2] = 'new-9421a167-c920-4b7f-93cc-358b122bfd99';
    $pane = new stdClass();
    $pane->pid = 'new-4bacc6fb-2a91-4871-a155-feecc29d75ce';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection-panel_pane_4';
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
    $pane->uuid = '4bacc6fb-2a91-4871-a155-feecc29d75ce';
    $display->content['new-4bacc6fb-2a91-4871-a155-feecc29d75ce'] = $pane;
    $display->panels['first'][3] = 'new-4bacc6fb-2a91-4871-a155-feecc29d75ce';
    $pane = new stdClass();
    $pane->pid = 'new-34f67b05-145f-4003-93dd-f764804d7f7a';
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
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'collection-body',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34f67b05-145f-4003-93dd-f764804d7f7a';
    $display->content['new-34f67b05-145f-4003-93dd-f764804d7f7a'] = $pane;
    $display->panels['middle'][0] = 'new-34f67b05-145f-4003-93dd-f764804d7f7a';
    $pane = new stdClass();
    $pane->pid = 'new-2f2771c3-d463-41c1-87f7-77f6bb0f49f9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
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
    $pane->uuid = '2f2771c3-d463-41c1-87f7-77f6bb0f49f9';
    $display->content['new-2f2771c3-d463-41c1-87f7-77f6bb0f49f9'] = $pane;
    $display->panels['middle'][1] = 'new-2f2771c3-d463-41c1-87f7-77f6bb0f49f9';
    $pane = new stdClass();
    $pane->pid = 'new-6e071864-8247-4646-b8fc-e9b12c003cd8';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->uuid = '6e071864-8247-4646-b8fc-e9b12c003cd8';
    $display->content['new-6e071864-8247-4646-b8fc-e9b12c003cd8'] = $pane;
    $display->panels['second'][0] = 'new-6e071864-8247-4646-b8fc-e9b12c003cd8';
    $pane = new stdClass();
    $pane->pid = 'new-b613e565-dca8-4517-b6d0-9855f7f1db60';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_5';
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
    $pane->uuid = 'b613e565-dca8-4517-b6d0-9855f7f1db60';
    $display->content['new-b613e565-dca8-4517-b6d0-9855f7f1db60'] = $pane;
    $display->panels['second'][1] = 'new-b613e565-dca8-4517-b6d0-9855f7f1db60';
    $pane = new stdClass();
    $pane->pid = 'new-8efd7a4a-8273-4bfa-a9a5-f8e33e7c52f6';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_6';
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
    $pane->uuid = '8efd7a4a-8273-4bfa-a9a5-f8e33e7c52f6';
    $display->content['new-8efd7a4a-8273-4bfa-a9a5-f8e33e7c52f6'] = $pane;
    $display->panels['second'][2] = 'new-8efd7a4a-8273-4bfa-a9a5-f8e33e7c52f6';
    $pane = new stdClass();
    $pane->pid = 'new-c9968b43-c3ab-40fb-96a8-a3bb0d7e186a';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_quick_links-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node_2:nid',
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
    $pane->uuid = 'c9968b43-c3ab-40fb-96a8-a3bb0d7e186a';
    $display->content['new-c9968b43-c3ab-40fb-96a8-a3bb0d7e186a'] = $pane;
    $display->panels['second'][3] = 'new-c9968b43-c3ab-40fb-96a8-a3bb0d7e186a';
    $pane = new stdClass();
    $pane->pid = 'new-e72e8769-c0e5-4117-a957-548dc34937b3';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'research_guides-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->uuid = 'e72e8769-c0e5-4117-a957-548dc34937b3';
    $display->content['new-e72e8769-c0e5-4117-a957-548dc34937b3'] = $pane;
    $display->panels['second'][4] = 'new-e72e8769-c0e5-4117-a957-548dc34937b3';
    $pane = new stdClass();
    $pane->pid = 'new-4fdfdb80-441b-4897-b629-d454175adba6';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'research_guides-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->uuid = '4fdfdb80-441b-4897-b629-d454175adba6';
    $display->content['new-4fdfdb80-441b-4897-b629-d454175adba6'] = $pane;
    $display->panels['second'][5] = 'new-4fdfdb80-441b-4897-b629-d454175adba6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34f67b05-145f-4003-93dd-f764804d7f7a';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_14'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_15';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Location - Firestone',
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Visit Us',
    'panels_breadcrumbs_paths' => 'visit-us',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine-stacked';
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
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bc8ef57d-2eae-4bd6-a269-81d444e00642';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63f5af95-8513-4ea2-b2a8-1bf90e4c6f12';
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
    $pane->uuid = '63f5af95-8513-4ea2-b2a8-1bf90e4c6f12';
    $display->content['new-63f5af95-8513-4ea2-b2a8-1bf90e4c6f12'] = $pane;
    $display->panels['first'][0] = 'new-63f5af95-8513-4ea2-b2a8-1bf90e4c6f12';
    $pane = new stdClass();
    $pane->pid = 'new-18b802a3-bfd3-43f5-b044-3166f496baaf';
    $pane->panel = 'second';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18b802a3-bfd3-43f5-b044-3166f496baaf';
    $display->content['new-18b802a3-bfd3-43f5-b044-3166f496baaf'] = $pane;
    $display->panels['second'][0] = 'new-18b802a3-bfd3-43f5-b044-3166f496baaf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_15'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_16';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'Databases',
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
            'paths' => 'catalogs-databases',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Catalogs & Databases';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ba0cce70-9694-4bfa-8db6-3c69d438662d';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-conducting-research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ba0cce70-9694-4bfa-8db6-3c69d438662d';
    $display->content['new-ba0cce70-9694-4bfa-8db6-3c69d438662d'] = $pane;
    $display->panels['first'][0] = 'new-ba0cce70-9694-4bfa-8db6-3c69d438662d';
    $pane = new stdClass();
    $pane->pid = 'new-afd23501-6857-43df-bbba-9c988da1782c';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'allsearch_block-allsearch_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'afd23501-6857-43df-bbba-9c988da1782c';
    $display->content['new-afd23501-6857-43df-bbba-9c988da1782c'] = $pane;
    $display->panels['second'][0] = 'new-afd23501-6857-43df-bbba-9c988da1782c';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['second'][1] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane = new stdClass();
    $pane->pid = 'new-9506f6e4-8315-42fa-8592-0f48589835d9';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbsc_databases-panel_pane_4';
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
    $pane->uuid = '9506f6e4-8315-42fa-8592-0f48589835d9';
    $display->content['new-9506f6e4-8315-42fa-8592-0f48589835d9'] = $pane;
    $display->panels['second'][2] = 'new-9506f6e4-8315-42fa-8592-0f48589835d9';
    $pane = new stdClass();
    $pane->pid = 'new-40daed13-2905-49a1-83c0-16f13ef667d0';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbsc_databases-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '40daed13-2905-49a1-83c0-16f13ef667d0';
    $display->content['new-40daed13-2905-49a1-83c0-16f13ef667d0'] = $pane;
    $display->panels['second'][3] = 'new-40daed13-2905-49a1-83c0-16f13ef667d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_16'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_17';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'title' => 'Topic',
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
    'panels_breadcrumbs_titles' => 'Explore
Guide to Topics',
    'panels_breadcrumbs_paths' => 'explore
topics',
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
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
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
  $display->uuid = 'ce9fbf6e-d2ef-4ecb-978c-2b7d3f4c9a72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-42e95bbb-bb02-442c-a331-105bcece0b71';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_2';
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
    $pane->uuid = '42e95bbb-bb02-442c-a331-105bcece0b71';
    $display->content['new-42e95bbb-bb02-442c-a331-105bcece0b71'] = $pane;
    $display->panels['first'][0] = 'new-42e95bbb-bb02-442c-a331-105bcece0b71';
    $pane = new stdClass();
    $pane->pid = 'new-3d9d32d7-87d1-462b-9ad9-09052fcc7ff1';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
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
    $pane->uuid = '3d9d32d7-87d1-462b-9ad9-09052fcc7ff1';
    $display->content['new-3d9d32d7-87d1-462b-9ad9-09052fcc7ff1'] = $pane;
    $display->panels['first'][1] = 'new-3d9d32d7-87d1-462b-9ad9-09052fcc7ff1';
    $pane = new stdClass();
    $pane->pid = 'new-c89fc3b4-144b-47da-8265-b27c39a9df02';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Related Exhibitions',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c89fc3b4-144b-47da-8265-b27c39a9df02';
    $display->content['new-c89fc3b4-144b-47da-8265-b27c39a9df02'] = $pane;
    $display->panels['first'][2] = 'new-c89fc3b4-144b-47da-8265-b27c39a9df02';
    $pane = new stdClass();
    $pane->pid = 'new-31de98de-81bd-4b1e-bee1-4b3a1d203447';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->uuid = '31de98de-81bd-4b1e-bee1-4b3a1d203447';
    $display->content['new-31de98de-81bd-4b1e-bee1-4b3a1d203447'] = $pane;
    $display->panels['first'][3] = 'new-31de98de-81bd-4b1e-bee1-4b3a1d203447';
    $pane = new stdClass();
    $pane->pid = 'new-d4a3f37d-957e-4190-9640-8d6da8619432';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'research_guides-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Research Guides',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd4a3f37d-957e-4190-9640-8d6da8619432';
    $display->content['new-d4a3f37d-957e-4190-9640-8d6da8619432'] = $pane;
    $display->panels['first'][4] = 'new-d4a3f37d-957e-4190-9640-8d6da8619432';
    $pane = new stdClass();
    $pane->pid = 'new-4b7eff82-9ee5-4371-90af-e003ab2eb59b';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b7eff82-9ee5-4371-90af-e003ab2eb59b';
    $display->content['new-4b7eff82-9ee5-4371-90af-e003ab2eb59b'] = $pane;
    $display->panels['middle'][0] = 'new-4b7eff82-9ee5-4371-90af-e003ab2eb59b';
    $pane = new stdClass();
    $pane->pid = 'new-166fca0c-f601-470b-90ed-e9f8e11dff51';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
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
    $pane->uuid = '166fca0c-f601-470b-90ed-e9f8e11dff51';
    $display->content['new-166fca0c-f601-470b-90ed-e9f8e11dff51'] = $pane;
    $display->panels['middle'][1] = 'new-166fca0c-f601-470b-90ed-e9f8e11dff51';
    $pane = new stdClass();
    $pane->pid = 'new-77be8511-1560-419a-a004-34d18746e0ce';
    $pane->panel = 'second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Research Tools for Printed Material (Books, Maps, Prints, etc.)',
      'body' => '<div class="external-link"><a class="btn btn-primary btn-lg full-width" href="http://princeton-primo.hosted.exlibrisgroup.com/primo_library/libweb/action/search.do?mode=Advanced&amp;vid=PRINCETON">Search in Books+</a></div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77be8511-1560-419a-a004-34d18746e0ce';
    $display->content['new-77be8511-1560-419a-a004-34d18746e0ce'] = $pane;
    $display->panels['second'][0] = 'new-77be8511-1560-419a-a004-34d18746e0ce';
    $pane = new stdClass();
    $pane->pid = 'new-0b83a882-488c-4f91-9778-c8fea2707ded';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_collection_strength_target_id' => '%node:nid',
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
    $pane->uuid = '0b83a882-488c-4f91-9778-c8fea2707ded';
    $display->content['new-0b83a882-488c-4f91-9778-c8fea2707ded'] = $pane;
    $display->panels['second'][1] = 'new-0b83a882-488c-4f91-9778-c8fea2707ded';
    $pane = new stdClass();
    $pane->pid = 'new-12214fc3-51db-49aa-84f9-e3a829cf9e44';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'online_collections-panel_pane_2';
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
    $pane->uuid = '12214fc3-51db-49aa-84f9-e3a829cf9e44';
    $display->content['new-12214fc3-51db-49aa-84f9-e3a829cf9e44'] = $pane;
    $display->panels['second'][2] = 'new-12214fc3-51db-49aa-84f9-e3a829cf9e44';
    $pane = new stdClass();
    $pane->pid = 'new-cc89074e-9e59-4eee-82f5-daafa25eec2a';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'digital_projects-panel_pane_2';
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
    $pane->uuid = 'cc89074e-9e59-4eee-82f5-daafa25eec2a';
    $display->content['new-cc89074e-9e59-4eee-82f5-daafa25eec2a'] = $pane;
    $display->panels['second'][3] = 'new-cc89074e-9e59-4eee-82f5-daafa25eec2a';
    $pane = new stdClass();
    $pane->pid = 'new-06a7ebb0-5908-4732-9e21-972dbf7d5a91';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_15';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '06a7ebb0-5908-4732-9e21-972dbf7d5a91';
    $display->content['new-06a7ebb0-5908-4732-9e21-972dbf7d5a91'] = $pane;
    $display->panels['second'][4] = 'new-06a7ebb0-5908-4732-9e21-972dbf7d5a91';
    $pane = new stdClass();
    $pane->pid = 'new-f5e9af39-7f64-4b2b-9d92-880d166d856f';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_collection_strength_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f5e9af39-7f64-4b2b-9d92-880d166d856f';
    $display->content['new-f5e9af39-7f64-4b2b-9d92-880d166d856f'] = $pane;
    $display->panels['second'][5] = 'new-f5e9af39-7f64-4b2b-9d92-880d166d856f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_17'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_18';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'title' => 'Collections Menu Page',
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
            'paths' => 'collections',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections and Divisions',
    'panels_breadcrumbs_paths' => 'collections',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'first' => NULL,
      'second' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Collections and Divisions';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8dde3aa4-1623-470b-8392-2869aa010f3c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gallery',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8dde3aa4-1623-470b-8392-2869aa010f3c';
    $display->content['new-8dde3aa4-1623-470b-8392-2869aa010f3c'] = $pane;
    $display->panels['middle'][0] = 'new-8dde3aa4-1623-470b-8392-2869aa010f3c';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'top';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['top'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_18'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_19';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'Projects',
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
            'paths' => 'projects',
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
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Digital Humanities and Collaborative Projects';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5dda239-1fcc-457c-9545-7d7b27daf8c6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gallery',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5dda239-1fcc-457c-9545-7d7b27daf8c6';
    $display->content['new-b5dda239-1fcc-457c-9545-7d7b27daf8c6'] = $pane;
    $display->panels['middle'][0] = 'new-b5dda239-1fcc-457c-9545-7d7b27daf8c6';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'top';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['top'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_19'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_20';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -11;
  $handler->conf = array(
    'title' => 'Project',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Book parent',
        'keyword' => 'book_parent',
        'name' => 'book_parent',
        'type' => 'parent',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node from Node (on Node: Location [field_location])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_location-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Node from Node (on Node: Related division [field_related_division])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_related_division-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      4 => array(
        'identifier' => 'Node from Node (on Node: Media Grid [field_media_grid])',
        'keyword' => 'node_4',
        'name' => 'entity_from_field:field_media_grid-node-node',
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
              'digital_humanities' => 'digital_humanities',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Explore
Projects',
    'panels_breadcrumbs_paths' => 'explore
projects',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b2262caa-3fd7-41e9-bc30-206e911e14d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5233d26f-bf2a-4b43-9187-972e7185a7a1';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibition_view-panel_pane_3';
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
    $pane->uuid = '5233d26f-bf2a-4b43-9187-972e7185a7a1';
    $display->content['new-5233d26f-bf2a-4b43-9187-972e7185a7a1'] = $pane;
    $display->panels['first'][0] = 'new-5233d26f-bf2a-4b43-9187-972e7185a7a1';
    $pane = new stdClass();
    $pane->pid = 'new-da67f5f6-790c-4de3-a0e2-93b94562317e';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibition_view-panel_pane_4';
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
    $pane->uuid = 'da67f5f6-790c-4de3-a0e2-93b94562317e';
    $display->content['new-da67f5f6-790c-4de3-a0e2-93b94562317e'] = $pane;
    $display->panels['second'][0] = 'new-da67f5f6-790c-4de3-a0e2-93b94562317e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_20'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_21';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -10;
  $handler->conf = array(
    'title' => 'Publications',
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
            'paths' => 'publications',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Explore
',
    'panels_breadcrumbs_paths' => 'explore
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Publications';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8bb71d54-03c3-44a9-ad79-da82b9eabb00';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_list-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8bb71d54-03c3-44a9-ad79-da82b9eabb00';
    $display->content['new-8bb71d54-03c3-44a9-ad79-da82b9eabb00'] = $pane;
    $display->panels['middle'][0] = 'new-8bb71d54-03c3-44a9-ad79-da82b9eabb00';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'top';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['top'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_21'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_22';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -8;
  $handler->conf = array(
    'title' => 'Policy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Service [field_service])',
        'keyword' => 'Service',
        'name' => 'entity_from_field:field_service-node-node',
        'delta' => 0,
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
              'policy' => 'policy',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research
Services & Policies
%Service:title
%node_2:title',
    'panels_breadcrumbs_paths' => 'conducting-research
services-policies
%Service:url
%node_2:url',
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
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'middle' => NULL,
      'second' => NULL,
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
    $pane->pid = 'new-57e468f2-962b-45e3-a1b7-fc8ff19c77d2';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'policy_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'arguments' => array(
        'nid' => '%Service:nid',
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
    $pane->uuid = '57e468f2-962b-45e3-a1b7-fc8ff19c77d2';
    $display->content['new-57e468f2-962b-45e3-a1b7-fc8ff19c77d2'] = $pane;
    $display->panels['first'][0] = 'new-57e468f2-962b-45e3-a1b7-fc8ff19c77d2';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['middle'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane = new stdClass();
    $pane->pid = 'new-dba1c143-d65c-4a19-bf1a-fae940ba64ca';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_policy_web_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 1,
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'external-link',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dba1c143-d65c-4a19-bf1a-fae940ba64ca';
    $display->content['new-dba1c143-d65c-4a19-bf1a-fae940ba64ca'] = $pane;
    $display->panels['second'][0] = 'new-dba1c143-d65c-4a19-bf1a-fae940ba64ca';
    $pane = new stdClass();
    $pane->pid = 'new-3729e263-2989-446f-9642-2a4846b26f83';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_downloadable_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_download_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'text' => 'Download [file:name]',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Downloadable Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3729e263-2989-446f-9642-2a4846b26f83';
    $display->content['new-3729e263-2989-446f-9642-2a4846b26f83'] = $pane;
    $display->panels['second'][1] = 'new-3729e263-2989-446f-9642-2a4846b26f83';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_22'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_23';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -7;
  $handler->conf = array(
    'title' => 'Conducting Research',
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
            'paths' => 'conducting-research',
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
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-732f0c50-ab84-490b-aac3-01a25c9275a2';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-conducting-research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '732f0c50-ab84-490b-aac3-01a25c9275a2';
    $display->content['new-732f0c50-ab84-490b-aac3-01a25c9275a2'] = $pane;
    $display->panels['first'][0] = 'new-732f0c50-ab84-490b-aac3-01a25c9275a2';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['second'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_23'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_24';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -6;
  $handler->conf = array(
    'title' => 'Conducting Research Children',
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
            'paths' => 'starting-your-research
services-policies
research-account-access',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research',
    'panels_breadcrumbs_paths' => 'conducting-research',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-97bdf040-c9ee-4e22-8626-6fa6723e6a58';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-conducting-research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '97bdf040-c9ee-4e22-8626-6fa6723e6a58';
    $display->content['new-97bdf040-c9ee-4e22-8626-6fa6723e6a58'] = $pane;
    $display->panels['first'][0] = 'new-97bdf040-c9ee-4e22-8626-6fa6723e6a58';
    $pane = new stdClass();
    $pane->pid = 'new-6d511269-234f-4569-81fe-f7b61a35b17c';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cover_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'above_content__838px-wide_',
        'image_link' => '',
        'file_view_mode' => 'image_banner',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'cover-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6d511269-234f-4569-81fe-f7b61a35b17c';
    $display->content['new-6d511269-234f-4569-81fe-f7b61a35b17c'] = $pane;
    $display->panels['second'][0] = 'new-6d511269-234f-4569-81fe-f7b61a35b17c';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['second'][1] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_24'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_25';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -5;
  $handler->conf = array(
    'title' => 'Visit Us',
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
            'paths' => 'visit-us',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '
',
    'panels_breadcrumbs_paths' => '
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6df0043f-7977-493e-a6ce-f7c196255546';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-visit-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '6df0043f-7977-493e-a6ce-f7c196255546';
    $display->content['new-6df0043f-7977-493e-a6ce-f7c196255546'] = $pane;
    $display->panels['first'][0] = 'new-6df0043f-7977-493e-a6ce-f7c196255546';
    $pane = new stdClass();
    $pane->pid = 'new-7f52f336-a643-4f60-bb94-fc702737c9ad';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_info-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '63',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'location-info',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7f52f336-a643-4f60-bb94-fc702737c9ad';
    $display->content['new-7f52f336-a643-4f60-bb94-fc702737c9ad'] = $pane;
    $display->panels['second'][0] = 'new-7f52f336-a643-4f60-bb94-fc702737c9ad';
    $pane = new stdClass();
    $pane->pid = 'new-135b09e9-8892-4623-aa6d-a1ab4d7c9fa3';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_info-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '64',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'location-info',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '135b09e9-8892-4623-aa6d-a1ab4d7c9fa3';
    $display->content['new-135b09e9-8892-4623-aa6d-a1ab4d7c9fa3'] = $pane;
    $display->panels['second'][1] = 'new-135b09e9-8892-4623-aa6d-a1ab4d7c9fa3';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['second'][2] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_25'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_26';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Visit Us Children',
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
            'paths' => 'you-visit
class-visits',
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
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e98ce282-f7c5-4235-999b-51670054170c';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-visit-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'e98ce282-f7c5-4235-999b-51670054170c';
    $display->content['new-e98ce282-f7c5-4235-999b-51670054170c'] = $pane;
    $display->panels['first'][0] = 'new-e98ce282-f7c5-4235-999b-51670054170c';
    $pane = new stdClass();
    $pane->pid = 'new-6d511269-234f-4569-81fe-f7b61a35b17c';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cover_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'above_content__838px-wide_',
        'image_link' => '',
        'file_view_mode' => 'image_banner',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'cover-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6d511269-234f-4569-81fe-f7b61a35b17c';
    $display->content['new-6d511269-234f-4569-81fe-f7b61a35b17c'] = $pane;
    $display->panels['second'][0] = 'new-6d511269-234f-4569-81fe-f7b61a35b17c';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['second'][1] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_26'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_27';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'News',
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
            'paths' => 'news',
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
  $display->layout = 'nine-three-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'New & Notable';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89937e77-ea9b-400b-a481-9a61e5553cf2';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'feed_nid' => '15117',
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
    $pane->uuid = '89937e77-ea9b-400b-a481-9a61e5553cf2';
    $display->content['new-89937e77-ea9b-400b-a481-9a61e5553cf2'] = $pane;
    $display->panels['first'][0] = 'new-89937e77-ea9b-400b-a481-9a61e5553cf2';
    $pane = new stdClass();
    $pane->pid = 'new-ec55cc76-895c-4127-9d38-20aecf194161';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec55cc76-895c-4127-9d38-20aecf194161';
    $display->content['new-ec55cc76-895c-4127-9d38-20aecf194161'] = $pane;
    $display->panels['second'][0] = 'new-ec55cc76-895c-4127-9d38-20aecf194161';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_27'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_28';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Publication',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'publication' => 'publication',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Publications',
    'panels_breadcrumbs_paths' => 'publications',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd7458bfa-33ea-4cee-9628-5c9ca64b2ab9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9f9cef38-13fd-4fcd-aab5-4229301b3f58';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'publication-panel_pane_1';
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
    $pane->uuid = '9f9cef38-13fd-4fcd-aab5-4229301b3f58';
    $display->content['new-9f9cef38-13fd-4fcd-aab5-4229301b3f58'] = $pane;
    $display->panels['first'][0] = 'new-9f9cef38-13fd-4fcd-aab5-4229301b3f58';
    $pane = new stdClass();
    $pane->pid = 'new-bfea7d52-5a13-400f-809a-0e3f93fed403';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'publication-panel_pane_2';
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
    $pane->uuid = 'bfea7d52-5a13-400f-809a-0e3f93fed403';
    $display->content['new-bfea7d52-5a13-400f-809a-0e3f93fed403'] = $pane;
    $display->panels['second'][0] = 'new-bfea7d52-5a13-400f-809a-0e3f93fed403';
    $pane = new stdClass();
    $pane->pid = 'new-22cb79c1-fa7e-4dc0-9b1d-bdf09c2d08df';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '22cb79c1-fa7e-4dc0-9b1d-bdf09c2d08df';
    $display->content['new-22cb79c1-fa7e-4dc0-9b1d-bdf09c2d08df'] = $pane;
    $display->panels['second'][1] = 'new-22cb79c1-fa7e-4dc0-9b1d-bdf09c2d08df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_28'] = $handler;

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
  $display->layout = 'pul-base-four-four-four-stacked';
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
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_29'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_30';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Digital Highlights',
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
            'paths' => 'digital-highlights',
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
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Digital Highlights';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5200d0e8-1358-40ad-acac-26a56511beb9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_list-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gallery',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5200d0e8-1358-40ad-acac-26a56511beb9';
    $display->content['new-5200d0e8-1358-40ad-acac-26a56511beb9'] = $pane;
    $display->panels['middle'][0] = 'new-5200d0e8-1358-40ad-acac-26a56511beb9';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'top';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['top'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_30'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_31';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Digital Highlight',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Book parent',
        'keyword' => 'book_parent',
        'name' => 'book_parent',
        'type' => 'parent',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node from Node (on Node: Location [field_location])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_location-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Node from Node (on Node: Related division [field_related_division])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_related_division-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      4 => array(
        'identifier' => 'Node from Node (on Node: Media Grid [field_media_grid])',
        'keyword' => 'node_4',
        'name' => 'entity_from_field:field_media_grid-node-node',
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
              'online_collections' => 'online_collections',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Explore
Digital Highlights',
    'panels_breadcrumbs_paths' => 'explore
digital-highlights',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b2262caa-3fd7-41e9-bc30-206e911e14d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-88089dd5-f147-4bed-861c-e2483ebde1c2';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibition_view-panel_pane_5';
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
    $pane->uuid = '88089dd5-f147-4bed-861c-e2483ebde1c2';
    $display->content['new-88089dd5-f147-4bed-861c-e2483ebde1c2'] = $pane;
    $display->panels['first'][0] = 'new-88089dd5-f147-4bed-861c-e2483ebde1c2';
    $pane = new stdClass();
    $pane->pid = 'new-26f184a8-993b-4dbe-9ebd-5a107496a1bb';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibition_view-panel_pane_6';
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
    $pane->uuid = '26f184a8-993b-4dbe-9ebd-5a107496a1bb';
    $display->content['new-26f184a8-993b-4dbe-9ebd-5a107496a1bb'] = $pane;
    $display->panels['second'][0] = 'new-26f184a8-993b-4dbe-9ebd-5a107496a1bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_31'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_32';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Database',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Book parent',
        'keyword' => 'book_parent',
        'name' => 'book_parent',
        'type' => 'parent',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node from Node (on Node: Location [field_location])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_location-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Node from Node (on Node: Related division [field_related_division])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_related_division-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      4 => array(
        'identifier' => 'Node from Node (on Node: Media Grid [field_media_grid])',
        'keyword' => 'node_4',
        'name' => 'entity_from_field:field_media_grid-node-node',
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
              'database' => 'database',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research
Catalogs & Databases',
    'panels_breadcrumbs_paths' => 'conducting-research
catalogs-databases',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b2262caa-3fd7-41e9-bc30-206e911e14d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8ff068a8-2a79-43f5-95e7-1b7a96ec04ef';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbsc_databases-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->uuid = '8ff068a8-2a79-43f5-95e7-1b7a96ec04ef';
    $display->content['new-8ff068a8-2a79-43f5-95e7-1b7a96ec04ef'] = $pane;
    $display->panels['first'][0] = 'new-8ff068a8-2a79-43f5-95e7-1b7a96ec04ef';
    $pane = new stdClass();
    $pane->pid = 'new-c7f45496-e97e-4b88-927d-b8cbd62c3919';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbsc_databases-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
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
    $pane->uuid = 'c7f45496-e97e-4b88-927d-b8cbd62c3919';
    $display->content['new-c7f45496-e97e-4b88-927d-b8cbd62c3919'] = $pane;
    $display->panels['second'][0] = 'new-c7f45496-e97e-4b88-927d-b8cbd62c3919';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_32'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_33';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Guide to Topics',
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
            'paths' => 'topics',
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
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Guide to Topics';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7ee08eaf-5432-43a4-be7f-90a42cc2ed77';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '7ee08eaf-5432-43a4-be7f-90a42cc2ed77';
    $display->content['new-7ee08eaf-5432-43a4-be7f-90a42cc2ed77'] = $pane;
    $display->panels['middle'][0] = 'new-7ee08eaf-5432-43a4-be7f-90a42cc2ed77';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_33'] = $handler;

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
    'body_classes_to_add' => '',
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
  $display->layout = 'grid-menu';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Explore';
  $display->uuid = '4ffa9de3-98a4-496f-801c-dc1fd79c2a7b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8391fab1-3c23-4d6d-888c-99ba5aca8c9f';
    $pane->panel = 'featured';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8391fab1-3c23-4d6d-888c-99ba5aca8c9f';
    $display->content['new-8391fab1-3c23-4d6d-888c-99ba5aca8c9f'] = $pane;
    $display->panels['featured'][0] = 'new-8391fab1-3c23-4d6d-888c-99ba5aca8c9f';
    $pane = new stdClass();
    $pane->pid = 'new-d7a175f5-475b-4ec3-a522-3672d95052e3';
    $pane->panel = 'grid-A';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd7a175f5-475b-4ec3-a522-3672d95052e3';
    $display->content['new-d7a175f5-475b-4ec3-a522-3672d95052e3'] = $pane;
    $display->panels['grid-A'][0] = 'new-d7a175f5-475b-4ec3-a522-3672d95052e3';
    $pane = new stdClass();
    $pane->pid = 'new-3891251f-f169-4101-8a70-0bd14038dfa1';
    $pane->panel = 'grid-A';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5822',
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
    $pane->uuid = '3891251f-f169-4101-8a70-0bd14038dfa1';
    $display->content['new-3891251f-f169-4101-8a70-0bd14038dfa1'] = $pane;
    $display->panels['grid-A'][1] = 'new-3891251f-f169-4101-8a70-0bd14038dfa1';
    $pane = new stdClass();
    $pane->pid = 'new-05725d41-c971-4659-90b0-1454e24a1fe5';
    $pane->panel = 'grid-B';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5823',
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
    $pane->uuid = '05725d41-c971-4659-90b0-1454e24a1fe5';
    $display->content['new-05725d41-c971-4659-90b0-1454e24a1fe5'] = $pane;
    $display->panels['grid-B'][0] = 'new-05725d41-c971-4659-90b0-1454e24a1fe5';
    $pane = new stdClass();
    $pane->pid = 'new-3a94b5a7-8295-494f-bc7a-ea403105c706';
    $pane->panel = 'grid-B';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '289',
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
    $pane->uuid = '3a94b5a7-8295-494f-bc7a-ea403105c706';
    $display->content['new-3a94b5a7-8295-494f-bc7a-ea403105c706'] = $pane;
    $display->panels['grid-B'][1] = 'new-3a94b5a7-8295-494f-bc7a-ea403105c706';
    $pane = new stdClass();
    $pane->pid = 'new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $pane->panel = 'grid-C';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $display->content['new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf'] = $pane;
    $display->panels['grid-C'][0] = 'new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $pane = new stdClass();
    $pane->pid = 'new-a342fe7f-1fbf-4f53-896e-2bb00d8b47de';
    $pane->panel = 'grid-C';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '288',
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
    $pane->uuid = 'a342fe7f-1fbf-4f53-896e-2bb00d8b47de';
    $display->content['new-a342fe7f-1fbf-4f53-896e-2bb00d8b47de'] = $pane;
    $display->panels['grid-C'][1] = 'new-a342fe7f-1fbf-4f53-896e-2bb00d8b47de';
    $pane = new stdClass();
    $pane->pid = 'new-7e70d991-4623-4069-8d85-ecebdc1ab687';
    $pane->panel = 'grid-D';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '350',
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
    $pane->uuid = '7e70d991-4623-4069-8d85-ecebdc1ab687';
    $display->content['new-7e70d991-4623-4069-8d85-ecebdc1ab687'] = $pane;
    $display->panels['grid-D'][0] = 'new-7e70d991-4623-4069-8d85-ecebdc1ab687';
    $pane = new stdClass();
    $pane->pid = 'new-32fa5425-1edf-4fbd-b16a-66a522eff454';
    $pane->panel = 'grid-D';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '290',
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
    $pane->uuid = '32fa5425-1edf-4fbd-b16a-66a522eff454';
    $display->content['new-32fa5425-1edf-4fbd-b16a-66a522eff454'] = $pane;
    $display->panels['grid-D'][1] = 'new-32fa5425-1edf-4fbd-b16a-66a522eff454';
    $pane = new stdClass();
    $pane->pid = 'new-4ceae87a-2ff1-4395-b04a-c906b8b2f4f0';
    $pane->panel = 'grid-E';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '340',
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
    $pane->uuid = '4ceae87a-2ff1-4395-b04a-c906b8b2f4f0';
    $display->content['new-4ceae87a-2ff1-4395-b04a-c906b8b2f4f0'] = $pane;
    $display->panels['grid-E'][0] = 'new-4ceae87a-2ff1-4395-b04a-c906b8b2f4f0';
    $pane = new stdClass();
    $pane->pid = 'new-b3c72dc5-54e2-4747-9481-d20b0a26e6a0';
    $pane->panel = 'grid-E';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '355',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
      'override_title' => 1,
      'override_title_text' => 'Collaborative Projects',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b3c72dc5-54e2-4747-9481-d20b0a26e6a0';
    $display->content['new-b3c72dc5-54e2-4747-9481-d20b0a26e6a0'] = $pane;
    $display->panels['grid-E'][1] = 'new-b3c72dc5-54e2-4747-9481-d20b0a26e6a0';
    $pane = new stdClass();
    $pane->pid = 'new-05584113-9f01-4da4-a96b-0cbef894ec60';
    $pane->panel = 'grid-F';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '341',
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
    $pane->uuid = '05584113-9f01-4da4-a96b-0cbef894ec60';
    $display->content['new-05584113-9f01-4da4-a96b-0cbef894ec60'] = $pane;
    $display->panels['grid-F'][0] = 'new-05584113-9f01-4da4-a96b-0cbef894ec60';
    $pane = new stdClass();
    $pane->pid = 'new-1c22f07e-a790-4caa-abbf-2c33a0287e1c';
    $pane->panel = 'grid-F';
    $pane->type = 'views';
    $pane->subtype = 'topics';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Guide to Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c22f07e-a790-4caa-abbf-2c33a0287e1c';
    $display->content['new-1c22f07e-a790-4caa-abbf-2c33a0287e1c'] = $pane;
    $display->panels['grid-F'][1] = 'new-1c22f07e-a790-4caa-abbf-2c33a0287e1c';
    $pane = new stdClass();
    $pane->pid = 'new-0657ff43-ad2c-488a-b197-0bad9608ef87';
    $pane->panel = 'grid-F';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '16326',
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
    $pane->uuid = '0657ff43-ad2c-488a-b197-0bad9608ef87';
    $display->content['new-0657ff43-ad2c-488a-b197-0bad9608ef87'] = $pane;
    $display->panels['grid-F'][2] = 'new-0657ff43-ad2c-488a-b197-0bad9608ef87';
    $pane = new stdClass();
    $pane->pid = 'new-9c5dc0c3-807f-4009-ba6c-941b168c14a5';
    $pane->panel = 'rbsc-desc';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>The Department of Rare Books and Special Collections</strong>&nbsp;is one of the premier repositories of its kind. Its holdings span five millennia and five continents, and include around 300,000 rare or significant printed works; 30,000 linear feet of textual materials, ranging from cuneiform tablets to contemporary manuscripts; a wealth of prints, drawings, photographs, maps, coins, and other visual materials; the Cotsen Children\'s Library; and the Princeton University Archives. The privately owned Scheide Library is associated with the Department.</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rbsc-description',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c5dc0c3-807f-4009-ba6c-941b168c14a5';
    $display->content['new-9c5dc0c3-807f-4009-ba6c-941b168c14a5'] = $pane;
    $display->panels['rbsc-desc'][0] = 'new-9c5dc0c3-807f-4009-ba6c-941b168c14a5';
    $pane = new stdClass();
    $pane->pid = 'new-2da6d897-e857-4210-99cc-1e46911aa209';
    $pane->panel = 'rbsc-news';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_2';
    $pane->shown = FALSE;
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
      'css_id' => '',
      'css_class' => 'rbsc-news',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2da6d897-e857-4210-99cc-1e46911aa209';
    $display->content['new-2da6d897-e857-4210-99cc-1e46911aa209'] = $pane;
    $display->panels['rbsc-news'][0] = 'new-2da6d897-e857-4210-99cc-1e46911aa209';
    $pane = new stdClass();
    $pane->pid = 'new-5dc91963-c9a6-4ad3-89bb-a183cf4ee9ef';
    $pane->panel = 'rbsc-news';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_item-panel_pane_3';
    $pane->shown = FALSE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5dc91963-c9a6-4ad3-89bb-a183cf4ee9ef';
    $display->content['new-5dc91963-c9a6-4ad3-89bb-a183cf4ee9ef'] = $pane;
    $display->panels['rbsc-news'][1] = 'new-5dc91963-c9a6-4ad3-89bb-a183cf4ee9ef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_34'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Services',
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
            'paths' => 'services-policies',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research',
    'panels_breadcrumbs_paths' => 'conducting-research',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Services & Policies';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4f1744d4-2a63-482e-bccb-bfa9127c2f6d';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-conducting-research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '4f1744d4-2a63-482e-bccb-bfa9127c2f6d';
    $display->content['new-4f1744d4-2a63-482e-bccb-bfa9127c2f6d'] = $pane;
    $display->panels['first'][0] = 'new-4f1744d4-2a63-482e-bccb-bfa9127c2f6d';
    $pane = new stdClass();
    $pane->pid = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane->panel = 'second';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $display->content['new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1'] = $pane;
    $display->panels['second'][0] = 'new-acb0be33-bde0-47f9-a0c5-54d967d7b7b1';
    $pane = new stdClass();
    $pane->pid = 'new-2a78017f-2522-4bb3-9d1e-f57d4dad79bb';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'services-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '2a78017f-2522-4bb3-9d1e-f57d4dad79bb';
    $display->content['new-2a78017f-2522-4bb3-9d1e-f57d4dad79bb'] = $pane;
    $display->panels['second'][1] = 'new-2a78017f-2522-4bb3-9d1e-f57d4dad79bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}

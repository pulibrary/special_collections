<?php
/**
 * @file
 * transfer_or_donate_to_mudd.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function transfer_or_donate_to_mudd_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_c69a3805-a5d0-412c-bc81-8b8fa74d52ca';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 12;
  $handler->conf = array(
    'title' => 'Transfer or Donate to Mudd - Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'menu-grid',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'services/transfer-or-donate-records-mudd-library',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research
Services & Policies',
    'panels_breadcrumbs_paths' => '/conducting-research
/library-services',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'pul-base-four-four-four-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7d6127b2-811b-4c34-b9bc-eb2772f580d1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_c69a3805-a5d0-412c-bc81-8b8fa74d52ca';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-858c8c91-5b60-47cb-bed4-a8c0a9e0d981';
  $pane->panel = 'first';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '18719',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '858c8c91-5b60-47cb-bed4-a8c0a9e0d981';
  $display->content['new-858c8c91-5b60-47cb-bed4-a8c0a9e0d981'] = $pane;
  $display->panels['first'][0] = 'new-858c8c91-5b60-47cb-bed4-a8c0a9e0d981';
  $pane = new stdClass();
  $pane->pid = 'new-f3484270-4f55-4e3f-a6c6-a60da27247b2';
  $pane->panel = 'second';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '18720',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f3484270-4f55-4e3f-a6c6-a60da27247b2';
  $display->content['new-f3484270-4f55-4e3f-a6c6-a60da27247b2'] = $pane;
  $display->panels['second'][0] = 'new-f3484270-4f55-4e3f-a6c6-a60da27247b2';
  $pane = new stdClass();
  $pane->pid = 'new-578d671e-5c6c-464a-8e0e-6ccf5b66db34';
  $pane->panel = 'third';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '18721',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '578d671e-5c6c-464a-8e0e-6ccf5b66db34';
  $display->content['new-578d671e-5c6c-464a-8e0e-6ccf5b66db34'] = $pane;
  $display->panels['third'][0] = 'new-578d671e-5c6c-464a-8e0e-6ccf5b66db34';
  $pane = new stdClass();
  $pane->pid = 'new-a064a2c5-2e61-4a66-aebb-1ef9ad02e94d';
  $pane->panel = 'top';
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
  $pane->uuid = 'a064a2c5-2e61-4a66-aebb-1ef9ad02e94d';
  $display->content['new-a064a2c5-2e61-4a66-aebb-1ef9ad02e94d'] = $pane;
  $display->panels['top'][0] = 'new-a064a2c5-2e61-4a66-aebb-1ef9ad02e94d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_c69a3805-a5d0-412c-bc81-8b8fa74d52ca'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__transfer-or-donate-to-mudd-sub-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 13;
  $handler->conf = array(
    'title' => 'Transfer or Donate to Mudd - Sub Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'transfer-or-donate-to-mudd-sub-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'services/transfer-or-donate-records-mudd-library/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Conducting Research
Services & Policies
Transfer or Donate Records to Mudd Library',
    'panels_breadcrumbs_paths' => '/conducting-research
/library-services
/services/transfer-or-donate-records-mudd-library',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'three-nine';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7d6127b2-811b-4c34-b9bc-eb2772f580d1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__transfer-or-donate-to-mudd-sub-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9e27b3cc-d83c-4b1b-b6af-d7dd9619ebf2';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-university-archives';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'services/transfer-or-donate-records-mudd-library/university-archives
services/transfer-or-donate-records-mudd-library/university-archives/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->uuid = '9e27b3cc-d83c-4b1b-b6af-d7dd9619ebf2';
  $display->content['new-9e27b3cc-d83c-4b1b-b6af-d7dd9619ebf2'] = $pane;
  $display->panels['first'][0] = 'new-9e27b3cc-d83c-4b1b-b6af-d7dd9619ebf2';
  $pane = new stdClass();
  $pane->pid = 'new-1f378c4d-60ae-4120-9eaa-407d9a1c8c1b';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-public-policy-papers';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'services/transfer-or-donate-records-mudd-library/public-policy-papers
services/transfer-or-donate-records-mudd-library/public-policy-papers/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1f378c4d-60ae-4120-9eaa-407d9a1c8c1b';
  $display->content['new-1f378c4d-60ae-4120-9eaa-407d9a1c8c1b'] = $pane;
  $display->panels['first'][1] = 'new-1f378c4d-60ae-4120-9eaa-407d9a1c8c1b';
  $pane = new stdClass();
  $pane->pid = 'new-7e0eaddf-7f82-4334-a047-4a955df71433';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-oral-history-projects';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'services/transfer-or-donate-records-mudd-library/oral-history-projects
services/transfer-or-donate-records-mudd-library/oral-history-projects/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7e0eaddf-7f82-4334-a047-4a955df71433';
  $display->content['new-7e0eaddf-7f82-4334-a047-4a955df71433'] = $pane;
  $display->panels['first'][2] = 'new-7e0eaddf-7f82-4334-a047-4a955df71433';
  $pane = new stdClass();
  $pane->pid = 'new-74522a6b-26f2-4fe0-b734-9c46956a49c1';
  $pane->panel = 'first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_downloadable_document';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
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
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'downloadable-heading',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '74522a6b-26f2-4fe0-b734-9c46956a49c1';
  $display->content['new-74522a6b-26f2-4fe0-b734-9c46956a49c1'] = $pane;
  $display->panels['first'][3] = 'new-74522a6b-26f2-4fe0-b734-9c46956a49c1';
  $pane = new stdClass();
  $pane->pid = 'new-0f50360c-7163-4bf0-8d48-42633af5b1c4';
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
      'file_view_mode' => 'image_banner',
      'class' => '',
    ),
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
  $pane->uuid = '0f50360c-7163-4bf0-8d48-42633af5b1c4';
  $display->content['new-0f50360c-7163-4bf0-8d48-42633af5b1c4'] = $pane;
  $display->panels['second'][0] = 'new-0f50360c-7163-4bf0-8d48-42633af5b1c4';
  $pane = new stdClass();
  $pane->pid = 'new-a064a2c5-2e61-4a66-aebb-1ef9ad02e94d';
  $pane->panel = 'second';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a064a2c5-2e61-4a66-aebb-1ef9ad02e94d';
  $display->content['new-a064a2c5-2e61-4a66-aebb-1ef9ad02e94d'] = $pane;
  $display->panels['second'][1] = 'new-a064a2c5-2e61-4a66-aebb-1ef9ad02e94d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__transfer-or-donate-to-mudd-sub-page'] = $handler;

  return $export;
}

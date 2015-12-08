<?php
/**
 * @file
 * exhibitions_list.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function exhibitions_list_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Exhibition',
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
              'book' => 'book',
              'exhibition' => 'exhibition',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:exhibition:field_domain_type',
          'settings' => array(
            'field_domain_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '3',
                ),
              ),
            ),
            'field_domain_type_tid' => '3',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:field-title <small>%node:field-sub-title</small>';
  $display->uuid = 'b2262caa-3fd7-41e9-bc30-206e911e14d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbbca36a-9753-4179-ac52-a9e619df4e3d';
    $pane->panel = 'first';
    $pane->type = 'node_book_nav';
    $pane->subtype = 'node_book_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_book_parent_1',
      'override_title' => 1,
      'override_title_text' => 'Exhibition Menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbbca36a-9753-4179-ac52-a9e619df4e3d';
    $display->content['new-fbbca36a-9753-4179-ac52-a9e619df4e3d'] = $pane;
    $display->panels['first'][0] = 'new-fbbca36a-9753-4179-ac52-a9e619df4e3d';
    $pane = new stdClass();
    $pane->pid = 'new-ee316f30-0ff6-49f8-a5bc-a559cedce694';
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
    $pane->uuid = 'ee316f30-0ff6-49f8-a5bc-a559cedce694';
    $display->content['new-ee316f30-0ff6-49f8-a5bc-a559cedce694'] = $pane;
    $display->panels['second'][0] = 'new-ee316f30-0ff6-49f8-a5bc-a559cedce694';
    $pane = new stdClass();
    $pane->pid = 'new-f7a37fb7-546d-40f6-8632-8d3dd2efa5b2';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_gallery_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'gallery_image',
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
    $pane->uuid = 'f7a37fb7-546d-40f6-8632-8d3dd2efa5b2';
    $display->content['new-f7a37fb7-546d-40f6-8632-8d3dd2efa5b2'] = $pane;
    $display->panels['second'][1] = 'new-f7a37fb7-546d-40f6-8632-8d3dd2efa5b2';
    $pane = new stdClass();
    $pane->pid = 'new-b5c1a629-5bbc-4b58-8f4c-0a5296dcebc7';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
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
    $pane->uuid = 'b5c1a629-5bbc-4b58-8f4c-0a5296dcebc7';
    $display->content['new-b5c1a629-5bbc-4b58-8f4c-0a5296dcebc7'] = $pane;
    $display->panels['top'][0] = 'new-b5c1a629-5bbc-4b58-8f4c-0a5296dcebc7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'External Exhibition',
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
              'exhibition' => 'exhibition',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:exhibition:field_domain_type',
          'settings' => array(
            'field_domain_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '4',
                ),
              ),
            ),
            'field_domain_type_tid' => '4',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Explore
Exhibitions',
    'panels_breadcrumbs_paths' => 'explore
exhibitions',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'six-six';
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
  $display->title = '%node:title <small>%node:field-sub-title</small>';
  $display->uuid = 'b2262caa-3fd7-41e9-bc30-206e911e14d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3c4be788-44a2-464e-9263-8016994ec6ed';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibition_view-panel_pane_1';
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
    $pane->uuid = '3c4be788-44a2-464e-9263-8016994ec6ed';
    $display->content['new-3c4be788-44a2-464e-9263-8016994ec6ed'] = $pane;
    $display->panels['first'][0] = 'new-3c4be788-44a2-464e-9263-8016994ec6ed';
    $pane = new stdClass();
    $pane->pid = 'new-cecebd8c-9079-4c63-bf2a-fb8905a63434';
    $pane->panel = 'second';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibition_view-panel_pane_2';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'classy',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cecebd8c-9079-4c63-bf2a-fb8905a63434';
    $display->content['new-cecebd8c-9079-4c63-bf2a-fb8905a63434'] = $pane;
    $display->panels['second'][0] = 'new-cecebd8c-9079-4c63-bf2a-fb8905a63434';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Exhibitions',
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
            'paths' => 'exhibitions',
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
  $display->layout = 'six-six-stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Exhibitions';
  $display->uuid = '66a1854e-806f-4ad3-9511-4b86d3b36110';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-04a60b21-7959-42d7-ab7e-1ed73a2caf2c';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Past Exhibitions',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04a60b21-7959-42d7-ab7e-1ed73a2caf2c';
    $display->content['new-04a60b21-7959-42d7-ab7e-1ed73a2caf2c'] = $pane;
    $display->panels['first'][0] = 'new-04a60b21-7959-42d7-ab7e-1ed73a2caf2c';
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
    $pane = new stdClass();
    $pane->pid = 'new-53041147-6bbc-4e91-b885-a4b118f37526';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_list-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53041147-6bbc-4e91-b885-a4b118f37526';
    $display->content['new-53041147-6bbc-4e91-b885-a4b118f37526'] = $pane;
    $display->panels['top'][1] = 'new-53041147-6bbc-4e91-b885-a4b118f37526';
    $pane = new stdClass();
    $pane->pid = 'new-46b36c29-bd46-4a76-a1ca-d4aad196821d';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<hr />
<h2 class="pane-title">Past Exhibitions</h2>',
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
    $pane->uuid = '46b36c29-bd46-4a76-a1ca-d4aad196821d';
    $display->content['new-46b36c29-bd46-4a76-a1ca-d4aad196821d'] = $pane;
    $display->panels['top'][2] = 'new-46b36c29-bd46-4a76-a1ca-d4aad196821d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  return $export;
}

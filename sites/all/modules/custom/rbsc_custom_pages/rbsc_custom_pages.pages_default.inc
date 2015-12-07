<?php
/**
 * @file
 * rbsc_custom_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function rbsc_custom_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'collection_strength';
  $page->task = 'page';
  $page->admin_title = 'Collection Strength';
  $page->admin_description = '';
  $page->path = 'topics/%col_strengthnid/divisions/%divisionnid/';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'col_strengthnid' => array(
      'id' => 1,
      'identifier' => 'Collection Strength ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'divisionnid' => array(
      'id' => 2,
      'identifier' => 'Division ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_collection_strength_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'collection_strength';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Collections
%divisionnid:title',
    'panels_breadcrumbs_paths' => 'collections
%divisionnid:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%col_strengthnid:title';
  $display->uuid = '28fd46e1-7f60-474e-9f9d-e49c5214f50d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-207482d6-29fe-400d-8495-02fa0a18d349';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%col_strengthnid:nid',
        'nid_1' => '%divisionnid:nid',
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
    $pane->uuid = '207482d6-29fe-400d-8495-02fa0a18d349';
    $display->content['new-207482d6-29fe-400d-8495-02fa0a18d349'] = $pane;
    $display->panels['left'][0] = 'new-207482d6-29fe-400d-8495-02fa0a18d349';
    $pane = new stdClass();
    $pane->pid = 'new-5f2bc64b-5aa6-499c-99d5-16b23120d18e';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%col_strengthnid:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'topic-img',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5f2bc64b-5aa6-499c-99d5-16b23120d18e';
    $display->content['new-5f2bc64b-5aa6-499c-99d5-16b23120d18e'] = $pane;
    $display->panels['left'][1] = 'new-5f2bc64b-5aa6-499c-99d5-16b23120d18e';
    $pane = new stdClass();
    $pane->pid = 'new-34c1e092-7b91-45f8-8df1-911b13c83afe';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_location-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%divisionnid:nid',
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
    $pane->uuid = '34c1e092-7b91-45f8-8df1-911b13c83afe';
    $display->content['new-34c1e092-7b91-45f8-8df1-911b13c83afe'] = $pane;
    $display->panels['left'][2] = 'new-34c1e092-7b91-45f8-8df1-911b13c83afe';
    $pane = new stdClass();
    $pane->pid = 'new-518b7b09-b262-4ff8-950d-3453a801ef11';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_curator-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%divisionnid:nid',
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
    $pane->uuid = '518b7b09-b262-4ff8-950d-3453a801ef11';
    $display->content['new-518b7b09-b262-4ff8-950d-3453a801ef11'] = $pane;
    $display->panels['left'][3] = 'new-518b7b09-b262-4ff8-950d-3453a801ef11';
    $pane = new stdClass();
    $pane->pid = 'new-46bcd965-b465-462d-9274-897f4ab11b27';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'division_quick_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%divisionnid:nid',
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
    $pane->uuid = '46bcd965-b465-462d-9274-897f4ab11b27';
    $display->content['new-46bcd965-b465-462d-9274-897f4ab11b27'] = $pane;
    $display->panels['left'][4] = 'new-46bcd965-b465-462d-9274-897f4ab11b27';
    $pane = new stdClass();
    $pane->pid = 'new-b975ef4b-8af7-4b63-b3ea-a49511c66a08';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%col_strengthnid:nid',
        'nid_1' => '%divisionnid:nid',
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
    $pane->uuid = 'b975ef4b-8af7-4b63-b3ea-a49511c66a08';
    $display->content['new-b975ef4b-8af7-4b63-b3ea-a49511c66a08'] = $pane;
    $display->panels['middle'][0] = 'new-b975ef4b-8af7-4b63-b3ea-a49511c66a08';
    $pane = new stdClass();
    $pane->pid = 'new-1dff1df7-d3ae-4dbf-95cf-b785259c80e3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%col_strengthnid:nid',
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
    $pane->uuid = '1dff1df7-d3ae-4dbf-95cf-b785259c80e3';
    $display->content['new-1dff1df7-d3ae-4dbf-95cf-b785259c80e3'] = $pane;
    $display->panels['middle'][1] = 'new-1dff1df7-d3ae-4dbf-95cf-b785259c80e3';
    $pane = new stdClass();
    $pane->pid = 'new-716ddff6-8b42-4d0b-973f-0f07b9711b1e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'filtered_collection_list-panel_pane_4';
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
    $pane->uuid = '716ddff6-8b42-4d0b-973f-0f07b9711b1e';
    $display->content['new-716ddff6-8b42-4d0b-973f-0f07b9711b1e'] = $pane;
    $display->panels['middle'][2] = 'new-716ddff6-8b42-4d0b-973f-0f07b9711b1e';
    $pane = new stdClass();
    $pane->pid = 'new-1bb0a9de-0d96-4107-aba4-2e24da8adda6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '<span class="glyphicon glyphicon-hand-right"></span> Pssst...',
      'body' => '<p>You are currently only seeing content in the %divisionnid:title. You can also explore&nbsp;<a href="%col_strengthnid:url">%col_strengthnid:title material in all divisions</a>.</p>
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
      'css_class' => 'alert alert-warning',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1bb0a9de-0d96-4107-aba4-2e24da8adda6';
    $display->content['new-1bb0a9de-0d96-4107-aba4-2e24da8adda6'] = $pane;
    $display->panels['right'][0] = 'new-1bb0a9de-0d96-4107-aba4-2e24da8adda6';
    $pane = new stdClass();
    $pane->pid = 'new-822857dd-2114-4357-aa9c-12bd73932008';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'online_collections-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%col_strengthnid:nid',
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
    $pane->uuid = '822857dd-2114-4357-aa9c-12bd73932008';
    $display->content['new-822857dd-2114-4357-aa9c-12bd73932008'] = $pane;
    $display->panels['right'][1] = 'new-822857dd-2114-4357-aa9c-12bd73932008';
    $pane = new stdClass();
    $pane->pid = 'new-ea3d8029-916c-410d-96b8-372a5e57d25f';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'research_guides-panel_pane_3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ea3d8029-916c-410d-96b8-372a5e57d25f';
    $display->content['new-ea3d8029-916c-410d-96b8-372a5e57d25f'] = $pane;
    $display->panels['right'][2] = 'new-ea3d8029-916c-410d-96b8-372a5e57d25f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['collection_strength'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location_more_page';
  $page->task = 'page';
  $page->admin_title = 'Location More Page';
  $page->admin_description = 'This is where you can read more about a given location.';
  $page->path = 'locations/%node/more';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['location_more_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbsc_blog_search_page';
  $page->task = 'page';
  $page->admin_title = 'RBSC Blog Search Page';
  $page->admin_description = '';
  $page->path = 'find/blogs/%query';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbsc_blog_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbsc_blog_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
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
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
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
  $display->title = 'Results for "%query:html_safe"';
  $display->uuid = '16928f5f-c30b-4a46-9345-3d18833a4255';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d19eecce-dc83-4bc1-85f5-37631e31121e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd19eecce-dc83-4bc1-85f5-37631e31121e';
    $display->content['new-d19eecce-dc83-4bc1-85f5-37631e31121e'] = $pane;
    $display->panels['left'][0] = 'new-d19eecce-dc83-4bc1-85f5-37631e31121e';
    $pane = new stdClass();
    $pane->pid = 'new-058e7890-eca7-4a54-8a2e-242cbe7bde29';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbsc_basic_node_search-panel_pane_2';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '058e7890-eca7-4a54-8a2e-242cbe7bde29';
    $display->content['new-058e7890-eca7-4a54-8a2e-242cbe7bde29'] = $pane;
    $display->panels['right'][0] = 'new-058e7890-eca7-4a54-8a2e-242cbe7bde29';
    $pane = new stdClass();
    $pane->pid = 'new-bcb44825-0b7e-4fec-bed6-054b137acb47';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'rbsc_blog_search-rbsc_blog_search_form';
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
    $pane->uuid = 'bcb44825-0b7e-4fec-bed6-054b137acb47';
    $display->content['new-bcb44825-0b7e-4fec-bed6-054b137acb47'] = $pane;
    $display->panels['top'][0] = 'new-bcb44825-0b7e-4fec-bed6-054b137acb47';
    $pane = new stdClass();
    $pane->pid = 'new-5cf38640-8b8a-47bf-85b8-09cf9582b0c1';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_search-panel_pane_4';
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
    $pane->uuid = '5cf38640-8b8a-47bf-85b8-09cf9582b0c1';
    $display->content['new-5cf38640-8b8a-47bf-85b8-09cf9582b0c1'] = $pane;
    $display->panels['top'][1] = 'new-5cf38640-8b8a-47bf-85b8-09cf9582b0c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbsc_blog_search_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbsc_site_search_page';
  $page->task = 'page';
  $page->admin_title = 'RBSC Site Search Page';
  $page->admin_description = '';
  $page->path = 'find/%query';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbsc_site_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbsc_site_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
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
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
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
  $display->title = 'Results for "%query:html_safe"';
  $display->uuid = '16928f5f-c30b-4a46-9345-3d18833a4255';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d19eecce-dc83-4bc1-85f5-37631e31121e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk';
    $pane->shown = TRUE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd19eecce-dc83-4bc1-85f5-37631e31121e';
    $display->content['new-d19eecce-dc83-4bc1-85f5-37631e31121e'] = $pane;
    $display->panels['left'][0] = 'new-d19eecce-dc83-4bc1-85f5-37631e31121e';
    $pane = new stdClass();
    $pane->pid = 'new-058e7890-eca7-4a54-8a2e-242cbe7bde29';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbsc_basic_node_search-panel_pane_2';
    $pane->shown = TRUE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '058e7890-eca7-4a54-8a2e-242cbe7bde29';
    $display->content['new-058e7890-eca7-4a54-8a2e-242cbe7bde29'] = $pane;
    $display->panels['right'][0] = 'new-058e7890-eca7-4a54-8a2e-242cbe7bde29';
    $pane = new stdClass();
    $pane->pid = 'new-b3fcd6d0-9670-4030-92f4-cdbd0d7f9fa3';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'rbsc_search-rbsc_search_form';
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
    $pane->uuid = 'b3fcd6d0-9670-4030-92f4-cdbd0d7f9fa3';
    $display->content['new-b3fcd6d0-9670-4030-92f4-cdbd0d7f9fa3'] = $pane;
    $display->panels['top'][0] = 'new-b3fcd6d0-9670-4030-92f4-cdbd0d7f9fa3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbsc_site_search_page'] = $page;

  return $pages;

}

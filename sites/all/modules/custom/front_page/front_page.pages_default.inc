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
  $handler->weight = -25;
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
  $display->title = '';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd7a175f5-475b-4ec3-a522-3672d95052e3';
    $display->content['new-d7a175f5-475b-4ec3-a522-3672d95052e3'] = $pane;
    $display->panels['grid-A'][0] = 'new-d7a175f5-475b-4ec3-a522-3672d95052e3';
    $pane = new stdClass();
    $pane->pid = 'new-05725d41-c971-4659-90b0-1454e24a1fe5';
    $pane->panel = 'grid-B';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
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
    $pane->pid = 'new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $display->content['new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf'] = $pane;
    $display->panels['grid-C'][0] = 'new-673dec46-4fc3-4e0c-9da3-f8ae579bfabf';
    $pane = new stdClass();
    $pane->pid = 'new-7e70d991-4623-4069-8d85-ecebdc1ab687';
    $pane->panel = 'grid-D';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
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
    $pane->pid = 'new-4ceae87a-2ff1-4395-b04a-c906b8b2f4f0';
    $pane->panel = 'grid-E';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
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
    $pane->pid = 'new-05584113-9f01-4da4-a96b-0cbef894ec60';
    $pane->panel = 'grid-F';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
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
    $pane->pid = 'new-9c5dc0c3-807f-4009-ba6c-941b168c14a5';
    $pane->panel = 'rbsc-desc';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>The Department of Rare Books and Special Collections</strong>&nbsp;is one of the premier repositories of its kind. Its holdings span five millennia and five continents, and include around 300,000 rare or significant printed works; 30,000 linear feet of textual materials, ranging from cuneiform tablets to contemporary manuscripts; a wealth of prints, drawings, photographs, maps, coins, and other visual materials; the Cotsen Children\'s Library; and the Princeton University Archives. The recently-gifted Scheide Library is also associated with the Department.</p>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5dc91963-c9a6-4ad3-89bb-a183cf4ee9ef';
    $display->content['new-5dc91963-c9a6-4ad3-89bb-a183cf4ee9ef'] = $pane;
    $display->panels['rbsc-news'][1] = 'new-5dc91963-c9a6-4ad3-89bb-a183cf4ee9ef';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Homepage',
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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'grid_box_a',
          1 => 'grid_box_b',
          2 => 'grid_box_c',
        ),
        'parent' => 'main',
      ),
      'grid_box_c' => array(
        'type' => 'region',
        'title' => 'Grid Box C',
        'width' => '291',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'col-sm-6 col-md-3 img-grid',
      ),
      'grid_box_b' => array(
        'type' => 'region',
        'title' => 'Grid Box B',
        'width' => '292',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'col-sm-6 col-md-3 img-grid',
      ),
      'grid_box_a' => array(
        'type' => 'region',
        'title' => 'Grid Box A',
        'width' => '585',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'col-sm-12 col-md-6 img-grid',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'grid_d_box',
          1 => 'grid_e_box',
          2 => 'grid_f_box',
          3 => 'grid_g_box',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'grid_g_box' => array(
        'type' => 'region',
        'title' => 'Grid G Box',
        'width' => '292',
        'width_type' => 'px',
        'parent' => '1',
        'class' => 'col-sm-6 col-md-3 img-grid',
      ),
      'grid_f_box' => array(
        'type' => 'region',
        'title' => 'Grid F Box',
        'width' => '292',
        'width_type' => 'px',
        'parent' => '1',
        'class' => 'col-sm-6 col-md-3 img-grid',
      ),
      'grid_e_box' => array(
        'type' => 'region',
        'title' => 'Grid E Box',
        'width' => '292',
        'width_type' => 'px',
        'parent' => '1',
        'class' => 'col-sm-6 col-md-3 img-grid',
      ),
      'grid_d_box' => array(
        'type' => 'region',
        'title' => 'Grid D Box',
        'width' => '292',
        'width_type' => 'px',
        'parent' => '1',
        'class' => 'col-sm-6 col-md-3 img-grid',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'rbsc_description',
          1 => 'rbsc_new_and_notable',
        ),
        'parent' => 'main',
        'class' => 'sub-grid',
      ),
      'rbsc_description' => array(
        'type' => 'region',
        'title' => 'RBSC Description',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'rbsc-description',
      ),
      'rbsc_new_and_notable' => array(
        'type' => 'region',
        'title' => 'RBSC New and Notable',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'rbsc-news',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'grid_box_g' => NULL,
      'grid_box_f' => NULL,
      'grid_box_e' => NULL,
      'grid_box_d' => NULL,
      'grid_box_c' => NULL,
      'grid_box_b' => NULL,
      'grid_box_a' => NULL,
      'foo' => NULL,
      'grid_d_box' => NULL,
      'grid_g_box' => NULL,
      'grid_f_box' => NULL,
      'grid_e_box' => NULL,
      'rbsc_description' => NULL,
      'rbsc_new_and_notable' => NULL,
    ),
    'grid_box_c' => array(
      'style' => '-1',
    ),
    'grid_box_a' => array(
      'style' => '-1',
    ),
    'grid_d_box' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45a2109d-e5b9-473e-ad3a-fa230c33c273';
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
      'title' => '',
      'body' => '<p><strong>The Department of Rare Books and Special Collections</strong>&nbsp;is one of the premier repositories of its kind. Its holdings span five millennia and five continents, and include around 200,000 rare or significant printed works; 30,000 linear feet of textual materials, ranging from cuneiform tablets to contemporary manuscripts; a wealth of prints, drawings, photographs, maps, coins, and other visual materials; the Cotsen Children\'s Library; and the Princeton University Archives. The privately owned Scheide Library is associated with the Department.</p>
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
      'css_class' => 'rbsc-front-page-desc',
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
      'css_id' => '',
      'css_class' => 'allblogs',
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

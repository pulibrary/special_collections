<?php
/**
 * @file
 * rbsc_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rbsc_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'division staff' => 'division staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'create collection content'.
  $permissions['create collection content'] = array(
    'name' => 'create collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create collection_strength content'.
  $permissions['create collection_strength content'] = array(
    'name' => 'create collection_strength content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create division content'.
  $permissions['create division content'] = array(
    'name' => 'create division content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create exhibition content'.
  $permissions['create exhibition content'] = array(
    'name' => 'create exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mainmenu content'.
  $permissions['create mainmenu content'] = array(
    'name' => 'create mainmenu content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create policy content'.
  $permissions['create policy content'] = array(
    'name' => 'create policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create research_guides content'.
  $permissions['create research_guides content'] = array(
    'name' => 'create research_guides content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create web_form content'.
  $permissions['create web_form content'] = array(
    'name' => 'create web_form content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any collection content'.
  $permissions['delete any collection content'] = array(
    'name' => 'delete any collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any collection_strength content'.
  $permissions['delete any collection_strength content'] = array(
    'name' => 'delete any collection_strength content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any division content'.
  $permissions['delete any division content'] = array(
    'name' => 'delete any division content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any exhibition content'.
  $permissions['delete any exhibition content'] = array(
    'name' => 'delete any exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mainmenu content'.
  $permissions['delete any mainmenu content'] = array(
    'name' => 'delete any mainmenu content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any policy content'.
  $permissions['delete any policy content'] = array(
    'name' => 'delete any policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any research_guides content'.
  $permissions['delete any research_guides content'] = array(
    'name' => 'delete any research_guides content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any web_form content'.
  $permissions['delete any web_form content'] = array(
    'name' => 'delete any web_form content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collection content'.
  $permissions['delete own collection content'] = array(
    'name' => 'delete own collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collection_strength content'.
  $permissions['delete own collection_strength content'] = array(
    'name' => 'delete own collection_strength content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own division content'.
  $permissions['delete own division content'] = array(
    'name' => 'delete own division content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own exhibition content'.
  $permissions['delete own exhibition content'] = array(
    'name' => 'delete own exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mainmenu content'.
  $permissions['delete own mainmenu content'] = array(
    'name' => 'delete own mainmenu content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own policy content'.
  $permissions['delete own policy content'] = array(
    'name' => 'delete own policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own research_guides content'.
  $permissions['delete own research_guides content'] = array(
    'name' => 'delete own research_guides content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own web_form content'.
  $permissions['delete own web_form content'] = array(
    'name' => 'delete own web_form content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any collection content'.
  $permissions['edit any collection content'] = array(
    'name' => 'edit any collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any collection_strength content'.
  $permissions['edit any collection_strength content'] = array(
    'name' => 'edit any collection_strength content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any division content'.
  $permissions['edit any division content'] = array(
    'name' => 'edit any division content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any exhibition content'.
  $permissions['edit any exhibition content'] = array(
    'name' => 'edit any exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any mainmenu content'.
  $permissions['edit any mainmenu content'] = array(
    'name' => 'edit any mainmenu content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any policy content'.
  $permissions['edit any policy content'] = array(
    'name' => 'edit any policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any research_guides content'.
  $permissions['edit any research_guides content'] = array(
    'name' => 'edit any research_guides content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any web_form content'.
  $permissions['edit any web_form content'] = array(
    'name' => 'edit any web_form content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own collection content'.
  $permissions['edit own collection content'] = array(
    'name' => 'edit own collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own collection_strength content'.
  $permissions['edit own collection_strength content'] = array(
    'name' => 'edit own collection_strength content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own division content'.
  $permissions['edit own division content'] = array(
    'name' => 'edit own division content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own exhibition content'.
  $permissions['edit own exhibition content'] = array(
    'name' => 'edit own exhibition content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own mainmenu content'.
  $permissions['edit own mainmenu content'] = array(
    'name' => 'edit own mainmenu content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own policy content'.
  $permissions['edit own policy content'] = array(
    'name' => 'edit own policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own research_guides content'.
  $permissions['edit own research_guides content'] = array(
    'name' => 'edit own research_guides content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own web_form content'.
  $permissions['edit own web_form content'] = array(
    'name' => 'edit own web_form content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'division staff' => 'division staff',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}

<?php
/**
 * @file
 * rbsc_roles.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function rbsc_roles_default_roles_permissions() {
  $roles = array();

  // Exported role: division staff
  $roles['division staff'] = array(
    'name' => 'division staff',
    'weight' => 3,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access workbench' => TRUE,
      'administer comments' => TRUE,
      'create collection content' => TRUE,
      'create collection_strength content' => TRUE,
      'create division content' => TRUE,
      'create faq content' => TRUE,
      'create mainmenu content' => TRUE,
      'create page content' => TRUE,
      'create policy content' => TRUE,
      'create research_guides content' => TRUE,
      'create web_form content' => TRUE,
      'delete any collection content' => TRUE,
      'delete any collection_strength content' => TRUE,
      'delete any division content' => TRUE,
      'delete any faq content' => TRUE,
      'delete any mainmenu content' => TRUE,
      'delete any page content' => TRUE,
      'delete any policy content' => TRUE,
      'delete any research_guides content' => TRUE,
      'delete any web_form content' => TRUE,
      'delete own collection content' => TRUE,
      'delete own collection_strength content' => TRUE,
      'delete own division content' => TRUE,
      'delete own faq content' => TRUE,
      'delete own mainmenu content' => TRUE,
      'delete own page content' => TRUE,
      'delete own policy content' => TRUE,
      'delete own research_guides content' => TRUE,
      'delete own web_form content' => TRUE,
      'delete revisions' => TRUE,
      'edit any collection content' => TRUE,
      'edit any collection_strength content' => TRUE,
      'edit any division content' => TRUE,
      'edit any faq content' => TRUE,
      'edit any mainmenu content' => TRUE,
      'edit any page content' => TRUE,
      'edit any policy content' => TRUE,
      'edit any research_guides content' => TRUE,
      'edit any web_form content' => TRUE,
      'edit own collection content' => TRUE,
      'edit own collection_strength content' => TRUE,
      'edit own comments' => TRUE,
      'edit own division content' => TRUE,
      'edit own faq content' => TRUE,
      'edit own mainmenu content' => TRUE,
      'edit own page content' => TRUE,
      'edit own policy content' => TRUE,
      'edit own research_guides content' => TRUE,
      'edit own web_form content' => TRUE,
      'post comments' => TRUE,
      'revert revisions' => TRUE,
      'skip comment approval' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
    ),
  );

  return $roles;
}

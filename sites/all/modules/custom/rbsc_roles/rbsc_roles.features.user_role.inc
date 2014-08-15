<?php
/**
 * @file
 * rbsc_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rbsc_roles_user_default_roles() {
  $roles = array();

  // Exported role: division staff.
  $roles['division staff'] = array(
    'name' => 'division staff',
    'weight' => 3,
  );

  return $roles;
}

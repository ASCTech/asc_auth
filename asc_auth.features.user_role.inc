<?php
/**
 * @file
 * asc_auth.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function asc_auth_user_default_roles() {
  $roles = array();

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => '4',
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => '3',
  );

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => '2',
  );

  return $roles;
}

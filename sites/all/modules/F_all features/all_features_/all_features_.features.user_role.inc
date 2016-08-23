<?php
/**
 * @file
 * all_features_.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function all_features__user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}

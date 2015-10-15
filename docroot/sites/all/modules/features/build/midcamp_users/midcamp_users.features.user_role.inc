<?php
/**
 * @file
 * midcamp_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function midcamp_users_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 4,
  );

  // Exported role: Individual Sponsor.
  $roles['Individual Sponsor'] = array(
    'name' => 'Individual Sponsor',
    'weight' => 5,
  );

  // Exported role: Keynote.
  $roles['Keynote'] = array(
    'name' => 'Keynote',
    'weight' => 6,
  );

  // Exported role: Session Selection Admin.
  $roles['Session Selection Admin'] = array(
    'name' => 'Session Selection Admin',
    'weight' => 3,
  );

  // Exported role: Speaker.
  $roles['Speaker'] = array(
    'name' => 'Speaker',
    'weight' => 2,
  );

  return $roles;
}

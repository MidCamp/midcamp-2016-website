<?php
/**
 * @file
 * midcamp_og_features_permission_node_sponsor.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function midcamp_og_features_permission_node_sponsor_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:sponsor:add user'
  $permissions['node:sponsor:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sponsor:administer group'
  $permissions['node:sponsor:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sponsor:approve and deny subscription'
  $permissions['node:sponsor:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sponsor:create job content'
  $permissions['node:sponsor:create job content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:sponsor:delete any job content'
  $permissions['node:sponsor:delete any job content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:sponsor:delete own job content'
  $permissions['node:sponsor:delete own job content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:sponsor:manage members'
  $permissions['node:sponsor:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sponsor:manage permissions'
  $permissions['node:sponsor:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sponsor:manage roles'
  $permissions['node:sponsor:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sponsor:subscribe'
  $permissions['node:sponsor:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:sponsor:subscribe without approval'
  $permissions['node:sponsor:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:sponsor:unsubscribe'
  $permissions['node:sponsor:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:sponsor:update any job content'
  $permissions['node:sponsor:update any job content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:sponsor:update group'
  $permissions['node:sponsor:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sponsor:update own job content'
  $permissions['node:sponsor:update own job content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}

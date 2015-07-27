<?php
/**
 * @file
 * Views plugin handlers.
 */

/**
 * Implements hook_views_plugins().
 */
function midcamp_content_types_views_plugins() {
  return array(
    'access' => array(
      'not_role' => array(
        'title' => t('Role is not'),
        'help' => t('Access will be granted to authenticated users who do not have the selected role.'),
        'handler' => 'views_plugin_access_not_role',
        'uses options' => TRUE,
        'path' => drupal_get_path('module', 'midcamp_content_types') . '/plugins',
      ),
    ),
  );
}

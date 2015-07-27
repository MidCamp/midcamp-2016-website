<?php
/**
 * @file
 * View hooks for midcamp_ctools.
 */

/**
 * Implements hook_views_data_alter().
 */
function midcamp_ctools_views_data_alter(&$data) {
  $data['node']['smart_timeslot'] = array(
    'real field' => 'nid',
    'field' => array(
      'title' => t('Smart timeslot'),
      'help' => t('Handles 20 minute sessions in a one hour timeslot.'),
      'handler' => 'midcamp_ctools_handler_smarttimeslot',
    ),
  );
}

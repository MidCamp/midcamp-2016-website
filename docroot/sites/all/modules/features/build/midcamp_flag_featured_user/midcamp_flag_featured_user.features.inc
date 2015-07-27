<?php
/**
 * @file
 * midcamp_flag_featured_user.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function midcamp_flag_featured_user_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured user".
  $flags['featured_user'] = array(
    'entity_type' => 'user',
    'title' => 'Featured user',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Make me a featured user',
    'flag_long' => '',
    'flag_message' => 'Featured!',
    'unflag_short' => 'Make me normal again',
    'unflag_long' => '',
    'unflag_message' => 'Normal!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'plaque' => 0,
      'simple' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 0,
    'access_uid' => 'others',
    'module' => 'midcamp_flag_featured_user',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

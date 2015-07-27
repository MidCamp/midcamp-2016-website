<?php
/**
 * @file
 * midcamp_flag_accepted.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function midcamp_flag_accepted_flag_default_flags() {
  $flags = array();
  // Exported flag: "Accepted".
  $flags['accepted'] = array(
    'entity_type' => 'node',
    'title' => 'Accepted',
    'global' => 1,
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'Accept this session',
    'flag_long' => '',
    'flag_message' => 'Accepted!',
    'unflag_short' => 'Make me not accepted',
    'unflag_long' => '',
    'unflag_message' => 'Undecided!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'user_page_teaser' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'midcamp_flag_accepted',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

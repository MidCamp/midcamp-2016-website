<?php
/**
 * @file
 * midcamp_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function midcamp_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'session_audience' => array(
      'name' => 'Session Audience',
      'machine_name' => 'session_audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'session_tracks' => array(
      'name' => 'Session Tracks',
      'machine_name' => 'session_tracks',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sponsor_levels' => array(
      'name' => 'Sponsor Levels',
      'machine_name' => 'sponsor_levels',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

<?php
/**
 * @file
 * midcamp_profile2_type_conference_details.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function midcamp_profile2_type_conference_details_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__conference_details';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__conference_details'] = $strongarm;

  return $export;
}

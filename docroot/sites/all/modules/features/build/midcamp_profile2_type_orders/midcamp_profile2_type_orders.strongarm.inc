<?php
/**
 * @file
 * midcamp_profile2_type_orders.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function midcamp_profile2_type_orders_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__orders';
  $strongarm->value = array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__orders'] = $strongarm;

  return $export;
}

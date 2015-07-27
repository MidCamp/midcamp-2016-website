<?php
/**
 * @file
 * midcamp_eck_scamp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midcamp_eck_scamp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function midcamp_eck_scamp_eck_bundle_info() {
  $items = array(
    'scamp_assignment' => array(
      'machine_name' => 'scamp_assignment',
      'entity_type' => 'scamp',
      'name' => 'assignment',
      'label' => 'Assignment',
    ),
    'scamp_room' => array(
      'machine_name' => 'scamp_room',
      'entity_type' => 'scamp',
      'name' => 'room',
      'label' => 'Room',
    ),
    'scamp_timeslot' => array(
      'machine_name' => 'scamp_timeslot',
      'entity_type' => 'scamp',
      'name' => 'timeslot',
      'label' => 'Timeslot',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function midcamp_eck_scamp_eck_entity_type_info() {
  $items = array(
    'scamp' => array(
      'name' => 'scamp',
      'label' => 'SCAMP',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}

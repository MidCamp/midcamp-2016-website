<?php
/**
 * @file
 * midcamp_node_schedule_item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function midcamp_node_schedule_item_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scheduling|node|schedule_item|form';
  $field_group->group_name = 'group_scheduling';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'schedule_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling',
    'weight' => '4',
    'children' => array(
      0 => 'field_room',
      1 => 'field_timeslot',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-scheduling field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_scheduling|node|schedule_item|form'] = $field_group;

  return $export;
}

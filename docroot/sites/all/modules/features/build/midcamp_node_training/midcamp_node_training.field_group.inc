<?php
/**
 * @file
 * midcamp_node_training.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function midcamp_node_training_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scheduling|node|training|form';
  $field_group->group_name = 'group_scheduling';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling',
    'weight' => '12',
    'children' => array(
      0 => 'field_room',
      1 => 'field_start_time',
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
  $field_groups['group_scheduling|node|training|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Scheduling');

  return $field_groups;
}

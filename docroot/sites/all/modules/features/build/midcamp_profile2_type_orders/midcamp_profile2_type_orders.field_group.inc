<?php
/**
 * @file
 * midcamp_profile2_type_orders.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function midcamp_profile2_type_orders_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_midcamp_sessions|profile2|orders|default';
  $field_group->group_name = 'group_midcamp_sessions';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'orders';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MidCamp Session Tickets',
    'weight' => '0',
    'children' => array(
      0 => 'field_midcamp_tickets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'MidCamp Session Tickets',
      'instance_settings' => array(
        'classes' => 'group-midcamp-sessions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_midcamp_sessions|profile2|orders|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_midcamp_training|profile2|orders|default';
  $field_group->group_name = 'group_midcamp_training';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'orders';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MidCamp Training Tickets',
    'weight' => '1',
    'children' => array(
      0 => 'field_midcamp_training',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'MidCamp Training Tickets',
      'instance_settings' => array(
        'classes' => 'group-midcamp-training field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_midcamp_training|profile2|orders|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('MidCamp Session Tickets');
  t('MidCamp Training Tickets');

  return $field_groups;
}

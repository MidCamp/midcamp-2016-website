<?php
/**
 * @file
 * midcamp_node_session.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function midcamp_node_session_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|session|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'field_tc',
      1 => 'field_description_organizers',
      2 => 'field_description_attendees',
      3 => 'field_prerequsites',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notindoc|node|session|form';
  $field_group->group_name = 'group_notindoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Not in DOC',
    'weight' => '10',
    'children' => array(
      0 => 'field_audience',
      1 => 'field_experience',
      2 => 'field_related_content',
      3 => 'field_session_video',
      4 => 'field_slides',
      5 => 'field_slides_url',
      6 => 'field_speakers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notindoc field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notindoc|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposal|node|session|form';
  $field_group->group_name = 'group_proposal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Proposal',
    'weight' => '1',
    'children' => array(
      0 => 'field_length',
      1 => 'field_track',
      2 => 'field_session_drupal_specific',
      3 => 'field_session_drupal_beginners',
      4 => 'field_session_whos_presenting',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_proposal|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scheduling|node|session|form';
  $field_group->group_name = 'group_scheduling';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling',
    'weight' => '16',
    'children' => array(),
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
  $export['group_scheduling|node|session|form'] = $field_group;

  return $export;
}

<?php
/**
 * @file
 * midcamp_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function midcamp_users_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_community|user|user|form';
  $field_group->group_name = 'group_community';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Community Info',
    'weight' => '53',
    'children' => array(
      0 => 'field_drupal_org_profile',
      1 => 'field_facebook_url',
      2 => 'field_google_plus_url',
      3 => 'field_joind_in_url',
      4 => 'field_personal_website',
      5 => 'field_twitter_handle',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-community field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_community|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Info',
    'weight' => '43',
    'children' => array(
      0 => 'field_about_me',
      1 => 'field_image',
      2 => 'field_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-personal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional|user|user|form';
  $field_group->group_name = 'group_professional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional Info',
    'weight' => '48',
    'children' => array(
      0 => 'field_company_website',
      1 => 'field_job_title',
      2 => 'field_organization',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-professional field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_professional|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|user|user|plaque';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'plaque';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media Links',
    'weight' => '6',
    'children' => array(
      0 => 'field_drupal_org_profile',
      1 => 'field_facebook_url',
      2 => 'field_google_plus_url',
      3 => 'field_personal_website',
      4 => 'field_twitter_handle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social Media Links',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-social-media field-group-div user--social-media user--headshot__social-media',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_social_media|user|user|plaque'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Community Info');
  t('Personal Info');
  t('Professional Info');
  t('Social Media Links');

  return $field_groups;
}

<?php
/**
 * @file
 * midcamp_profile2_type_orders.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function midcamp_profile2_type_orders_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-orders-field_eventbrite_order_url'
  $field_instances['profile2-orders-field_eventbrite_order_url'] = array(
    'bundle' => 'orders',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_eventbrite_order_url',
    'label' => 'View your MidCamp orders on Eventbrite',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'profile2-orders-field_midcamp_tickets'
  $field_instances['profile2-orders-field_midcamp_tickets'] = array(
    'bundle' => 'orders',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_midcamp_tickets',
    'label' => 'MidCamp tickets',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'profile2-orders-field_midcamp_training'
  $field_instances['profile2-orders-field_midcamp_training'] = array(
    'bundle' => 'orders',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_midcamp_training',
    'label' => 'MidCamp training',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('MidCamp tickets');
  t('MidCamp training');
  t('View your MidCamp orders on Eventbrite');

  return $field_instances;
}

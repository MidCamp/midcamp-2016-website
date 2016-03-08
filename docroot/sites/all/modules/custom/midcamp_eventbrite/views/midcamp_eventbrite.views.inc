<?php
/**
 * @file
 * Views hook for midcamp_eventbrite.
 */

/**
 * Implements hook_views_data().
 */
function midcamp_eventbrite_views_data() {
  // Basic table information.
  $data['eventbrite_ticket']['table']['group'] = t('Eventbrite Ticket');
  // Advertise this table as a possible base table.
  $data['eventbrite_ticket']['table']['base'] = array(
    'field' => 'ticket_id',
    'title' => t('Eventbrite tickets'),
    'help' => t('Listings of Eventbrite tickets.'),
    'weight' => 10,
  );
  $data['eventbrite_ticket']['ticket_id'] = array(
    'title' => t('Ticket ID'),
    'help' => t('The internal ID of the ticker.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'allow empty' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  $data['users']['table']['join']['eventbrite_ticket'] = array(
    'left_field' => 'uid',
    'field' => 'uid',
  );
  $data['eventbrite_ticket']['uid'] = array(
    'title' => t('User ID'),
    'help' => t('ID of user who created the URL redirect.'),
    'field' => array(
      'handler' => 'views_handler_field_user',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user_uid',
      'name field' => 'name',
    ),
    'filter' => array(
      'title' => t('Name'),
      'handler' => 'views_handler_filter_user_name',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'base field' => 'uid',
      'label' => t('user'),
    ),
  );
  $data['eventbrite_ticket']['email'] = array(
    'title' => t('E-mail'),
    'help' => t('Email address for user.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['eventbrite_ticket']['attendee_id'] = array(
    'title' => t('Attendee ID'),
    'help' => '',

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['eventbrite_ticket']['order_id'] = array(
    'title' => t('Order Id'),
    'help' => '',

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['eventbrite_ticket']['ticket_class_id'] = array(
    'title' => t('Ticket Class ID'),
    'help' => '',
    // @todo custom handler for mapping display.
    'field' => array(
      'handler' => 'eventbrite_views_handler_field_ticket',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  // created field
  $data['eventbrite_ticket']['created'] = array(
    'title' => t('Post date'),
    'help' => t('The date the content was posted.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  // changed field
  $data['eventbrite_ticket']['changed'] = array(
    'title' => t('Updated date'), // The item it appears as on the UI,
    'help' => t('The date the content was last updated.'), // The help that appears on the UI,
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  return $data;
}

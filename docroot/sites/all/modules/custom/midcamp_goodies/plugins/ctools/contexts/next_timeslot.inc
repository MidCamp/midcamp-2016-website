<?php

$plugin = array(
  'title' => t('Next Timeslot'),
  'description' => t('A context that determines the next timeslot.'),
  'context' => 'midcamp_context_create_next_timeslot',
  'defaults' => array(
    'today' => TRUE,
  ),
  'keyword' => 'next',
  'no ui' => FALSE,
  'context name' => 'midcamp_next_session',
  'convert list' => array(
    'id' => t('ID'),
    'title' => t('Title'),
  ),
  'convert' => 'midcamp_context_next_timeslot_convert',
  'edit form' => 'midcamp_context_next_timeslot_settings_form',
);

function midcamp_context_create_next_timeslot($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('next_timeslot');
  $context->plugin = 'next_timeslot';

  if ($empty) {
    return $context;
  }

  if ($data !== FALSE ) {
    // Support the array storage from the settings form but also handle direct input from arguments.
    $context->data = scamp_schedule_next_timeslot($conf['today']);
    return $context;
  }
}

function midcamp_context_next_timeslot_convert($context, $type) {
  if (empty($context->data->id)) {
    return;
  }

  switch ($type) {
    case 'id':
      return $context->data->id;
      break;
    case 'title':
      return $context->data->title;
      break;
  }
}

function midcamp_context_next_timeslot_settings_form($form, &$form_state) {
  $conf = &$form_state['conf'];

  $form['today'] = array(
    '#type' => 'checkbox',
    '#title' => t('Current day only'),
    '#default_value' => !empty($conf['today']),
  );

  return $form;
}

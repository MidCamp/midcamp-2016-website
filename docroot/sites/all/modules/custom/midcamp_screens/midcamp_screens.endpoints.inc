<?php

/**
 * @file
 * MidCamp Screens endpoint callbacks.
 */

/**
 * Endpoint for querying next sessions.
 */
function midcamp_screens_next_endpoint() {
  drupal_page_is_cacheable(FALSE);

  $timeslot = scamp_schedule_next_timeslot();

  $output = array();

  // Look up the assignments for that timeslot.
  if (!$timeslot) {
    return $output;
  }

  $tw = entity_metadata_wrapper('scamp', $timeslot);

  $time = $tw->field_date_time->value();
  $time = date('g:ia', strtotime($time['value'] . ' ' . $time['timezone_db'])) .
    '-' . date('g:ia', strtotime($time['value2'] . ' ' . $time['timezone_db']));
  $output['title'] = $time;

  $output['content'] = views_embed_view('timeslot_sessions', 'default', $timeslot->id);

  $output['timeslot'] = $timeslot;

  return $output;
}

/**
 * Endpoint for querying sponsors.
 */
function midcamp_screens_sponsors_endpoint() {
  drupal_page_is_cacheable(FALSE);

  $query = new EfqHelper('node');
  $query->propertyCondition('type', 'sponsor')
    ->propertyCondition('status', NODE_PUBLISHED);

  $output = array();

  foreach ($query->result() as $sponsor) {
    $w = entity_metadata_wrapper('node', $sponsor);
    $item = new stdClass();

    $item->title = $sponsor->title;

    $image = $w->field_image->value();
    $item->image = file_create_url($image['uri']);

    $level = $w->field_level->value();

    $output[$level->name][] = $item;
  }

  return $output;
}

<?php

/**
 * @file
 * DCFV Schedule administrative page callbacks.
 */

function scamp_schedule_admin_schedule($date = NULL) {

  $dates = scamp_schedule_get_dates();

  // Add navigation to each of the dates.
  $output['nav'] = array(
    '#theme' => 'item_list',
  );
  foreach ($dates as $key => $val) {
    $output['nav']['#items'][] = l($val, "admin/content/schedule/$key");
  }

  // Choose the first date, by default.
  if (!$date) {
    $keys = array_keys($dates);
    $date = reset($keys);
  }

  // Rooms.
  $q = new EfqHelper('scamp');
  $q->entityCondition('bundle', 'room');
  $rooms = $q->result();

  // Timeslots.
  $q = new EfqHelper('scamp');
  $q->entityCondition('bundle', 'timeslot')
    ->fieldOrderBy('field_date_time', 'value', 'ASC');
  $timeslots = $q->result();

  // Filter for the date.
  foreach ($timeslots as $key => $timeslot) {
    $ts_date = scamp_schedule_get_timeslot_date($timeslot);
    if ($date != scamp_schedule_get_timeslot_date($timeslot)) {
      unset($timeslots[$key]);
    }
  }

  // Assignments.
  $q = new EfqHelper('scamp');
  $q->entityCondition('bundle', 'assignment');
  $assignments = $q->result();

  // Put assignments into array so we can easily pull out by room and timeslot.
  $items = array();
  foreach ($assignments as $assignment) {
    $w = entity_metadata_wrapper('scamp', $assignment);
    $r = $w->field_room->value();
    $t = $w->field_timeslot->value();
    if ($r && $t) {
      $items[$t->id][$r->id] = $assignment;
    }
  }

  $header = $rows = array();

  $header[] = '';
  foreach ($rooms as $r) {
    $header[] = check_plain($r->title);
  }

  foreach ($timeslots as $t) {
    $row = array();
    $row[] = check_plain($t->title);

    foreach ($rooms as $r) {
      $cell = array();
      if (!empty($items[$t->id][$r->id])) {
        $list = array();
        $aw = entity_metadata_wrapper('scamp', $items[$t->id][$r->id]);
        foreach ($aw->field_sessions->value() as $session) {
          $list[] = l($session->title, 'node/' . $session->nid);
        }
        $cell[] = theme('item_list', array('items' => $list));
      }
      $cell[] = l(t('Add/Edit'), "admin/content/schedule/assign/{$r->id}/{$t->id}");
      $row[] = implode('', $cell);
    }

    $rows[] = $row;
  }

  $output['table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );

  return $output;
}

/**
 * Callback for assigning scheduling data.
 */
function scamp_schedule_admin_schedule_assign_form($form, &$form_state, $room, $timeslot) {

  $form['#room'] = $room;
  $form['#timeslot'] = $timeslot;
  $assignment = scamp_schedule_assignment_load($room, $timeslot, TRUE);

  field_attach_form('scamp', $assignment, $form, $form_state);
  $form['#assignment'] = $assignment;

  // Hide these, just because.
  $form['field_room']['#access'] = FALSE;
  $form['field_timeslot']['#access'] = FALSE;

  // Add buttons to save or cancel.
  $form['actions'] = array(
    '#type' => 'actions',
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Assign'),
  );

  $form['actions']['cancel'] = array(
    '#theme' => 'link',
    '#path' => 'admin/content/schedule',
    '#text' => t('Cancel'),
  );
  $form['actions']['cancel']['#options']['html'] = FALSE;
  $form['actions']['cancel']['#options']['attributes'] = array();

  return $form;
}

/**
 * Validation callback for scamp_schedule_admin_schedule_assign_form.
 */
function scamp_schedule_admin_schedule_assign_form_validate(&$form, &$form_state) {
  $assignment = $form['#assignment'];
  field_attach_form_validate('scamp', $assignment, $form, $form_state);
}

/**
 * Submit callback for scamp_schedule_admin_schedule_assign_form.
 */
function scamp_schedule_admin_schedule_assign_form_submit(&$form, &$form_state) {
  $assignment = $form['#assignment'];
  field_attach_submit('scamp', $assignment, $form, $form_state);
  entity_save('scamp', $assignment);
  drupal_set_message(t('Schedule assignment complete.'));
  $form_state['redirect'] = 'admin/content/schedule';
}

/**
 * AJAX callback for querying nodes to be assigned.
 */
function scamp_schedule_admin_schedule_assign_ajax($string) {

  $q = new EfqHelper('node');
  $q->propertyCondition('title', "%$string%", 'LIKE');
  $result = $q->result();

  $return = array();
  foreach ($result as $node) {
    $label = "{$node->title} ({$node->type}) [{$node->nid}]";
    $return[$label] = $label;
  }
  return $return;
}

/**
 * Callback for removing scheduling data.
 */
function scamp_schedule_admin_schedule_remove($room, $timeslot) {
  if ($node = scamp_schedule_assignment_load($room, $timeslot)) {
    scamp_schedule_remove($node);
  }
  drupal_goto('admin/content/schedule');
}

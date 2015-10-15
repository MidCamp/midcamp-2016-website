<?php

/**
 * @file
 * Theme functions for SCAMP Scheduling.
 */

/**
 * Default theme implementation for scamp_session_half.
 */
function theme_scamp_session_half($variables) {
  $start = $variables['start'];
  $end = $variables['end'];

  $output = '<div class="field scamp-session-room field-label-inline clearfix">';

  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label">' . t('Time') . ':&nbsp</div>';
  }

  $output .= '<div class="field-items">';
  $output .= '<div class="field-item even">' . "$start - $end" . '</div>';
  $output .= '</div>';

  $output .= '</div>';

  return $output;
}

/**
 * Default theme implementation for scamp_session_room.
 */
function theme_scamp_session_room($variables) {
  $room = $variables['room'];

  $output = '<div class="field scamp-session-room field-label-inline clearfix">';

  $output .= '<div class="field-label">' . t('Room') . ':&nbsp</div>';

  $output .= '<div class="field-items">';
  $output .= '<div class="field-item even">' . check_plain($room->title) . '</div>';
  $output .= '</div>';

  $output .= '</div>';

  return $output;
}

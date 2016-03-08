<?php
/**
 * @file
 * Contains \eventbrite_views_handler_field_ticket.
 */

class eventbrite_views_handler_field_ticket extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $ticket_class_id = $this->get_value($values);
    $ticket_classes = midcamp_eventbrite_get_ticket_classes();
    return array_key_exists($ticket_class_id, $ticket_classes) ?
      $ticket_classes[$ticket_class_id] : '';
  }
}

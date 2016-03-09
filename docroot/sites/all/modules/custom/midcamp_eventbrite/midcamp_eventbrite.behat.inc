<?php
/**
 * @file
 * Contains \EventbriteContext.
 */

use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalSubContextBase;
use Drupal\DrupalExtension\Context\DrupalSubContextInterface;

/**
 * Class EventbriteContext.
 */
class EventbriteContext extends DrupalSubContextBase implements DrupalSubContextInterface {

  /**
   * Truncates eventbrite_tickets.
   *
   * @AfterScenario @eventbrite
   */
  public function truncateEventbriteTickets() {
    db_truncate('eventbrite_ticket')->execute();
  }

  /**
   * Adds attendees to the eventbrite_ticket table.
   *
   * @Given attendees:
   *
   * Table in the format:
   * | email             | name           | attendee_id | order_id | ticket_name |
   * | auser@example.com | Dries Buytaert | 2           | 2        | sponsor     |
   *
   * where ticket_name needs to be a case-insensitive substring of a real
   * Eventbrite ticket name.
   */
  public function assertAttendees(TableNode $table) {
    $tickets = midcamp_eventbrite_get_ticket_classes();
    foreach ($table->getHash() as $hash) {
      $ticket_name = $hash['ticket_name'];
      $ticket_class_id = array_filter($tickets, function ($name) use ($ticket_name) {
        return strpos($name, $ticket_name) !== FALSE;
      });
      if (empty($ticket_class_id)) {
        throw new \Exception(sprintf('Ticket name %s not found.', $ticket_name));
      }
      $fields = array();
      $fields['ticket_class_id'] = key($ticket_class_id);;

      // If there is a Drupal user with the same email address populate uid.
      $email = $hash['email'];
      if ($user = user_load_by_mail($email)) {
        $fields['uid'] = $user->uid;
      }
      $fields['email'] = $email;
      $fields['attendee_id'] = $hash['attendee_id'];
      $fields['order_id'] = $hash['order_id'];
      $fields['name'] = $hash['name'];
      $fields['order_url'] = array_key_exists('order_url', $hash) ?
        $hash['order_url'] : '';

      try {
        db_insert('eventbrite_ticket')
          ->fields($fields)
          ->execute();
      }
      catch (Exception $e) {
        throw new \Exception($e->getMessage());
      }

    }

  }
}

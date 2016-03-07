<?php

/**
 * Class EventbriteApi
 */
class EventbriteApi {

  /**
   * Returns the OAuth token for the Eventbrite API.
   *
   * @return string
   */
  public static function oauthToken() {
    // This returns the personal OAuth token used.
    return variable_get('midcamp_eventbrite_oauth_token');
  }

  /**
   * Returns the current event ID on Eventbrite.
   *
   * @return string
   */
  public static function eventId() {
    return variable_get('midcamp_eventbrite_event_id');
  }

  public static function verifyWebhook() {
    if (isset($_SERVER['HTTP_X_EVENTBRITE_DELIVERY']) && isset($_SERVER['HTTP_X_EVENTBRITE_EVENT'])) {
      return $_SERVER['HTTP_X_EVENTBRITE_EVENT'];
    }

    return NULL;
  }

  public static function readWebhookBody() {
    $request_payload = file_get_contents("php://input");
    $request_payload = drupal_json_decode($request_payload);
    return $request_payload;
  }

  /**
   * Runs an API request.
   *
   * @param $method
   * @param $endpoint
   * @param array $query
   * @param array $data
   * @return array
   */
  public static function request($method, $endpoint, array $query = array(), array $data = array()) {
    $url_query = array(
      'token' => self::oauthToken()
    ) + $query;
    $url = url('https://www.eventbriteapi.com/v3' . $endpoint, array(
      'query' => array(
        $url_query,
      )
    ));
    $response = drupal_http_request($url, array(
      'method' => $method,
    ));

    $data = array();
    if (!isset($response->error)) {
      $data = drupal_json_decode($response->data);
    }

    return $data;
  }
}
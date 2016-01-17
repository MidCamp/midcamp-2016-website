<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Event info'),
  'description' => t('Displays event info from Eventbrite'),
  'category' => t('Eventbrite'),
);
/**
 * Renders the form.
 *
 * @param $subtype
 * @param $conf
 * @param $panel_args
 * @param $context
 * @return \stdClass
 */
function midcamp_eventbrite_event_info_content_type_render($subtype, $conf, $panel_args, &$context) {
  $ticket_classes = midcamp_eventbrite_get_ticket_classes();
  if (!empty($ticket_classes)) {
    $block = (object) array(
      'subject' => '',
      'content' => array(
        '#theme' => 'table',
        '#header' => array(t('Description'), t('Cost')),
        '#rows' => array()
      ),
      'delta' => 'midcamp_eventbrite_event_info'
    );

    foreach ($ticket_classes['ticket_classes'] as $ticket_class) {
      $block->content['#rows'][] = array(
        $ticket_class['name'],
        $ticket_class['cost']['display'],
      );
    }

    return $block;
  }
}
function midcamp_eventbrite_event_info_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" base form', array('@s' => $context->identifier));
}
function midcamp_eventbrite_event_info_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to override title
  // and stuff.
  return $form;
}
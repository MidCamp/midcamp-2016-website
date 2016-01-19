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
  $block = (object) array(
    'subject' => '',
    'content' => array(
      '#markup' => '<div style="width:100%; text-align:left;" ><iframe  src="//eventbrite.com/tickets-external?eid=19851789236&ref=etckt" frameborder="0" height="799" width="100%" vspace="0" hspace="0" marginheight="5" marginwidth="5" scrolling="auto" allowtransparency="true"></iframe><div style="font-family:Helvetica, Arial; font-size:10px; padding:5px 0 5px; margin:2px; width:100%; text-align:left;" ><a class="powered-by-eb" style="color: #dddddd; text-decoration: none;" target="_blank" href="http://www.eventbrite.com/r/etckt">Powered by Eventbrite</a></div></div>',
    ),
    'delta' => 'midcamp_eventbrite_event_info'
  );

  return $block;
}
function midcamp_eventbrite_event_info_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" base form', array('@s' => $context->identifier));
}
function midcamp_eventbrite_event_info_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to override title
  // and stuff.
  return $form;
}

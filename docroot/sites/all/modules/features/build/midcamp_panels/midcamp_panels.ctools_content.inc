<?php
/**
 * @file
 * midcamp_panels.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function midcamp_panels_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'home_dates';
  $content->admin_title = 'Home Dates';
  $content->admin_description = '';
  $content->category = 'Custom';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Planning Ahead</h2><p>MidCamp will return to Chicago in the Spring of 2016.</p><p>More details will be posted here as they become available.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['home_dates'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'home_mailchimp';
  $content->admin_title = 'Home Mailchimp';
  $content->admin_description = '';
  $content->category = 'Custom';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div id="mc_embed_signup"><form action="//midcamp.us3.list-manage.com/subscribe/post?u=c8e6dc38970348f0d8c1e7a16&amp;id=12c897b018" class="validate" id="mc-embedded-subscribe-form" method="post" name="mc-embedded-subscribe-form" novalidate="" target="_blank"><div id="mc_embed_signup_scroll"><h2>Stay up to date with our<br />Email Newsletter</h2><div class="mc-field-group"><label for="mce-EMAIL">Email Address <span class="asterisk">*</span> </label> <input class="required email" id="mce-EMAIL" name="EMAIL" type="email" value="" /></div><div class="mc-field-group"><label for="mce-FNAME">First Name </label> <input id="mce-FNAME" name="FNAME" type="text" value="" /></div><div class="mc-field-group"><label for="mce-LNAME">Last Name </label> <input id="mce-LNAME" name="LNAME" type="text" value="" /></div><div class="clear" id="mce-responses"><div class="response" id="mce-error-response" style="display:none">&nbsp;</div><div class="response" id="mce-success-response" style="display:none">&nbsp;</div></div><!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups--><div style="position: absolute; left: -5000px;"><input name="b_c8e6dc38970348f0d8c1e7a16_12c897b018" tabindex="-1" type="text" value="" /></div><div class="indicates-required"><span class="asterisk">*</span> indicates required</div><div class="clear"><input class="button" id="mc-embedded-subscribe" name="subscribe" type="submit" value="Subscribe" /></div></div></form></div><script type=\'text/javascript\' src=\'//s3.amazonaws.com/downloads.mailchimp.com/js/mc-validate.js\'></script><script type=\'text/javascript\'>(function($) {window.fnames = new Array(); window.ftypes = new Array();fnames[0]=\'EMAIL\';ftypes[0]=\'email\';fnames[1]=\'FNAME\';ftypes[1]=\'text\';fnames[2]=\'LNAME\';ftypes[2]=\'text\';}(jQuery));var $mcj = jQuery.noConflict(true);</script><!--End mc_embed_signup-->',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['home_mailchimp'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'home_sponsors';
  $content->admin_title = 'Home Sponsors';
  $content->admin_description = '';
  $content->category = 'Custom';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2><a href="/become-a-sponsor">Sponsor MidCamp 2016</a></h2><p>Grab the opportunity to help us put on MidCamp 2016 by becoming a Sponsor.</p><p><a class="button" href="/become-a-sponsor">Learn more</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['home_sponsors'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'sponsor_content';
  $content->admin_title = 'Become a Sponsor Content';
  $content->admin_description = '';
  $content->category = 'Custom';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Become a Sponsor for MidCamp 2016</h2><p><meta charset="utf-8"></p><p>MidCamp 2015 had 300 attendees with training, sprints, and almost 50 sessions over 4 days in the heart of Chicago. &nbsp;Our camp is quickly becoming one of the premier Drupal events in the United States.</p><p>With MidCamp 2016, we are expecting growth in attendance, and the same high-caliber involvement and speaking engagements from Drupal focused agencies and community leaders. &nbsp;Sponsoring MidCamp is a great way to promote your company, organization, or product and to show your support for Drupal, and the Midwest Drupal community.</p><p>We have a wide variety of sponsor packages designed to meet the needs of companies and organizations both large and small. Contact us to get started today!</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['sponsor_content'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'sponsors_become_a_sponsor';
  $content->admin_title = 'Sponsors Become a Sponsor';
  $content->admin_description = '';
  $content->category = 'Custom';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2><a href="/become-a-sponsor">Become a Sponsor</a></h2>
<p>Want to add your name to this list of amazing businesses and organizations? Find out how to <strong><a href="/become-a-sponsor">be a sponsor</a></strong>.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['sponsors_become_a_sponsor'] = $content;

  return $export;
}

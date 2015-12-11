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
    'body' => '<h2>Save the Date for<br>MidCamp 2016</h2><div class="event-wrapper" itemscope="" itemtype="http://schema.org/Event"><div class="event-date" content="2016-03-17T09:00" itemprop="startDate">March 17th - 20th, 2016</div><div class="event-title" itemprop="name"><strong>MidCamp 2016 - Midwest Drupal Camp</strong></div><div class="event-venue" itemprop="location" itemscope="" itemtype="http://schema.org/Place"><span itemprop="name">UIC Student Center West</span><div class="address" itemprop="address" itemscope="" itemtype="http://schema.org/PostalAddress"><span itemprop="streetAddress">828 S. Wolcott Ave.</span><br /><span itemprop="addressLocality">Chicago</span>, <span itemprop="addressRegion">IL</span> <span itemprop="postalCode">60612</span></div></div></div>',
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
    'body' => '<div style="float:right;width:300px;margin:0 0 20px 20px;padding:0 20px 20px 20px; background:#EDEDED;border-radius:10px;"><h3><a href="mailto:sponsors@midcamp.org">Contact Us</a></h3><p>Please <a href="mailto:sponsors@midcamp.org">contact us</a> if you are interested in sponsoring MidCamp 2016</p><p><a href="/sites/all/themes/sitetheme/assets/MidCamp-2016-Sponsor-Prospectus.pdf">Download the MidCamp 2016 Prospectus</a></p></div><h2>Become a Sponsor for MidCamp 2016</h2><p>March 17th - 20th, 2016, UIC Student Center West</p><p>MidCamp is an annual event held in Chicago that brings together people who use, develop, design, and support the Web&rsquo;s leading content management platform, Drupal. Organized by volunteers from the regional Drupal community, MidCamp features curated sessions and panel conversations by internationally-renowned Drupal experts. MidCamp offers attendees the opportunity to increase their Drupal knowledge through networking, contribution sprints, training, and more.</p><p>MidCamp is quickly becoming one of the leading Drupal gatherings for people all over the United States and beyond. MidCamp 2015 provided 300 attendees with training, sprints, and almost 50 sessions over 4 days in the heart of Chicago, and our 2016 event will be even bigger and better.</p><p>MidCamp is an event for anyone who uses Drupal or is responsible for designing, building, developing, and supporting Drupal in any capacity. It is a place where designers, developers, and Drupal users can brush shoulders with Drupal service providers, hosting vendors, and other members of the broader Web development community.</p><p>Sponsoring MidCamp is a great way to promote your company, organization, or product and to show your support for Drupal and the Midwest Drupal community. It also is a great opportunity to connect with potential customers and recruit talent.</p><p>We have a wide variety of sponsor packages designed to meet the needs of companies and organizations both large and small. <u>Contact us to get started today</u>!</p><h3>Platinum Sponsorship</h3><ul><li>$7,500.71</li><li>Everything from Gold level plus:</li><li>Welcome attendees before keynote</li><li>Keynote room naming</li><li>One on-site sponsorship add-on</li><li>Training day session</li><li>Contact us to customize your package!</li></ul><h3>Gold Sponsorship</h3><ul><li>$3,000.71</li><li>Everything from Silver level plus:</li><li>Primary logo placement on website</li><li>Exposure in camp website news</li><li>Introduction during keynote address</li><li>Logo placement in keynote address</li><li>List of opted-in attendee names</li><li>Session room naming (limited number)</li><li>6 tickets</li></ul><h3>Silver Sponsorship</h3><ul><li>$1,871.71</li><li>Everything from Bronze level plus:</li><li>Secondary logo placement on website</li><li>Logo in printed program</li><li>3 tickets</li></ul><h3>Bronze Sponsorship</h3><ul><li>$500.71</li><li>Logo on website</li><li>Company description on website</li><li>Job Board listing</li><li>Social media promotion</li><li>2 tickets</li></ul><h3>Individual Sponsorship</h3><ul><li>$100.71</li><li>Name on website</li><li>1 ticket</li></ul><h2>On-Site Sponsorship Options</h2><p>MidCamp 2016 will also have several additional On-Site Sponsorships available:</p><h4>Live Caption Sponsors</h4><p>Sponsor the daily live captioning of a session room, and help us make Drupal Camps more inclusive!</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Exposure on camp website news</li><li>Social media promotion</li></ul><h4>Coffee Sponsors</h4><p>Drupalers like coffee. Earn the gratitude of our attendees by having your company name associated with the liquid refueling station!</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Exposure on camp website news</li><li>Social media promotion</li><li>Signage on coffee tables</li></ul><h4>Breakfast Sponsors</h4><p>Early risers, eager learners, and keynote attendees will love your sponsorship of breakfast items!</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Exposure on camp website news</li><li>Social media promotion</li><li>Signage on buffet tables</li></ul><h4>Lunch Sponsors</h4><p>What is better than breakfast and dinner? Lunch! The perfect opportunity to get your name in front of all of the attendees is to reach them at lunch.</p><ul><li>$1.871.71</li><li>Company description and logo on website</li><li>Exposure on camp website news</li><li>Social media promotion</li><li>Signage on buffet tables</li></ul><h4>Contribution Sprint Sponsors</h4><p>MidCamp sprints are well attended by community leaders, newcomers, and everyone in between. Your sponsorship will help us provide space for giving back to the Drupal project and community.</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Signage in sprint space</li></ul><h4>Program Sponsor</h4><p>Distributed to every MidCamp attendee, sponsorship of the printed event program is a great investment.</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Prominent logo placement on the program</li></ul><h4>Training Day Sponsor</h4><p>Training Day is a smaller, more focused event targeted at attendees looking for more in-depth Drupal training.</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Exposure in camp website news</li><li>Social media promotion</li><li>Exclusive signage at the venue</li></ul><h4>Evening Social Sponsor</h4><p>Earn the goodwill of our attendees by sponsoring our evening social events!</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Exposure in camp website news</li><li>Social media promotion</li></ul><h4>Job Board Sponsor</h4><p>Get your name in front of Drupal talent by sponsoring the job board on <a href="http://www.midcamp.org">midcamp.org</a>.</p><ul><li>$1,871.71</li><li>Company description and logo on website</li><li>Exposure in camp website news</li><li>Social media promotion</li></ul><h4>Training Day Coffee Sponsor</h4><p>Help keep our Training Day attendees focused and energized by sponsoring the coffee table.</p><ul><li>$500.71</li><li>Company description and logo on website</li><li>Signage on coffee tables</li></ul><h4>Table at Venue</h4><p>If you&rsquo;d like to have a dedicated table at MidCamp, this add-on sponsorship is available with any other package.</p><ul><li>$500.71</li><li>6&rsquo; x 30&rdquo; skirted table</li></ul><h4>The Expert Is In Sponsor</h4><p>New for MidCamp 2016 is a special &ldquo;The Expert Is In&rdquo; booth where sponsor-provided experts answer questions about their products and services, Drupal, and life in general. This sponsorship includes a dedicated 2-hour timeslot as well as signage and publicity.</p><ul><li>$500.71</li><li>2-hour scheduled time slot</li><li>Signage at booth</li></ul><h2>Custom and In-Kind Sponsorships</h2><p>In addition to these packages, custom and in-kind sponsorship opportunities are available. Do you have a product, service that you would like to offer MidCamp attendees? <a href="mailto:sponsors@midcamp.org">Just let us know</a> and we will work with you to customize a sponsorship.</p><p>Why do the prices for our sponsor packages end in .71? It helps our fiscal agent, the Drupal Association, make sure that your funds get directed to the right place. It&rsquo;s also our tongue-in-cheek tribute to one of Chicago&rsquo;s most momentous events, the Great Chicago Fire of 1871.</p>',
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
    'body' => '<h2><a href="/become-a-sponsor">Become a Sponsor</a></h2><p>Want to add your name to this list of amazing businesses and organizations? Find out how to <strong><a href="/become-a-sponsor">become a sponsor</a></strong>.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['sponsors_become_a_sponsor'] = $content;

  return $export;
}

#!/bin/bash

cd docroot
chown -R www-data sites/default
echo "\$conf['midcamp_eventbrite_oauth_token'] = getenv('TRAVIS_EVENTBRITE_OAUTH');" >> sites/default/settings.php
echo "\$conf['midcamp_eventbrite_event_id'] = getenv('TRAVIS_EVENTBRITE_EVENT_ID');" >> sites/default/settings.php
$BASEDIR/ci/vendor/bin/drush si -y midcamp --db-url=mysql://root@localhost/drupal

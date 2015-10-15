#!/bin/bash

cd docroot
chown -R www-data sites/default
$BASEDIR/ci/vendor/bin/drush si -y midcamp --db-url=mysql://root@localhost/drupal

#!/bin/bash

cd docroot
$BASEDIR/ci/vendor/bin/drush si -y midcamp --db-url=mysql://root@localhost/drupal

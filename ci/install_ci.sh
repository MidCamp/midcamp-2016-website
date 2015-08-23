#!/bin/bash

cd $BASEDIR/ci
composer install

ln -s $BASEDIR/ci/vendor/drush/drush /usr/bin/drush

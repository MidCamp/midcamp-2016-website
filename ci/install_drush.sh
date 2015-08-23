#!/bin/bash

cd $BASEDIR/ci
composer install

alias drush='$BASEDIR/ci/vendor/drush/drush'

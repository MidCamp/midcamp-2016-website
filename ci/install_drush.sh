#!/bin/bash

cd $BASEDIR/ci
composer install

alias drush="$BASEDIR/vendor/drush/drush"

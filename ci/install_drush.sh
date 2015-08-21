#!/bin/bash

cd $BASEDIR/ci
composer install

alias drush="$BASEDIR/ci/vendor/bin/drush"

#!/bin/bash

cd $BASEDIR/ci
mkdir bin
composer install

ln -s $BASEDIR/ci/vendor/drush/drush $BASEDIR/ci/bin/drush
ln -s $BASEDIR/ci/vendor/phploc/phploc $BASEDIR/ci/bin/phploc

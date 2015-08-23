#!/bin/bash

cd $BASEDIR/ci
mkdir bin
composer install

export PATH="$BASEDIR/ci/bin:$PATH"
ln -s $BASEDIR/ci/vendor/drush/drush $BASEDIR/ci/bin/drush
ln -s $BASEDIR/ci/vendor/phploc/phploc $BASEDIR/ci/bin/phploc

#!/bin/bash

cd $BASEDIR/tests
composer install --no-interaction --prefer-source

mkdir failures
sed 's|changethisto.local|travis.midcamp.dev|' <default-behat.yml >behat.yml

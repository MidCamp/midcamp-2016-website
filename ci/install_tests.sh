#!/bin/bash

cd $BASEDIR/tests
composer install

sed 's|changethisto.local|travis.midcamp.dev|' <default-behat.yml >behat.yml

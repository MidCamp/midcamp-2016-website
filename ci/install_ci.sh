#!/bin/bash

cd $BASEDIR/ci
mkdir bin
composer install --no-interaction --prefer-source

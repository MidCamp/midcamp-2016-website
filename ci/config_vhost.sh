#!/bin/bash

set -ev

CONFIG_NAME=$1
DOCROOT=$2
TEMPLATE=$3

sed 's|{{DOCROOT}}|${DOCROOT}|' ${TEMPLATE} > /etc/apache2/sites-available/${CONFIG_NAME}.conf
a2ensite $CONFIG_NAME
service apache2 restart

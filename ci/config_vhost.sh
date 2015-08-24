#!/bin/bash

CONFIG_NAME=$1
DOCROOT=$2

sed 's|{{DOCROOT}}|${DOCROOT}/docroot|' ${BASEDIR}/ci/apache/vhost.conf > /etc/apache2/sites-available/${CONFIG_NAME}.conf
a2ensite $CONFIG_NAME
service apache2 restart

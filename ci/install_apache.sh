#!/bin/bash

export BASEDIR=${PWD}

apt-get update > /dev/null
apt-get install -y --force-yes apache2 libapache2-mod-php5 php5-curl php5-mysql

a2dissite 000-default
a2enmod rewrite

# Install site.
sed 's|!DOCROOT!|${BASEDIR}/docroot|' < ${BASEDIR}/ci/apache/vhost.conf > /etc/apache2/sites-available/midcamp.conf
a2ensite midcamp

service apache2 restart

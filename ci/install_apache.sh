#!/bin/bash

# Install Apache.
apt-get update > /dev/null
apt-get install -y --force-yes apache2 libapache2-mod-php5 php5-curl php5-mysql
a2dissite 000-default
a2enmod rewrite
service apache2 restart

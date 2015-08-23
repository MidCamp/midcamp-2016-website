#!/bin/bash

sed 's|!DOCROOT!|$BASEDIR/docroot|' <$BASEDIR/ci/apache/vhost.conf >/etc/apache2/sites-available/midcamp.conf
a2ensite midcamp
service apache2 restart

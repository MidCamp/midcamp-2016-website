#!/bin/bash

wget http://selenium-release.storage.googleapis.com/2.47/selenium-server-standalone-2.47.1.jar
touch /var/log/selenium/output.log
touch /var/log/selenium/error.log
java -jar selenium-server-standalone-2.47.1.jar -port 4444 -trustAllSSLCertificates > /var/log/selenium/output.log 2> /var/log/selenium/error.log &

sleep 5

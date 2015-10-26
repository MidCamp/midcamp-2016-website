#!/bin/bash

wget http://selenium-release.storage.googleapis.com/2.47/selenium-server-standalone-2.47.1.jar
touch ./selenium_output.log
touch ./selenium_error.log
java -jar selenium-server-standalone-2.47.1.jar -port 4444 -trustAllSSLCertificates >  ./selenium_output.log 2> ./selenium_error.log &

sleep 5

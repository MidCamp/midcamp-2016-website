#!/bin/bash

wget http://selenium-release.storage.googleapis.com/2.47/selenium-server-standalone-2.47.1.jar
java -jar selenium-server-standalone-2.47.1.jar > /dev/null &
sleep 5

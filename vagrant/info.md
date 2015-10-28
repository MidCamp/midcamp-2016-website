# MidCamp 2016 Local Development

## Install Vagrant

Download and install vagrant from https://www.vagrantup.com/downloads.html.

Install vagrant plugins:

```
vagrant plugin install vagrant-bindfs
vagrant plugin install vagrant-hostsupdater
```

## Download Vagrant Box

The box is a generic LAMP installation, intended to be reusable across mutliple
projects. I recommend downloading the file and adding the local file.

https://www.dropbox.com/sh/8mrohws8twvpl31/AABbzjEb-3kwCm6gPQjZlYcja/boxes/lamp.box?dl=1

`vagrant box add lamp /path/to/lamp.box`

## Project Setup

Clone the repository into a directory on the host where you'd like to work.

```
git clone git@github.com:MidCamp/midcamp-website.git
cd midcamp-website
git checkout -b develop origin/develop
```

I recommend pointing your IDE to the folder containing the repository, ie the
"midcamp-website" folder.

## First Time Vagrant Up

Review the Vagrantfile in the project root. It should be all set, be sure to
adjust the IP as to not conflict with other VMs you may be running.

From the folder containing the Vagrantfile, start the VM. No vagrant init is
needed, since we're using the included Vagrantfile.

`vagrant up`

This will take a few moments to generate the new VM. You will also be prompted
for your password (host machine) in order to set entries in the hosts file and
attach the NFS share.

You'll see a warning stating that bindfs is not installed, ignore.

Once the VM is done running, SSH into it and switch to the root user.

```
vagrant ssh
sudo su
```

Then run the MidCamp-specific configuration script. This will only need to be
run once, unless you recreate the VM.

```
cd /vagrant
./guest_config && source ~/.bashrc
```

This will take a few moments to complete, as it prepares the VM by setting up
MySQL users, installing the site, installing the test suite, and a few other
things. Once complete, you're ready to develop.

## Notes

* When logging into the VM, be sure to run the "sudo su" command. Most things
  you'll want to do on the VM require you be act as the root user.

* Perform all drush operations from the VM's command line.

* Perform all test runs from the VM's command line.

* Perform all git operations from the host machine's command line.

* I usually operate with 3 terminal tabs open. One in the VM's test suite, one
  in the VM's docroot, and one in the host machine's project repositoty.

* Selenium, Firefox, and Xvfb are installed and ready to run headfull tests.

* Xdebug is available for PHP debugging. Use PhpStorm's "zero configuration
  debugging" with the IDE key of "vagrant".

  https://confluence.jetbrains.com/display/PhpStorm/Zero-configuration+Web+Application+Debugging+with+Xdebug+and+PhpStorm

  Other IDEs with remote debugging capability should work as well.

* The VM has a "dashboard" set up. Navigate to http://local.midcamp.org:8081/
  and you'll find the following tools:

  * Opcache GUI - review and manage PHP opcache

  * PHP Info - review PHP configuration

  * PhpMyAdmin - database management

  * XHProf - PHP profiling tool

* To use XHProf, enable the devel module in the MidCamp site and enter these
  configurations. I recommend only enabling XHProf when actively performing
  profiling analysis.

  * Enable profiling of all page views and drush requests: Yes

  * xhprof directory: /var/www/html/xhprof

  * XHProf URL: http://local.midcamp.org:8081/xhprof/xhprof_html

* A few helpful aliases are configured. Execute the following commands to
  perform these operations:

  * "midcamp" - Switch to the site's docroot.

  * "tests" - Switch to the test suite.

  * "freset" - Forcefully revert features, only from within the site's docroot.

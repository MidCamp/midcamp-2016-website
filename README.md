[![Build Status](https://travis-ci.org/MidCamp/midcamp-website.svg?branch=develop)](https://travis-ci.org/MidCamp/midcamp-website)

MidCamp
=======
Repository for the 2016 MidCamp Drupal site.

DEV REQUIREMENTS
----------------
MidCamp is based on the Drupal platform, and is built to run on top of PHP 5.5. To install and run tests, you will need:

* Composer [Install Composer](https://getcomposer.org/doc/00-intro.md)
* Drush [GitHub repo](https://github.com/drush-ops/drush)

INSTALLATION VIA VAGRANT
------------------------
The vagrant install will take care of the site install and test setup. See [README.md](https://github.com/MidCamp/midcamp-website/blob/develop/vagrant/README.md) in vagrant folder.

INSTALLATION FOR LOCAL INSTALL
------------------------------
You can use `drush si` or go through the UI install wizard. We assume the database is created and is accessible. Replace '{...}' with appropriate values.

```
drush si
  midcamp
  --db-url="mysql://{dbuser}:{dbpass}@{host}/{database}"
  --account-name={admin}
  --account-pass={correct horse battery staple}
  --account-mail={admin@example.com}
  --site-name=MidCamp
  --site-mail={info@example.com}
  --yes
```

TEST SETUP
----------
In the /tests folders, run `composer install` to install all the dependencies. Then copy the file `default-behat.yml` to `behat.yml`. In `behat.yml`, edit the base_url value to the url of your local install.

CONFIGURATION
-------------

More Information
----------------

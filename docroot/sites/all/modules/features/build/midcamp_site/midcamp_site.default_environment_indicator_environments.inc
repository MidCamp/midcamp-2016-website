<?php
/**
 * @file
 * midcamp_site.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function midcamp_site_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'default_environment';
  $environment->name = 'Default environment';
  $environment->regexurl = '.*';
  $environment->settings = array(
    'color' => '#000000',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['default_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'development';
  $environment->name = 'Development';
  $environment->regexurl = 'dev.midcamp.org';
  $environment->settings = array(
    'color' => '#aa3333',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['development'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'production';
  $environment->name = 'Production';
  $environment->regexurl = '2016.midcamp.org';
  $environment->settings = array(
    'color' => '#33aa33',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['production'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'staging';
  $environment->name = 'Staging';
  $environment->regexurl = 'stage.midcamp.org';
  $environment->settings = array(
    'color' => '#ffa500',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['staging'] = $environment;

  return $export;
}

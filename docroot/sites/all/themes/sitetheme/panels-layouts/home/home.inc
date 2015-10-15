<?php

/**
 * Implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title'       => t('Home'),
  'category'    => t('Custom'),
  'icon'        => 'icon.png',
  'theme'       => 'home',

  'regions'     => array(
    'feature_1'   => t('Feature 1'),
    'feature_2'      => t('Feature 2'),
  ),
);

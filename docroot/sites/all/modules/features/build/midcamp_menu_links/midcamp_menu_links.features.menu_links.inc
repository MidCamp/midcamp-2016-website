<?php
/**
 * @file
 * midcamp_menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function midcamp_menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_2015-midcamp:http://2015.midcamp.org.
  $menu_links['main-menu_2015-midcamp:http://2015.midcamp.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://2015.midcamp.org',
    'router_path' => '',
    'link_title' => '2015 MidCamp',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_2015-midcamp:http://2015.midcamp.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_camp:node/14',
  );
  // Exported menu link: main-menu_community:community.
  $menu_links['main-menu_community:community'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community',
    'router_path' => 'community',
    'link_title' => 'Community',
    'options' => array(
      'identifier' => 'main-menu_community:community',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_camp:node/14',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2015 MidCamp');
  t('Community');

  return $menu_links;
}

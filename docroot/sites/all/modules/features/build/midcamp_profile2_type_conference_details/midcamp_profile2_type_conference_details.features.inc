<?php
/**
 * @file
 * midcamp_profile2_type_conference_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midcamp_profile2_type_conference_details_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function midcamp_profile2_type_conference_details_default_profile2_type() {
  $items = array();
  $items['conference_details'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "conference_details",
    "label" : "Conference Details",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}

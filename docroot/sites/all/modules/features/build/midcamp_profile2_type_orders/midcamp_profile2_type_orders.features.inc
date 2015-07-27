<?php
/**
 * @file
 * midcamp_profile2_type_orders.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midcamp_profile2_type_orders_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function midcamp_profile2_type_orders_default_profile2_type() {
  $items = array();
  $items['orders'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "orders",
    "label" : "Orders",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}

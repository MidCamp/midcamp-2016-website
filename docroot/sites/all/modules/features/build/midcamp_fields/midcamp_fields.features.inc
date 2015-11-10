<?php
/**
 * @file
 * midcamp_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midcamp_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

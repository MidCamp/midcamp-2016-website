<?php
/**
 * @file
 * midcamp_og_membership_type_og_membership_type_og_membership_type_default.features.inc
 */

/**
 * Implements hook_default_og_membership_type().
 */
function midcamp_og_membership_type_og_membership_type_og_membership_type_default_default_og_membership_type() {
  $items = array();
  $items['og_membership_type_default'] = entity_import('og_membership_type', '{
    "name" : "og_membership_type_default",
    "description" : "Default",
    "language" : ""
  }');
  return $items;
}

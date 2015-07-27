<?php
/**
 * @file
 * Contains \midcamp_ctools_handler_smarttimeslot.
 */

class midcamp_ctools_handler_smarttimeslot extends views_handler_field_entity {

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $node = $this->get_value($values);
    _scamp_schedule_node_half($node);
    if (isset($node->content)) {
      $value = $node->content;
      $value['scamp_schedule_half']['#label_hidden'] = TRUE;
      return $value;
    }
  }
}

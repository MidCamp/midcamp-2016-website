<?php
/**
 * @file
 * Sponsor related ctool content types.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Jump menu to sponsor jobs'),
  'category' => t('MidCamp'),
  'content_types' => array('sponsor_jobs'),
  'edit form' => 'midcamp_ctools_sponsor_jobs_edit_form',
  'render callback' => 'midcamp_ctools_sponsor_jobs_jump_render',
);

function midcamp_ctools_sponsor_jobs_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['jobs_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Jobs path'),
    '#description' => t('Path to jobs page to prepend to sponsor nid.'),
    '#size' => 50,
    '#default_value' => !empty($conf['jobs_path']) ? $conf['jobs_path'] : 'jobs',
  );
  return $form;
}

function midcamp_ctools_sponsor_jobs_edit_form_submit($form, &$form_state) {
  foreach (array('jobs_path') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}


function midcamp_ctools_sponsor_jobs_jump_render($subtype, $conf, $args, $context) {
  $form = drupal_get_form('sponsor_jump', $conf, $args);
  $block = new stdClass();
  $block->title = '';
  $block->content = drupal_render($form);
  return $block;
}

function sponsor_jump($form, $form_state, $conf, $args) {
  ctools_include('jump-menu');
  // Select options.
  $select = array();
  $path = array_key_exists('jobs_path', $conf) ? $conf['jobs_path'] : 'jobs';
  // All companies.
  $select[url($path)] = t('All companies');

  // Get list of Sponsors.
  $entity_type = 'node';
  $efq = new EntityFieldQuery();
  $efq->entityCondition('entity_type', $entity_type)
    ->entityCondition('bundle', 'sponsor')
    ->propertyCondition('status', 1);
  $result = $efq->execute();
  if (!empty($result) && array_key_exists($entity_type, $result)) {
    $options = array(
      'title' => t('Show jobs from'),
      'hide' => FALSE,
    );
    $sponsors = entity_load($entity_type, array_keys($result[$entity_type]));
    $default_nid = !empty($args) ? reset($args) : FALSE;
    foreach ($sponsors as $nid => $sponsor) {
      $jump_path = url("$path/$nid");
      $select[$jump_path] = $sponsor->title;
      if ($default_nid && $default_nid == $nid) {
        $options['default_value'] = $jump_path;
      }
    }
  }

  return ctools_jump_menu($form, $form_state, $select, $options);

}

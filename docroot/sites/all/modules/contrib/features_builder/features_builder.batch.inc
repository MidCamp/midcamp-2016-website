<?php

/**
 * @file
 * Batch operations for Features Builder.
 */

/**
 * Batch operation to create Features.
 */
function features_builder_build_batch($data, $temp_dir, &$context) {

  if (empty($context['sandbox'])) {
    $context['sandbox']['data'] = $data;
    $context['sandbox']['total'] = count($context['sandbox']['data']);
    $context['results']['temp_dir'] = $temp_dir;
  }

  $keys = array_keys($context['sandbox']['data']);
  $count = 0;

  while ($count++ < 10 && count($keys)) {
    // Pluck the next feature from the list to create.
    $feature = array_shift($keys);

    // Build it.
    _features_builder_build($feature, $context['sandbox']['data'][$feature], $temp_dir);
    unset($context['sandbox']['data'][$feature]);
  }

  $context['message'] = t('Building feature @feature', array('@feature' =>  $feature));
  $context['finished'] = 1 - (count($context['sandbox']['data']) / $context['sandbox']['total']);
}

/**
 * Batch operation to move built Features into place.
 */
function features_builder_move_batch($data, $temp_dir, &$context) {

  if (empty($context['sandbox'])) {
    $context['sandbox']['data'] = $data;
    $context['sandbox']['total'] = count($context['sandbox']['data']);
  }

  // Pluck the next feature from the list to move.
  $keys = array_keys($context['sandbox']['data']);
  $count = 0;

  while ($count++ < 10 && count($keys)) {
    $feature = array_shift($keys);

    // Move it.
    _features_builder_move($feature, $context['sandbox']['data'][$feature], $temp_dir);

    unset($context['sandbox']['data'][$feature]);
  }

  $context['message'] = t('Moving feature @feature', array('@feature' =>  $feature));
  $context['finished'] = 1 - (count($context['sandbox']['data']) / $context['sandbox']['total']);
}

/**
 * Batch operation to enable built Features.
 */
function features_builder_enable_batch($data, &$context) {

  if (empty($context['sandbox'])) {
    $context['sandbox']['data'] = $data;
    $context['sandbox']['total'] = count($context['sandbox']['data']);
  }

  // Pluck the next feature from the list to move.
  $keys = array_keys($context['sandbox']['data']);
  $feature = reset($keys);

  $builder = features_builder_get_class($context['sandbox']['data'][$feature], $feature);
  module_enable(array($builder->moduleName));

  unset($context['sandbox']['data'][$feature]);
  $context['message'] = t('Enabling feature @feature', array('@feature' =>  $feature));
  $context['finished'] = 1 - (count($context['sandbox']['data']) / $context['sandbox']['total']);
}

function features_builder_batch_finalize($success, $results, $operations) {

  // Clean up temp space.
  if (!empty($results['temp_dir'])) {
    if (is_readable($results['temp_dir'])) {
      file_unmanaged_delete_recursive($results['temp_dir']);
    }
  }

  drupal_set_message(t('Features build complete.'));
}

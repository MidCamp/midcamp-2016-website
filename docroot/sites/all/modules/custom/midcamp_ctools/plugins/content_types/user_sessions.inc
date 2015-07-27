<?php
/**
 * @file
 * Ctools plugin to display users sessions.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('User sessions'),
  'icon' => 'icon_user.png',
  'description' => t("A list of the user's sessions."),
  'required context' => new ctools_context_required(t('User'), 'user'),
  'category' => t('Sessions'),
);

/**
 * User session content type render callback.
 *
 * @param $subtype
 * @param $conf
 * @param $panel_args
 * @param $context
 * @return null|stdClass
 */
function midcamp_ctools_user_sessions_content_type_render($subtype, $conf, $panel_args, $context) {
  global $user;

  // First make sure that we have a user context, and access to view profiles.
  if (empty($context->data) || !user_access('access user profiles')) {
    return NULL;
  }

  $account = clone $context->data;

  $name = t('My');
  if ($account->uid != $user->uid) {
    $name = $account->name . "'s";
  }

  $flag_accepted = flag_get_flag('accepted');
  $select = db_select('node', 'n');
  $select->join('flagging', 'f', 'n.nid = f.entity_id');
  $select->addField('n', 'nid');
  $select->addField('n', 'title');
  $select->addField('n', 'uid');
  $select->condition('f.fid', $flag_accepted->fid);
  $select->condition('n.status', 1);
  $select->condition('n.uid', $account->uid);
  $results = $select->execute()->fetchAllKeyed(0);

  $build = array();
  if (!empty($results)) {
    $sessions = entity_load('node', array_keys($results));
    $build = node_view_multiple($sessions, 'teaser');
  }

  $block = new stdClass();
  $block->title = format_plural(count($results), '@name session', '@name sessions', array('@name' => $name));
  $block->content = $build;
  return $block;
}

/**
 * Edit form callback for panel pane.
 *
 * @param $subtype
 * @param $conf
 * @param $contexts
 * @return stdClass
 */
function midcamp_ctools_user_sessions_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Submitted sessions');
  $block->content = t('Displays the submitted sessions from the current user.');
  return $block;
}

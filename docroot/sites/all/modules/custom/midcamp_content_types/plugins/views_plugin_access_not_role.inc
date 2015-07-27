<?php
/**
 * @file
 * Contains views_plugin_access_not_role.
 */

class views_plugin_access_not_role extends views_plugin_access_role {

  /**
   * {@inheritdoc}
   */
  public function access($account) {
    return views_check_roles_negate(array_filter($this->options['role']), $account);
  }

  /**
   * {@inheritdoc}
   */
  public function get_access_callback() {
    return array(
      'views_check_roles_negate',
      array(array_filter($this->options['role']))
    );
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['role']['#description'] = t('The checked roles will not be able to access this display. Note that users with "access all views" can see any view, regardless of role.');
  }
}

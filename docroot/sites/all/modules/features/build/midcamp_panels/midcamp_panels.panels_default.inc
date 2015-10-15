<?php
/**
 * @file
 * midcamp_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function midcamp_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sponsor_sidebar';
  $mini->category = 'MidCamp';
  $mini->admin_title = 'Sponsor sidebar';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Content',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Jobs for %node:title';
  $display->uuid = '02aab439-95fc-411c-b9ef-1ad17ee062a9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bf6ea6ce-d8a7-45f6-9434-d6008be64dd3';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'midcamp_sponsor_content-panel_pane_jobs_per_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_entity:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bf6ea6ce-d8a7-45f6-9434-d6008be64dd3';
    $display->content['new-bf6ea6ce-d8a7-45f6-9434-d6008be64dd3'] = $pane;
    $display->panels['main'][0] = 'new-bf6ea6ce-d8a7-45f6-9434-d6008be64dd3';
    $pane = new stdClass();
    $pane->pid = 'new-deb81c8a-482b-4dc0-8246-919193c7e496';
    $pane->panel = 'main';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'job' => 'job',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Post new',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'deb81c8a-482b-4dc0-8246-919193c7e496';
    $display->content['new-deb81c8a-482b-4dc0-8246-919193c7e496'] = $pane;
    $display->panels['main'][1] = 'new-deb81c8a-482b-4dc0-8246-919193c7e496';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['sponsor_sidebar'] = $mini;

  return $export;
}

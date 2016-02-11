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
  $mini->name = 'sponsor_footer_logos';
  $mini->category = 'MidCamp';
  $mini->admin_title = 'Sponsor footer logos';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '944813ad-549b-4181-9110-0b325a4a0833';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-577da07a-9021-45a9-ba1e-fde521effd1e';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'random_sponsor-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '577da07a-9021-45a9-ba1e-fde521effd1e';
    $display->content['new-577da07a-9021-45a9-ba1e-fde521effd1e'] = $pane;
    $display->panels['main'][0] = 'new-577da07a-9021-45a9-ba1e-fde521effd1e';
    $pane = new stdClass();
    $pane->pid = 'new-38c849bc-7ba5-4c4f-bd67-088a319948a5';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'random_sponsor-panel_pane_gold_sponsor_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '38c849bc-7ba5-4c4f-bd67-088a319948a5';
    $display->content['new-38c849bc-7ba5-4c4f-bd67-088a319948a5'] = $pane;
    $display->panels['main'][1] = 'new-38c849bc-7ba5-4c4f-bd67-088a319948a5';
    $pane = new stdClass();
    $pane->pid = 'new-feca2027-6820-46a3-a505-b5d3945fe2b8';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'random_sponsor-panel_pane_silver_sponsor_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'feca2027-6820-46a3-a505-b5d3945fe2b8';
    $display->content['new-feca2027-6820-46a3-a505-b5d3945fe2b8'] = $pane;
    $display->panels['main'][2] = 'new-feca2027-6820-46a3-a505-b5d3945fe2b8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-38c849bc-7ba5-4c4f-bd67-088a319948a5';
  $mini->display = $display;
  $export['sponsor_footer_logos'] = $mini;

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
      'override_title_heading' => 'h2',
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

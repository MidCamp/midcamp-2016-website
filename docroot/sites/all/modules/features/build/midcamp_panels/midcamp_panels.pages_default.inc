<?php
/**
 * @file
 * midcamp_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function midcamp_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Anonymous Session Submit Prompt',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'session' => 'session',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '20a3a73d-e403-49fe-9141-815140a0787b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4edd5312-8f67-403a-a26a-c62c57e8f953';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Session submission guidelines',
      'title' => '',
      'body' => '<h3>Guidelines</h3><ul><li>We encourage experienced speakers to submit talks for a beginner audience.</li><li>Use a format that works for you and your topic: formal talk, panel, short documentary, spoken word, musical, etc.</li><li>Sessions can be 50 minutes or 20 minutes.</li><li>We prefer sessions be presented in English. If you need a translator, please mention that.</li><li>You are welcome to submit more than one talk, but&nbsp;speakers will usually only have one session selected. (Some might appear also on a panel.)</li><li>You may promote a project or organization you are working on if it is relevant, but please&nbsp;no sales pitches.</li><li>We prefer speakers speak on issues affecting&nbsp;groups they belong to, instead of speaking to issues on another group&#39;s behalf. (That is, a panel about &quot;Women in Drupal&quot; should be composed of&nbsp;women.)</li><li>Speakers are expected to follow our <strong>code of conduct</strong>.</li></ul>',
      'format' => 'full_html',
      'substitute' => 1,
      'name' => 'content_session_guidelines',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4edd5312-8f67-403a-a26a-c62c57e8f953';
    $display->content['new-4edd5312-8f67-403a-a26a-c62c57e8f953'] = $pane;
    $display->panels['main'][0] = 'new-4edd5312-8f67-403a-a26a-c62c57e8f953';
    $pane = new stdClass();
    $pane->pid = 'new-16acb401-0b66-482d-8f16-44abf5284364';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Message to login to submit session',
      'title' => '',
      'body' => '<h1>Please log in or create an account to submit a session.</h1>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16acb401-0b66-482d-8f16-44abf5284364';
    $display->content['new-16acb401-0b66-482d-8f16-44abf5284364'] = $pane;
    $display->panels['main'][1] = 'new-16acb401-0b66-482d-8f16-44abf5284364';
    $pane = new stdClass();
    $pane->pid = 'new-09860910-2a8a-4613-b6d7-379343c3bf31';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '09860910-2a8a-4613-b6d7-379343c3bf31';
    $display->content['new-09860910-2a8a-4613-b6d7-379343c3bf31'] = $pane;
    $display->panels['main'][2] = 'new-09860910-2a8a-4613-b6d7-379343c3bf31';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Session Node Form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Submit Prompt',
        'keyword' => 'Submit Prompt',
        'name' => 'entity:node',
        'entity_id' => '3',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Terms & Conditions',
        'keyword' => 'Terms & Conditions',
        'name' => 'entity:node',
        'entity_id' => '11',
        'id' => 2,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'session' => 'session',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'create session content',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Session Proposal';
  $display->uuid = '8b9a6ae7-a59b-4c91-add7-a812cef63d85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-96cd7c9f-948e-4fa0-aca3-0b127a12ce6a';
    $pane->panel = 'middle';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Create a Session Proposal',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '96cd7c9f-948e-4fa0-aca3-0b127a12ce6a';
    $display->content['new-96cd7c9f-948e-4fa0-aca3-0b127a12ce6a'] = $pane;
    $display->panels['middle'][0] = 'new-96cd7c9f-948e-4fa0-aca3-0b127a12ce6a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__non-author-view-of-session-submission-nodes-anonymized';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'non-author view of session submission nodes - anonymized',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Content (on node.node_author)',
        'keyword' => 'user front content',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'session' => 'session',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'relationship_entity_from_schema:uid-node-user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'non-author-view-of-session-submission-nodes-anonymized',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '193c05a6-59e1-4276-ab99-f627f700d259';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c58ac0a9-db53-4299-800a-c08a56c99934';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attendee_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Session Description',
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
    $pane->uuid = 'c58ac0a9-db53-4299-800a-c08a56c99934';
    $display->content['new-c58ac0a9-db53-4299-800a-c08a56c99934'] = $pane;
    $display->panels['center'][0] = 'new-c58ac0a9-db53-4299-800a-c08a56c99934';
    $pane = new stdClass();
    $pane->pid = 'new-1efa9fa0-ead8-45e8-b956-71852e37e3e3';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_track';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Track(s)',
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
    $pane->uuid = '1efa9fa0-ead8-45e8-b956-71852e37e3e3';
    $display->content['new-1efa9fa0-ead8-45e8-b956-71852e37e3e3'] = $pane;
    $display->panels['center'][1] = 'new-1efa9fa0-ead8-45e8-b956-71852e37e3e3';
    $pane = new stdClass();
    $pane->pid = 'new-645b0cfa-5f36-48d3-9e8d-19ff3d904b60';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_drupal_specific';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Drupal-specific',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '645b0cfa-5f36-48d3-9e8d-19ff3d904b60';
    $display->content['new-645b0cfa-5f36-48d3-9e8d-19ff3d904b60'] = $pane;
    $display->panels['center'][2] = 'new-645b0cfa-5f36-48d3-9e8d-19ff3d904b60';
    $pane = new stdClass();
    $pane->pid = 'new-ee27eda9-f29b-4481-85bb-b13f78b1363d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_beginners';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Drupal beginners',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ee27eda9-f29b-4481-85bb-b13f78b1363d';
    $display->content['new-ee27eda9-f29b-4481-85bb-b13f78b1363d'] = $pane;
    $display->panels['center'][3] = 'new-ee27eda9-f29b-4481-85bb-b13f78b1363d';
    $pane = new stdClass();
    $pane->pid = 'new-d4fcca1d-fcc1-4ec8-a595-f27fd8b4d909';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_length';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Session length',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd4fcca1d-fcc1-4ec8-a595-f27fd8b4d909';
    $display->content['new-d4fcca1d-fcc1-4ec8-a595-f27fd8b4d909'] = $pane;
    $display->panels['center'][4] = 'new-d4fcca1d-fcc1-4ec8-a595-f27fd8b4d909';
    $pane = new stdClass();
    $pane->pid = 'new-f6370f53-a1bd-4bca-baa4-d17203cf2d8b';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'warning anonymized session proposal',
      'title' => '',
      'body' => '<p>The speaker info is not shown and the description has been anonymized at this point because we are doing anonymized <a href="/session-faq">session selection</a>.</p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f6370f53-a1bd-4bca-baa4-d17203cf2d8b';
    $display->content['new-f6370f53-a1bd-4bca-baa4-d17203cf2d8b'] = $pane;
    $display->panels['center'][5] = 'new-f6370f53-a1bd-4bca-baa4-d17203cf2d8b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__non-author-view-of-session-submission-nodes-anonymized'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Non-author view of session submission nodes',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Content (on node.node_author)',
        'keyword' => 'user front content',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'session' => 'session',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'relationship_entity_from_schema:uid-node-user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '193c05a6-59e1-4276-ab99-f627f700d259';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aff76331-8d5c-4259-b8d1-48426a0c48f7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_speakers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
        'view_mode' => 'default',
        'links' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Speaker(s)',
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
    $pane->uuid = 'aff76331-8d5c-4259-b8d1-48426a0c48f7';
    $display->content['new-aff76331-8d5c-4259-b8d1-48426a0c48f7'] = $pane;
    $display->panels['center'][0] = 'new-aff76331-8d5c-4259-b8d1-48426a0c48f7';
    $pane = new stdClass();
    $pane->pid = 'new-72b7884c-5424-4340-b5ed-fb85652eabaa';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'session_assignment-panel_pane_session_assignment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '72b7884c-5424-4340-b5ed-fb85652eabaa';
    $display->content['new-72b7884c-5424-4340-b5ed-fb85652eabaa'] = $pane;
    $display->panels['center'][1] = 'new-72b7884c-5424-4340-b5ed-fb85652eabaa';
    $pane = new stdClass();
    $pane->pid = 'new-ae89af9f-45f4-4ff8-8091-ac5d83548ff8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_track';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'list_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Track(s)',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ae89af9f-45f4-4ff8-8091-ac5d83548ff8';
    $display->content['new-ae89af9f-45f4-4ff8-8091-ac5d83548ff8'] = $pane;
    $display->panels['center'][2] = 'new-ae89af9f-45f4-4ff8-8091-ac5d83548ff8';
    $pane = new stdClass();
    $pane->pid = 'new-66d53538-b231-4ab4-bf48-bcd254d74e87';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_drupal_specific';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Drupal-specific',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '66d53538-b231-4ab4-bf48-bcd254d74e87';
    $display->content['new-66d53538-b231-4ab4-bf48-bcd254d74e87'] = $pane;
    $display->panels['center'][3] = 'new-66d53538-b231-4ab4-bf48-bcd254d74e87';
    $pane = new stdClass();
    $pane->pid = 'new-70fa027e-e737-4ae4-9398-b1d2cb9e4563';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_beginners';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Drupal beginners',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '70fa027e-e737-4ae4-9398-b1d2cb9e4563';
    $display->content['new-70fa027e-e737-4ae4-9398-b1d2cb9e4563'] = $pane;
    $display->panels['center'][4] = 'new-70fa027e-e737-4ae4-9398-b1d2cb9e4563';
    $pane = new stdClass();
    $pane->pid = 'new-993d0b10-0104-4018-8d0a-88bf4b5137eb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attendee_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Session description',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '993d0b10-0104-4018-8d0a-88bf4b5137eb';
    $display->content['new-993d0b10-0104-4018-8d0a-88bf4b5137eb'] = $pane;
    $display->panels['center'][5] = 'new-993d0b10-0104-4018-8d0a-88bf4b5137eb';
    $pane = new stdClass();
    $pane->pid = 'new-0b751630-4c52-4ea5-85ea-7941b25e1e09';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_prereqs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'What should attendees already know to get the most out of the session?',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0b751630-4c52-4ea5-85ea-7941b25e1e09';
    $display->content['new-0b751630-4c52-4ea5-85ea-7941b25e1e09'] = $pane;
    $display->panels['center'][6] = 'new-0b751630-4c52-4ea5-85ea-7941b25e1e09';
    $pane = new stdClass();
    $pane->pid = 'new-f470dc7f-d8ff-4a76-bf60-0fceb4c1c7be';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_length';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Session length',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f470dc7f-d8ff-4a76-bf60-0fceb4c1c7be';
    $display->content['new-f470dc7f-d8ff-4a76-bf60-0fceb4c1c7be'] = $pane;
    $display->panels['center'][7] = 'new-f470dc7f-d8ff-4a76-bf60-0fceb4c1c7be';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Sponsor nodes',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'sponsor' => 'sponsor',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '193c05a6-59e1-4276-ab99-f627f700d259';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-76a286d4-f50c-4f9b-8975-b222a3ecb655';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'logo_sponsor_view_full',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '76a286d4-f50c-4f9b-8975-b222a3ecb655';
    $display->content['new-76a286d4-f50c-4f9b-8975-b222a3ecb655'] = $pane;
    $display->panels['main'][0] = 'new-76a286d4-f50c-4f9b-8975-b222a3ecb655';
    $pane = new stdClass();
    $pane->pid = 'new-a54c6b6d-20e1-47ff-bf1b-d2a377cde546';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsorship_level';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = 'a54c6b6d-20e1-47ff-bf1b-d2a377cde546';
    $display->content['new-a54c6b6d-20e1-47ff-bf1b-d2a377cde546'] = $pane;
    $display->panels['main'][1] = 'new-a54c6b6d-20e1-47ff-bf1b-d2a377cde546';
    $pane = new stdClass();
    $pane->pid = 'new-52e2b0a9-73ff-42f6-8a96-580750a5c3f3';
    $pane->panel = 'main';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52e2b0a9-73ff-42f6-8a96-580750a5c3f3';
    $display->content['new-52e2b0a9-73ff-42f6-8a96-580750a5c3f3'] = $pane;
    $display->panels['main'][2] = 'new-52e2b0a9-73ff-42f6-8a96-580750a5c3f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__non-owner-user-profile';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'non-owner user profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'name' => 'non-owner-user-profile',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b557981d-f7dd-4dd2-b66e-14196f1d5133';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3';
    $display->content['new-6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3'] = $pane;
    $display->panels['left'][0] = 'new-6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3';
    $pane = new stdClass();
    $pane->pid = 'new-e10a3cdd-01ac-4e49-9ed3-d35f2491217c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'name_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'markup' => 0,
        'output' => 'default',
        'format' => 'default',
        'multiple' => 'default',
        'multiple_delimiter' => ', ',
        'multiple_and' => 'text',
        'multiple_delimiter_precedes_last' => 'never',
        'multiple_el_al_min' => '3',
        'multiple_el_al_first' => '1',
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e10a3cdd-01ac-4e49-9ed3-d35f2491217c';
    $display->content['new-e10a3cdd-01ac-4e49-9ed3-d35f2491217c'] = $pane;
    $display->panels['left'][1] = 'new-e10a3cdd-01ac-4e49-9ed3-d35f2491217c';
    $pane = new stdClass();
    $pane->pid = 'new-328fbaf8-bd68-4492-b851-cf9cade0b561';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_job_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '328fbaf8-bd68-4492-b851-cf9cade0b561';
    $display->content['new-328fbaf8-bd68-4492-b851-cf9cade0b561'] = $pane;
    $display->panels['left'][2] = 'new-328fbaf8-bd68-4492-b851-cf9cade0b561';
    $pane = new stdClass();
    $pane->pid = 'new-53d8bdf3-0b82-4c25-b405-224bd05d268d';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '53d8bdf3-0b82-4c25-b405-224bd05d268d';
    $display->content['new-53d8bdf3-0b82-4c25-b405-224bd05d268d'] = $pane;
    $display->panels['left'][3] = 'new-53d8bdf3-0b82-4c25-b405-224bd05d268d';
    $pane = new stdClass();
    $pane->pid = 'new-4a3246a8-840b-4226-8123-af2ed0285070';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_company_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4a3246a8-840b-4226-8123-af2ed0285070';
    $display->content['new-4a3246a8-840b-4226-8123-af2ed0285070'] = $pane;
    $display->panels['left'][4] = 'new-4a3246a8-840b-4226-8123-af2ed0285070';
    $pane = new stdClass();
    $pane->pid = 'new-8ab8f56e-5bba-46d1-a52b-874a46973b44';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_joind_in_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8ab8f56e-5bba-46d1-a52b-874a46973b44';
    $display->content['new-8ab8f56e-5bba-46d1-a52b-874a46973b44'] = $pane;
    $display->panels['left'][5] = 'new-8ab8f56e-5bba-46d1-a52b-874a46973b44';
    $pane = new stdClass();
    $pane->pid = 'new-22c09e18-b39f-4aae-9122-a9221b9b07e4';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_drupal_org_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'midcamp_goodies_drupal_org_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '22c09e18-b39f-4aae-9122-a9221b9b07e4';
    $display->content['new-22c09e18-b39f-4aae-9122-a9221b9b07e4'] = $pane;
    $display->panels['left'][6] = 'new-22c09e18-b39f-4aae-9122-a9221b9b07e4';
    $pane = new stdClass();
    $pane->pid = 'new-61516de2-cd3e-44c7-9cf9-0702a6508c91';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_personal_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '61516de2-cd3e-44c7-9cf9-0702a6508c91';
    $display->content['new-61516de2-cd3e-44c7-9cf9-0702a6508c91'] = $pane;
    $display->panels['left'][7] = 'new-61516de2-cd3e-44c7-9cf9-0702a6508c91';
    $pane = new stdClass();
    $pane->pid = 'new-1e11963c-a136-4ec3-835e-cddbbb351d0a';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_twitter_handle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'midcamp_goodies_twitter_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '1e11963c-a136-4ec3-835e-cddbbb351d0a';
    $display->content['new-1e11963c-a136-4ec3-835e-cddbbb351d0a'] = $pane;
    $display->panels['left'][8] = 'new-1e11963c-a136-4ec3-835e-cddbbb351d0a';
    $pane = new stdClass();
    $pane->pid = 'new-f4225ded-b010-4848-bdfc-43e737b9f8cc';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_facebook_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'f4225ded-b010-4848-bdfc-43e737b9f8cc';
    $display->content['new-f4225ded-b010-4848-bdfc-43e737b9f8cc'] = $pane;
    $display->panels['left'][9] = 'new-f4225ded-b010-4848-bdfc-43e737b9f8cc';
    $pane = new stdClass();
    $pane->pid = 'new-437efd3f-f884-4895-9248-a80cbed37c25';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_google_plus_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_url',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '437efd3f-f884-4895-9248-a80cbed37c25';
    $display->content['new-437efd3f-f884-4895-9248-a80cbed37c25'] = $pane;
    $display->panels['left'][10] = 'new-437efd3f-f884-4895-9248-a80cbed37c25';
    $pane = new stdClass();
    $pane->pid = 'new-f7729f87-21f5-4025-a00a-b60c3dd27324';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_about_me';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f7729f87-21f5-4025-a00a-b60c3dd27324';
    $display->content['new-f7729f87-21f5-4025-a00a-b60c3dd27324'] = $pane;
    $display->panels['right'][0] = 'new-f7729f87-21f5-4025-a00a-b60c3dd27324';
    $pane = new stdClass();
    $pane->pid = 'new-262f8f04-b041-4a61-93ae-28b1265880e6';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'speaker_s_session_proposals-panel_pane_user_sessions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'uid' => '%user:uid%',
      ),
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '262f8f04-b041-4a61-93ae-28b1265880e6';
    $display->content['new-262f8f04-b041-4a61-93ae-28b1265880e6'] = $pane;
    $display->panels['right'][1] = 'new-262f8f04-b041-4a61-93ae-28b1265880e6';
    $pane = new stdClass();
    $pane->pid = 'new-b552fb46-7d05-4e5e-bd3a-168e31907eb1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'midcamp_user_orders-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer users',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'arguments' => array(
        'user' => '%user:uid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b552fb46-7d05-4e5e-bd3a-168e31907eb1';
    $display->content['new-b552fb46-7d05-4e5e-bd3a-168e31907eb1'] = $pane;
    $display->panels['right'][2] = 'new-b552fb46-7d05-4e5e-bd3a-168e31907eb1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__non-owner-user-profile'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'User profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:user_1',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b557981d-f7dd-4dd2-b66e-14196f1d5133';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3';
    $display->content['new-6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3'] = $pane;
    $display->panels['left'][0] = 'new-6fe77cd1-7f0f-433b-98c4-f791ee6a9fd3';
    $pane = new stdClass();
    $pane->pid = 'new-e10a3cdd-01ac-4e49-9ed3-d35f2491217c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'name_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'markup' => 0,
        'output' => 'default',
        'format' => 'default',
        'multiple' => 'default',
        'multiple_delimiter' => ', ',
        'multiple_and' => 'text',
        'multiple_delimiter_precedes_last' => 'never',
        'multiple_el_al_min' => '3',
        'multiple_el_al_first' => '1',
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e10a3cdd-01ac-4e49-9ed3-d35f2491217c';
    $display->content['new-e10a3cdd-01ac-4e49-9ed3-d35f2491217c'] = $pane;
    $display->panels['left'][1] = 'new-e10a3cdd-01ac-4e49-9ed3-d35f2491217c';
    $pane = new stdClass();
    $pane->pid = 'new-328fbaf8-bd68-4492-b851-cf9cade0b561';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_job_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '328fbaf8-bd68-4492-b851-cf9cade0b561';
    $display->content['new-328fbaf8-bd68-4492-b851-cf9cade0b561'] = $pane;
    $display->panels['left'][2] = 'new-328fbaf8-bd68-4492-b851-cf9cade0b561';
    $pane = new stdClass();
    $pane->pid = 'new-53d8bdf3-0b82-4c25-b405-224bd05d268d';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '53d8bdf3-0b82-4c25-b405-224bd05d268d';
    $display->content['new-53d8bdf3-0b82-4c25-b405-224bd05d268d'] = $pane;
    $display->panels['left'][3] = 'new-53d8bdf3-0b82-4c25-b405-224bd05d268d';
    $pane = new stdClass();
    $pane->pid = 'new-4a3246a8-840b-4226-8123-af2ed0285070';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_company_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4a3246a8-840b-4226-8123-af2ed0285070';
    $display->content['new-4a3246a8-840b-4226-8123-af2ed0285070'] = $pane;
    $display->panels['left'][4] = 'new-4a3246a8-840b-4226-8123-af2ed0285070';
    $pane = new stdClass();
    $pane->pid = 'new-8ab8f56e-5bba-46d1-a52b-874a46973b44';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_joind_in_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8ab8f56e-5bba-46d1-a52b-874a46973b44';
    $display->content['new-8ab8f56e-5bba-46d1-a52b-874a46973b44'] = $pane;
    $display->panels['left'][5] = 'new-8ab8f56e-5bba-46d1-a52b-874a46973b44';
    $pane = new stdClass();
    $pane->pid = 'new-22c09e18-b39f-4aae-9122-a9221b9b07e4';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_drupal_org_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'midcamp_goodies_drupal_org_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '22c09e18-b39f-4aae-9122-a9221b9b07e4';
    $display->content['new-22c09e18-b39f-4aae-9122-a9221b9b07e4'] = $pane;
    $display->panels['left'][6] = 'new-22c09e18-b39f-4aae-9122-a9221b9b07e4';
    $pane = new stdClass();
    $pane->pid = 'new-61516de2-cd3e-44c7-9cf9-0702a6508c91';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_personal_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '61516de2-cd3e-44c7-9cf9-0702a6508c91';
    $display->content['new-61516de2-cd3e-44c7-9cf9-0702a6508c91'] = $pane;
    $display->panels['left'][7] = 'new-61516de2-cd3e-44c7-9cf9-0702a6508c91';
    $pane = new stdClass();
    $pane->pid = 'new-1e11963c-a136-4ec3-835e-cddbbb351d0a';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_twitter_handle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'midcamp_goodies_twitter_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '1e11963c-a136-4ec3-835e-cddbbb351d0a';
    $display->content['new-1e11963c-a136-4ec3-835e-cddbbb351d0a'] = $pane;
    $display->panels['left'][8] = 'new-1e11963c-a136-4ec3-835e-cddbbb351d0a';
    $pane = new stdClass();
    $pane->pid = 'new-f4225ded-b010-4848-bdfc-43e737b9f8cc';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_facebook_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'f4225ded-b010-4848-bdfc-43e737b9f8cc';
    $display->content['new-f4225ded-b010-4848-bdfc-43e737b9f8cc'] = $pane;
    $display->panels['left'][9] = 'new-f4225ded-b010-4848-bdfc-43e737b9f8cc';
    $pane = new stdClass();
    $pane->pid = 'new-437efd3f-f884-4895-9248-a80cbed37c25';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_google_plus_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_url',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '437efd3f-f884-4895-9248-a80cbed37c25';
    $display->content['new-437efd3f-f884-4895-9248-a80cbed37c25'] = $pane;
    $display->panels['left'][10] = 'new-437efd3f-f884-4895-9248-a80cbed37c25';
    $pane = new stdClass();
    $pane->pid = 'new-f7729f87-21f5-4025-a00a-b60c3dd27324';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_about_me';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f7729f87-21f5-4025-a00a-b60c3dd27324';
    $display->content['new-f7729f87-21f5-4025-a00a-b60c3dd27324'] = $pane;
    $display->panels['right'][0] = 'new-f7729f87-21f5-4025-a00a-b60c3dd27324';
    $pane = new stdClass();
    $pane->pid = 'new-5fe27b83-8ca3-4e2c-98fb-ce3052060267';
    $pane->panel = 'right';
    $pane->type = 'user_sessions';
    $pane->subtype = 'user_sessions';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5fe27b83-8ca3-4e2c-98fb-ce3052060267';
    $display->content['new-5fe27b83-8ca3-4e2c-98fb-ce3052060267'] = $pane;
    $display->panels['right'][1] = 'new-5fe27b83-8ca3-4e2c-98fb-ce3052060267';
    $pane = new stdClass();
    $pane->pid = 'new-b552fb46-7d05-4e5e-bd3a-168e31907eb1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'midcamp_user_orders-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer users',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'arguments' => array(
        'user' => '%user:uid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b552fb46-7d05-4e5e-bd3a-168e31907eb1';
    $display->content['new-b552fb46-7d05-4e5e-bd3a-168e31907eb1'] = $pane;
    $display->panels['right'][2] = 'new-b552fb46-7d05-4e5e-bd3a-168e31907eb1';
    $pane = new stdClass();
    $pane->pid = 'new-f67d67e4-6d7b-4d6f-b80f-0a1f6aefcdec';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'speaker_s_session_proposals-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'uid' => '%user:uid%',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f67d67e4-6d7b-4d6f-b80f-0a1f6aefcdec';
    $display->content['new-f67d67e4-6d7b-4d6f-b80f-0a1f6aefcdec'] = $pane;
    $display->panels['right'][3] = 'new-f67d67e4-6d7b-4d6f-b80f-0a1f6aefcdec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function midcamp_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'buy_tickets_now_';
  $page->task = 'page';
  $page->admin_title = 'Buy Tickets Now!';
  $page->admin_description = '';
  $page->path = 'buy-tickets-now';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_buy_tickets_now___panel';
  $handler->task = 'page';
  $handler->subtask = 'buy_tickets_now_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'feature_1' => NULL,
      'feature_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2aceb075-2dfd-4af4-91a5-b8f8ea1e28d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f1c7a6c5-3eda-484b-bf9a-556ffe84e6fc';
    $pane->panel = 'feature_1';
    $pane->type = 'event_info';
    $pane->subtype = 'event_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'f1c7a6c5-3eda-484b-bf9a-556ffe84e6fc';
    $display->content['new-f1c7a6c5-3eda-484b-bf9a-556ffe84e6fc'] = $pane;
    $display->panels['feature_1'][0] = 'new-f1c7a6c5-3eda-484b-bf9a-556ffe84e6fc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['buy_tickets_now_'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jobs';
  $page->task = 'page';
  $page->admin_title = 'Jobs';
  $page->admin_description = '';
  $page->path = 'jobs';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Jobs',
    'name' => 'main-menu',
    'weight' => '60',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jobs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jobs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'MidCamp Job Board';
  $display->uuid = '3160f1f5-5459-4d24-b4ac-269806f21a99';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-102735c3-a72b-4638-bb3b-be765f70fe25';
    $pane->panel = 'main';
    $pane->type = 'sponsor_jobs';
    $pane->subtype = 'sponsor_jobs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'jobs_path' => 'jobs',
      'override_title' => 0,
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
    $pane->uuid = '102735c3-a72b-4638-bb3b-be765f70fe25';
    $display->content['new-102735c3-a72b-4638-bb3b-be765f70fe25'] = $pane;
    $display->panels['main'][0] = 'new-102735c3-a72b-4638-bb3b-be765f70fe25';
    $pane = new stdClass();
    $pane->pid = 'new-752ea083-65d1-4c62-9798-f9a1bbd94aef';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'midcamp_sponsor_content-panel_pane_job_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
      'exposed' => array(
        'field_job_type_value' => 'All',
        'field_skill_level_value' => 'All',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '752ea083-65d1-4c62-9798-f9a1bbd94aef';
    $display->content['new-752ea083-65d1-4c62-9798-f9a1bbd94aef'] = $pane;
    $display->panels['main'][1] = 'new-752ea083-65d1-4c62-9798-f9a1bbd94aef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jobs'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'midcamp_home_page';
  $page->task = 'page';
  $page->admin_title = 'MidCamp home page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_midcamp_home_page__panel_context_20822b2d-03e6-4cc3-aa9b-97700dedf19b';
  $handler->task = 'page';
  $handler->subtask = 'midcamp_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'feature_1' => NULL,
      'feature_2' => NULL,
      'main' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a162d926-1261-4de3-ac93-0613b389f8ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-459c3290-c24f-4548-8c8b-7732e57f3acb';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'attendee_user_profiles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
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
    $pane->uuid = '459c3290-c24f-4548-8c8b-7732e57f3acb';
    $display->content['new-459c3290-c24f-4548-8c8b-7732e57f3acb'] = $pane;
    $display->panels['bottom'][0] = 'new-459c3290-c24f-4548-8c8b-7732e57f3acb';
    $pane = new stdClass();
    $pane->pid = 'new-e9275d10-f12d-4d1d-b6e1-b873944d4ac4';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'attendee_user_profiles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = 'e9275d10-f12d-4d1d-b6e1-b873944d4ac4';
    $display->content['new-e9275d10-f12d-4d1d-b6e1-b873944d4ac4'] = $pane;
    $display->panels['bottom'][1] = 'new-e9275d10-f12d-4d1d-b6e1-b873944d4ac4';
    $pane = new stdClass();
    $pane->pid = 'new-3f496428-7245-4a52-b988-27bbf0a73120';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f496428-7245-4a52-b988-27bbf0a73120';
    $display->content['new-3f496428-7245-4a52-b988-27bbf0a73120'] = $pane;
    $display->panels['left'][0] = 'new-3f496428-7245-4a52-b988-27bbf0a73120';
    $pane = new stdClass();
    $pane->pid = 'new-c08a30ac-6950-4458-9476-e8d58d2c2016';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'offset' => '1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c08a30ac-6950-4458-9476-e8d58d2c2016';
    $display->content['new-c08a30ac-6950-4458-9476-e8d58d2c2016'] = $pane;
    $display->panels['middle'][0] = 'new-c08a30ac-6950-4458-9476-e8d58d2c2016';
    $pane = new stdClass();
    $pane->pid = 'new-51823432-b208-4a4d-b974-ca1a7a048bd6';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'offset' => '2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51823432-b208-4a4d-b974-ca1a7a048bd6';
    $display->content['new-51823432-b208-4a4d-b974-ca1a7a048bd6'] = $pane;
    $display->panels['right'][0] = 'new-51823432-b208-4a4d-b974-ca1a7a048bd6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['midcamp_home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_become_a_sponsor';
  $page->task = 'page';
  $page->admin_title = 'page-become-a-sponsor';
  $page->admin_description = '';
  $page->path = 'become-a-sponsor';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Become a Sponsor',
    'name' => 'main-menu',
    'weight' => '12',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_become_a_sponsor__panel';
  $handler->task = 'page';
  $handler->subtask = 'page_become_a_sponsor';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
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
  $display->uuid = '268618d3-c383-47dc-a844-dcd21de05901';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a010456-cc51-43ab-b8d4-43d4a062fb1e';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'sponsor_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1a010456-cc51-43ab-b8d4-43d4a062fb1e';
    $display->content['new-1a010456-cc51-43ab-b8d4-43d4a062fb1e'] = $pane;
    $display->panels['main'][0] = 'new-1a010456-cc51-43ab-b8d4-43d4a062fb1e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_become_a_sponsor'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'schedule';
  $page->task = 'page';
  $page->admin_title = 'Schedule';
  $page->admin_description = '';
  $page->path = 'schedule/!day';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'day' => array(
      'id' => 1,
      'identifier' => 'Day',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schedule__panel_context_0da97cde-65cb-44df-b525-61a083b3387c';
  $handler->task = 'page';
  $handler->subtask = 'schedule';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'Thursday',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'thursday',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Thursday March 19';
  $display->uuid = '1e694f48-37b6-4f69-bf50-cd520c303b5c';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schedule__panel_context_1a455183-7ce1-4f4e-9577-d19db111708b';
  $handler->task = 'page';
  $handler->subtask = 'schedule';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'Friday',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'friday',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Friday March 20';
  $display->uuid = '8a4e1b5f-397a-4e19-901f-3a27f6d2e7d5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3be7d6f-9217-439f-983d-c69540da41d6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '1',
      ),
      'override_title' => 1,
      'override_title_text' => '8:00am-9:00am',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3be7d6f-9217-439f-983d-c69540da41d6';
    $display->content['new-c3be7d6f-9217-439f-983d-c69540da41d6'] = $pane;
    $display->panels['middle'][0] = 'new-c3be7d6f-9217-439f-983d-c69540da41d6';
    $pane = new stdClass();
    $pane->pid = 'new-5551202b-6c1a-46d1-a181-c06407ee1f58';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '2',
      ),
      'override_title' => 1,
      'override_title_text' => '9:00am-10:15am',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5551202b-6c1a-46d1-a181-c06407ee1f58';
    $display->content['new-5551202b-6c1a-46d1-a181-c06407ee1f58'] = $pane;
    $display->panels['middle'][1] = 'new-5551202b-6c1a-46d1-a181-c06407ee1f58';
    $pane = new stdClass();
    $pane->pid = 'new-34fe61d6-4180-4020-b3ec-a8c5b2a05ca7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '4',
      ),
      'override_title' => 1,
      'override_title_text' => '10:30am-11:30am',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '34fe61d6-4180-4020-b3ec-a8c5b2a05ca7';
    $display->content['new-34fe61d6-4180-4020-b3ec-a8c5b2a05ca7'] = $pane;
    $display->panels['middle'][2] = 'new-34fe61d6-4180-4020-b3ec-a8c5b2a05ca7';
    $pane = new stdClass();
    $pane->pid = 'new-71a77f83-8cb9-4636-84ad-5fdb8c51fe0f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '6',
      ),
      'override_title' => 1,
      'override_title_text' => '12:30pm-1:30pm',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '71a77f83-8cb9-4636-84ad-5fdb8c51fe0f';
    $display->content['new-71a77f83-8cb9-4636-84ad-5fdb8c51fe0f'] = $pane;
    $display->panels['middle'][3] = 'new-71a77f83-8cb9-4636-84ad-5fdb8c51fe0f';
    $pane = new stdClass();
    $pane->pid = 'new-5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '8',
      ),
      'override_title' => 1,
      'override_title_text' => '1:45pm-2:45pm',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60';
    $display->content['new-5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60'] = $pane;
    $display->panels['middle'][4] = 'new-5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60';
    $pane = new stdClass();
    $pane->pid = 'new-5cfb2288-0126-4bb6-8106-366a15875f62';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '10',
      ),
      'override_title' => 1,
      'override_title_text' => '3:00pm-4:00pm',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5cfb2288-0126-4bb6-8106-366a15875f62';
    $display->content['new-5cfb2288-0126-4bb6-8106-366a15875f62'] = $pane;
    $display->panels['middle'][5] = 'new-5cfb2288-0126-4bb6-8106-366a15875f62';
    $pane = new stdClass();
    $pane->pid = 'new-dfd57f01-d4dc-48f2-b609-e2823c0178c0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '12',
      ),
      'override_title' => 1,
      'override_title_text' => '4:30pm-5:30pm',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'dfd57f01-d4dc-48f2-b609-e2823c0178c0';
    $display->content['new-dfd57f01-d4dc-48f2-b609-e2823c0178c0'] = $pane;
    $display->panels['middle'][6] = 'new-dfd57f01-d4dc-48f2-b609-e2823c0178c0';
    $pane = new stdClass();
    $pane->pid = 'new-7930d2af-a0b0-4c45-88b4-52a27e6ef0e4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '13',
      ),
      'override_title' => 1,
      'override_title_text' => '5:30pm-8:30pm',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '7930d2af-a0b0-4c45-88b4-52a27e6ef0e4';
    $display->content['new-7930d2af-a0b0-4c45-88b4-52a27e6ef0e4'] = $pane;
    $display->panels['middle'][7] = 'new-7930d2af-a0b0-4c45-88b4-52a27e6ef0e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schedule__panel_context_e4e02e1e-076c-4857-b58b-bfccc8c32136';
  $handler->task = 'page';
  $handler->subtask = 'schedule';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Saturday',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'saturday',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Saturday March 21';
  $display->uuid = '8a4e1b5f-397a-4e19-901f-3a27f6d2e7d5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-62ba945e-72ba-42ae-9635-b9705f688432';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '14',
      ),
      'override_title' => 1,
      'override_title_text' => '8:00am-9:00am',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62ba945e-72ba-42ae-9635-b9705f688432';
    $display->content['new-62ba945e-72ba-42ae-9635-b9705f688432'] = $pane;
    $display->panels['middle'][0] = 'new-62ba945e-72ba-42ae-9635-b9705f688432';
    $pane = new stdClass();
    $pane->pid = 'new-5551202b-6c1a-46d1-a181-c06407ee1f58';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '15',
      ),
      'override_title' => 1,
      'override_title_text' => '9:00am-10:15am',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5551202b-6c1a-46d1-a181-c06407ee1f58';
    $display->content['new-5551202b-6c1a-46d1-a181-c06407ee1f58'] = $pane;
    $display->panels['middle'][1] = 'new-5551202b-6c1a-46d1-a181-c06407ee1f58';
    $pane = new stdClass();
    $pane->pid = 'new-34fe61d6-4180-4020-b3ec-a8c5b2a05ca7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '17',
      ),
      'override_title' => 1,
      'override_title_text' => '10:30am-11:30am',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '34fe61d6-4180-4020-b3ec-a8c5b2a05ca7';
    $display->content['new-34fe61d6-4180-4020-b3ec-a8c5b2a05ca7'] = $pane;
    $display->panels['middle'][2] = 'new-34fe61d6-4180-4020-b3ec-a8c5b2a05ca7';
    $pane = new stdClass();
    $pane->pid = 'new-71a77f83-8cb9-4636-84ad-5fdb8c51fe0f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '19',
      ),
      'override_title' => 1,
      'override_title_text' => '12:30pm-1:30pm',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '71a77f83-8cb9-4636-84ad-5fdb8c51fe0f';
    $display->content['new-71a77f83-8cb9-4636-84ad-5fdb8c51fe0f'] = $pane;
    $display->panels['middle'][3] = 'new-71a77f83-8cb9-4636-84ad-5fdb8c51fe0f';
    $pane = new stdClass();
    $pane->pid = 'new-5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '21',
      ),
      'override_title' => 1,
      'override_title_text' => '1:45pm-2:45pm',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60';
    $display->content['new-5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60'] = $pane;
    $display->panels['middle'][4] = 'new-5e6c50c7-7a82-42d3-bce3-d5ddbd7dbe60';
    $pane = new stdClass();
    $pane->pid = 'new-5cfb2288-0126-4bb6-8106-366a15875f62';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '23',
      ),
      'override_title' => 1,
      'override_title_text' => '3:00pm-4:00pm',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5cfb2288-0126-4bb6-8106-366a15875f62';
    $display->content['new-5cfb2288-0126-4bb6-8106-366a15875f62'] = $pane;
    $display->panels['middle'][5] = 'new-5cfb2288-0126-4bb6-8106-366a15875f62';
    $pane = new stdClass();
    $pane->pid = 'new-dfd57f01-d4dc-48f2-b609-e2823c0178c0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '25',
      ),
      'override_title' => 1,
      'override_title_text' => '4:30pm-5:30pm',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'dfd57f01-d4dc-48f2-b609-e2823c0178c0';
    $display->content['new-dfd57f01-d4dc-48f2-b609-e2823c0178c0'] = $pane;
    $display->panels['middle'][6] = 'new-dfd57f01-d4dc-48f2-b609-e2823c0178c0';
    $pane = new stdClass();
    $pane->pid = 'new-f26c380d-e058-44f9-9eff-abc3bf1d7ee4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '26',
      ),
      'override_title' => 1,
      'override_title_text' => 'Evening Social',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f26c380d-e058-44f9-9eff-abc3bf1d7ee4';
    $display->content['new-f26c380d-e058-44f9-9eff-abc3bf1d7ee4'] = $pane;
    $display->panels['middle'][7] = 'new-f26c380d-e058-44f9-9eff-abc3bf1d7ee4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schedule__panel_context_a28c81df-b4b3-4073-9091-95b65460f95a';
  $handler->task = 'page';
  $handler->subtask = 'schedule';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'Sunday',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'sunday',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sunday March 22';
  $display->uuid = '9ddd4a24-69a0-4d9c-be40-8865073e1648';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schedule__panel_context_983af773-e630-4642-882d-2b1db6fb3d8c';
  $handler->task = 'page';
  $handler->subtask = 'schedule';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'title' => 'Next',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Next Timeslot',
        'keyword' => 'next',
        'name' => 'next_timeslot',
        'today' => 1,
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'next',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Next Sessions';
  $display->uuid = '59cabe11-5d2c-4957-aa1d-81c7a8e424d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63b8f69a-20f9-40b6-81de-0d8f7294cd02';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'timeslot_sessions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_timeslot_target_id' => '%next:id',
      ),
      'override_title' => 1,
      'override_title_text' => '%next:title',
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
    $pane->uuid = '63b8f69a-20f9-40b6-81de-0d8f7294cd02';
    $display->content['new-63b8f69a-20f9-40b6-81de-0d8f7294cd02'] = $pane;
    $display->panels['middle'][0] = 'new-63b8f69a-20f9-40b6-81de-0d8f7294cd02';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-63b8f69a-20f9-40b6-81de-0d8f7294cd02';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schedule__panel_context_dd209f01-fcb0-4623-a241-d6259218fa0d';
  $handler->task = 'page';
  $handler->subtask = 'schedule';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Schedule';
  $display->uuid = '7c2e3ca5-3664-4bed-8c37-bccb87569cd3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7469a358-da32-45c0-b256-23ab56c2bb80';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'schedule_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7469a358-da32-45c0-b256-23ab56c2bb80';
    $display->content['new-7469a358-da32-45c0-b256-23ab56c2bb80'] = $pane;
    $display->panels['middle'][0] = 'new-7469a358-da32-45c0-b256-23ab56c2bb80';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['schedule'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsors';
  $page->task = 'page';
  $page->admin_title = 'Sponsors';
  $page->admin_description = '';
  $page->path = 'sponsors';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sponsors',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sponsors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sponsors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors';
  $display->uuid = '7014a7d2-f300-42f8-bd6f-5c1649b360fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66484d8d-86bf-4cb9-9d4a-4a8f6d282d59';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_platinum_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'field_sponsorship_level_value' => 'platinum',
      ),
      'override_title' => 1,
      'override_title_text' => 'Platinum Sponsors',
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
    $pane->uuid = '66484d8d-86bf-4cb9-9d4a-4a8f6d282d59';
    $display->content['new-66484d8d-86bf-4cb9-9d4a-4a8f6d282d59'] = $pane;
    $display->panels['middle'][0] = 'new-66484d8d-86bf-4cb9-9d4a-4a8f6d282d59';
    $pane = new stdClass();
    $pane->pid = 'new-05aa3cad-2a5e-4496-8066-2c56dc5f14e8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_gold_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '05aa3cad-2a5e-4496-8066-2c56dc5f14e8';
    $display->content['new-05aa3cad-2a5e-4496-8066-2c56dc5f14e8'] = $pane;
    $display->panels['middle'][1] = 'new-05aa3cad-2a5e-4496-8066-2c56dc5f14e8';
    $pane = new stdClass();
    $pane->pid = 'new-133ae2e7-bb00-4ae7-8668-14c523613abd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_silver_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '133ae2e7-bb00-4ae7-8668-14c523613abd';
    $display->content['new-133ae2e7-bb00-4ae7-8668-14c523613abd'] = $pane;
    $display->panels['middle'][2] = 'new-133ae2e7-bb00-4ae7-8668-14c523613abd';
    $pane = new stdClass();
    $pane->pid = 'new-3e562d76-2256-42c6-881a-895037791572';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_program_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3e562d76-2256-42c6-881a-895037791572';
    $display->content['new-3e562d76-2256-42c6-881a-895037791572'] = $pane;
    $display->panels['middle'][3] = 'new-3e562d76-2256-42c6-881a-895037791572';
    $pane = new stdClass();
    $pane->pid = 'new-fec9589f-b899-45e2-bc0c-4c48901d38f4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_bronze_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fec9589f-b899-45e2-bc0c-4c48901d38f4';
    $display->content['new-fec9589f-b899-45e2-bc0c-4c48901d38f4'] = $pane;
    $display->panels['middle'][4] = 'new-fec9589f-b899-45e2-bc0c-4c48901d38f4';
    $pane = new stdClass();
    $pane->pid = 'new-bca1ac63-f9bc-467b-ba6b-fb2662b1316e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_sprint_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'bca1ac63-f9bc-467b-ba6b-fb2662b1316e';
    $display->content['new-bca1ac63-f9bc-467b-ba6b-fb2662b1316e'] = $pane;
    $display->panels['middle'][5] = 'new-bca1ac63-f9bc-467b-ba6b-fb2662b1316e';
    $pane = new stdClass();
    $pane->pid = 'new-290820e2-b5fd-4d82-841a-4dcbc361bdbd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_other_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '290820e2-b5fd-4d82-841a-4dcbc361bdbd';
    $display->content['new-290820e2-b5fd-4d82-841a-4dcbc361bdbd'] = $pane;
    $display->panels['middle'][6] = 'new-290820e2-b5fd-4d82-841a-4dcbc361bdbd';
    $pane = new stdClass();
    $pane->pid = 'new-5f38b742-23be-4e18-ad76-40d51dd9a70a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'attendee_user_profiles-panel_pane__individual_sponsors';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '5f38b742-23be-4e18-ad76-40d51dd9a70a';
    $display->content['new-5f38b742-23be-4e18-ad76-40d51dd9a70a'] = $pane;
    $display->panels['middle'][7] = 'new-5f38b742-23be-4e18-ad76-40d51dd9a70a';
    $pane = new stdClass();
    $pane->pid = 'new-2c84a8be-333f-4ba6-8da2-ef0395a21b78';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'sponsors_become_a_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '2c84a8be-333f-4ba6-8da2-ef0395a21b78';
    $display->content['new-2c84a8be-333f-4ba6-8da2-ef0395a21b78'] = $pane;
    $display->panels['middle'][8] = 'new-2c84a8be-333f-4ba6-8da2-ef0395a21b78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'trainings';
  $page->task = 'page';
  $page->admin_title = 'Trainings';
  $page->admin_description = 'A listing of trainings.';
  $page->path = 'trainings';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_trainings_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'trainings';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Trainings',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Training Day: March 19th';
  $display->uuid = '3126402b-7c1e-431e-a2f0-8bbba4a86b04';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2d8c8bdb-ab21-43e5-b4c5-e7d303edc0fd';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'views-trainings-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2d8c8bdb-ab21-43e5-b4c5-e7d303edc0fd';
    $display->content['new-2d8c8bdb-ab21-43e5-b4c5-e7d303edc0fd'] = $pane;
    $display->panels['main'][0] = 'new-2d8c8bdb-ab21-43e5-b4c5-e7d303edc0fd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2d8c8bdb-ab21-43e5-b4c5-e7d303edc0fd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['trainings'] = $page;

  return $pages;

}

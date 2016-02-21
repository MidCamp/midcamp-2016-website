<?php
/**
 * @file
 * midcamp_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function midcamp_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator default_environment'.
  $permissions['access environment indicator default_environment'] = array(
    'name' => 'access environment indicator default_environment',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator development'.
  $permissions['access environment indicator development'] = array(
    'name' => 'access environment indicator development',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator production'.
  $permissions['access environment indicator production'] = array(
    'name' => 'access environment indicator production',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator staging'.
  $permissions['access environment indicator staging'] = array(
    'name' => 'access environment indicator staging',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access memcache statistics'.
  $permissions['access memcache statistics'] = array(
    'name' => 'access memcache statistics',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access slab cachedump'.
  $permissions['access slab cachedump'] = array(
    'name' => 'access slab cachedump',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiler builder'.
  $permissions['administer profiler builder'] = array(
    'name' => 'administer profiler builder',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profiler_builder',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer youtube'.
  $permissions['administer youtube'] = array(
    'name' => 'administer youtube',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'youtube',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create field_related_content'.
  $permissions['create field_related_content'] = array(
    'name' => 'create field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_room'.
  $permissions['create field_room'] = array(
    'name' => 'create field_room',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_session_video'.
  $permissions['create field_session_video'] = array(
    'name' => 'create field_session_video',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_slides'.
  $permissions['create field_slides'] = array(
    'name' => 'create field_slides',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_slides_url'.
  $permissions['create field_slides_url'] = array(
    'name' => 'create field_slides_url',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_speakers'.
  $permissions['create field_speakers'] = array(
    'name' => 'create field_speakers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_timeslot'.
  $permissions['create field_timeslot'] = array(
    'name' => 'create field_timeslot',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create job content'.
  $permissions['create job content'] = array(
    'name' => 'create job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create schedule_item content'.
  $permissions['create schedule_item content'] = array(
    'name' => 'create schedule_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sponsor content'.
  $permissions['create sponsor content'] = array(
    'name' => 'create sponsor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create training content'.
  $permissions['create training content'] = array(
    'name' => 'create training content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any job content'.
  $permissions['delete any job content'] = array(
    'name' => 'delete any job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any schedule_item content'.
  $permissions['delete any schedule_item content'] = array(
    'name' => 'delete any schedule_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any session content'.
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sponsor content'.
  $permissions['delete any sponsor content'] = array(
    'name' => 'delete any sponsor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training content'.
  $permissions['delete any training content'] = array(
    'name' => 'delete any training content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own job content'.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own schedule_item content'.
  $permissions['delete own schedule_item content'] = array(
    'name' => 'delete own schedule_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own session content'.
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sponsor content'.
  $permissions['delete own sponsor content'] = array(
    'name' => 'delete own sponsor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own training content'.
  $permissions['delete own training content'] = array(
    'name' => 'delete own training content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in session_audience'.
  $permissions['delete terms in session_audience'] = array(
    'name' => 'delete terms in session_audience',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in session_tracks'.
  $permissions['delete terms in session_tracks'] = array(
    'name' => 'delete terms in session_tracks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sponsor_levels'.
  $permissions['delete terms in sponsor_levels'] = array(
    'name' => 'delete terms in sponsor_levels',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'eck add bundles'.
  $permissions['eck add bundles'] = array(
    'name' => 'eck add bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entities'.
  $permissions['eck add entities'] = array(
    'name' => 'eck add entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entity types'.
  $permissions['eck add entity types'] = array(
    'name' => 'eck add entity types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add scamp assignment entities'.
  $permissions['eck add scamp assignment entities'] = array(
    'name' => 'eck add scamp assignment entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add scamp bundles'.
  $permissions['eck add scamp bundles'] = array(
    'name' => 'eck add scamp bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add scamp room entities'.
  $permissions['eck add scamp room entities'] = array(
    'name' => 'eck add scamp room entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add scamp timeslot entities'.
  $permissions['eck add scamp timeslot entities'] = array(
    'name' => 'eck add scamp timeslot entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer bundles'.
  $permissions['eck administer bundles'] = array(
    'name' => 'eck administer bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entities'.
  $permissions['eck administer entities'] = array(
    'name' => 'eck administer entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entity types'.
  $permissions['eck administer entity types'] = array(
    'name' => 'eck administer entity types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer scamp assignment entities'.
  $permissions['eck administer scamp assignment entities'] = array(
    'name' => 'eck administer scamp assignment entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer scamp bundles'.
  $permissions['eck administer scamp bundles'] = array(
    'name' => 'eck administer scamp bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer scamp room entities'.
  $permissions['eck administer scamp room entities'] = array(
    'name' => 'eck administer scamp room entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer scamp timeslot entities'.
  $permissions['eck administer scamp timeslot entities'] = array(
    'name' => 'eck administer scamp timeslot entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete bundles'.
  $permissions['eck delete bundles'] = array(
    'name' => 'eck delete bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entities'.
  $permissions['eck delete entities'] = array(
    'name' => 'eck delete entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entity types'.
  $permissions['eck delete entity types'] = array(
    'name' => 'eck delete entity types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete scamp assignment entities'.
  $permissions['eck delete scamp assignment entities'] = array(
    'name' => 'eck delete scamp assignment entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete scamp bundles'.
  $permissions['eck delete scamp bundles'] = array(
    'name' => 'eck delete scamp bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete scamp room entities'.
  $permissions['eck delete scamp room entities'] = array(
    'name' => 'eck delete scamp room entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete scamp timeslot entities'.
  $permissions['eck delete scamp timeslot entities'] = array(
    'name' => 'eck delete scamp timeslot entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit bundles'.
  $permissions['eck edit bundles'] = array(
    'name' => 'eck edit bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entities'.
  $permissions['eck edit entities'] = array(
    'name' => 'eck edit entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entity types'.
  $permissions['eck edit entity types'] = array(
    'name' => 'eck edit entity types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit scamp assignment entities'.
  $permissions['eck edit scamp assignment entities'] = array(
    'name' => 'eck edit scamp assignment entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit scamp bundles'.
  $permissions['eck edit scamp bundles'] = array(
    'name' => 'eck edit scamp bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit scamp room entities'.
  $permissions['eck edit scamp room entities'] = array(
    'name' => 'eck edit scamp room entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit scamp timeslot entities'.
  $permissions['eck edit scamp timeslot entities'] = array(
    'name' => 'eck edit scamp timeslot entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list bundles'.
  $permissions['eck list bundles'] = array(
    'name' => 'eck list bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entities'.
  $permissions['eck list entities'] = array(
    'name' => 'eck list entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entity types'.
  $permissions['eck list entity types'] = array(
    'name' => 'eck list entity types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list scamp assignment entities'.
  $permissions['eck list scamp assignment entities'] = array(
    'name' => 'eck list scamp assignment entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list scamp bundles'.
  $permissions['eck list scamp bundles'] = array(
    'name' => 'eck list scamp bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list scamp room entities'.
  $permissions['eck list scamp room entities'] = array(
    'name' => 'eck list scamp room entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list scamp timeslot entities'.
  $permissions['eck list scamp timeslot entities'] = array(
    'name' => 'eck list scamp timeslot entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view scamp assignment entities'.
  $permissions['eck view scamp assignment entities'] = array(
    'name' => 'eck view scamp assignment entities',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view scamp bundles'.
  $permissions['eck view scamp bundles'] = array(
    'name' => 'eck view scamp bundles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view scamp room entities'.
  $permissions['eck view scamp room entities'] = array(
    'name' => 'eck view scamp room entities',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view scamp timeslot entities'.
  $permissions['eck view scamp timeslot entities'] = array(
    'name' => 'eck view scamp timeslot entities',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any conference_details profile'.
  $permissions['edit any conference_details profile'] = array(
    'name' => 'edit any conference_details profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any job content'.
  $permissions['edit any job content'] = array(
    'name' => 'edit any job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any orders profile'.
  $permissions['edit any orders profile'] = array(
    'name' => 'edit any orders profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any schedule_item content'.
  $permissions['edit any schedule_item content'] = array(
    'name' => 'edit any schedule_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any session content'.
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sponsor content'.
  $permissions['edit any sponsor content'] = array(
    'name' => 'edit any sponsor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any training content'.
  $permissions['edit any training content'] = array(
    'name' => 'edit any training content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_related_content'.
  $permissions['edit field_related_content'] = array(
    'name' => 'edit field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_room'.
  $permissions['edit field_room'] = array(
    'name' => 'edit field_room',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_session_video'.
  $permissions['edit field_session_video'] = array(
    'name' => 'edit field_session_video',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_slides'.
  $permissions['edit field_slides'] = array(
    'name' => 'edit field_slides',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_slides_url'.
  $permissions['edit field_slides_url'] = array(
    'name' => 'edit field_slides_url',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_speakers'.
  $permissions['edit field_speakers'] = array(
    'name' => 'edit field_speakers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_timeslot'.
  $permissions['edit field_timeslot'] = array(
    'name' => 'edit field_timeslot',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own conference_details profile'.
  $permissions['edit own conference_details profile'] = array(
    'name' => 'edit own conference_details profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own field_related_content'.
  $permissions['edit own field_related_content'] = array(
    'name' => 'edit own field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_room'.
  $permissions['edit own field_room'] = array(
    'name' => 'edit own field_room',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_session_video'.
  $permissions['edit own field_session_video'] = array(
    'name' => 'edit own field_session_video',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_slides'.
  $permissions['edit own field_slides'] = array(
    'name' => 'edit own field_slides',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_slides_url'.
  $permissions['edit own field_slides_url'] = array(
    'name' => 'edit own field_slides_url',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_speakers'.
  $permissions['edit own field_speakers'] = array(
    'name' => 'edit own field_speakers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_timeslot'.
  $permissions['edit own field_timeslot'] = array(
    'name' => 'edit own field_timeslot',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own job content'.
  $permissions['edit own job content'] = array(
    'name' => 'edit own job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own orders profile'.
  $permissions['edit own orders profile'] = array(
    'name' => 'edit own orders profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own schedule_item content'.
  $permissions['edit own schedule_item content'] = array(
    'name' => 'edit own schedule_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sponsor content'.
  $permissions['edit own sponsor content'] = array(
    'name' => 'edit own sponsor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own training content'.
  $permissions['edit own training content'] = array(
    'name' => 'edit own training content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in session_audience'.
  $permissions['edit terms in session_audience'] = array(
    'name' => 'edit terms in session_audience',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in session_tracks'.
  $permissions['edit terms in session_tracks'] = array(
    'name' => 'edit terms in session_tracks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sponsor_levels'.
  $permissions['edit terms in sponsor_levels'] = array(
    'name' => 'edit terms in sponsor_levels',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flag accepted'.
  $permissions['flag accepted'] = array(
    'name' => 'flag accepted',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag featured_user'.
  $permissions['flag featured_user'] = array(
    'name' => 'flag featured_user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage scamp properties'.
  $permissions['manage scamp properties'] = array(
    'name' => 'manage scamp properties',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'unflag accepted'.
  $permissions['unflag accepted'] = array(
    'name' => 'unflag accepted',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag featured_user'.
  $permissions['unflag featured_user'] = array(
    'name' => 'unflag featured_user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format rich_text'.
  $permissions['use text format rich_text'] = array(
    'name' => 'use text format rich_text',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any conference_details profile'.
  $permissions['view any conference_details profile'] = array(
    'name' => 'view any conference_details profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any orders profile'.
  $permissions['view any orders profile'] = array(
    'name' => 'view any orders profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view field_related_content'.
  $permissions['view field_related_content'] = array(
    'name' => 'view field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_room'.
  $permissions['view field_room'] = array(
    'name' => 'view field_room',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_session_video'.
  $permissions['view field_session_video'] = array(
    'name' => 'view field_session_video',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_slides'.
  $permissions['view field_slides'] = array(
    'name' => 'view field_slides',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_slides_url'.
  $permissions['view field_slides_url'] = array(
    'name' => 'view field_slides_url',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_speakers'.
  $permissions['view field_speakers'] = array(
    'name' => 'view field_speakers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_timeslot'.
  $permissions['view field_timeslot'] = array(
    'name' => 'view field_timeslot',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own conference_details profile'.
  $permissions['view own conference_details profile'] = array(
    'name' => 'view own conference_details profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own field_related_content'.
  $permissions['view own field_related_content'] = array(
    'name' => 'view own field_related_content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_room'.
  $permissions['view own field_room'] = array(
    'name' => 'view own field_room',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_session_video'.
  $permissions['view own field_session_video'] = array(
    'name' => 'view own field_session_video',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_slides'.
  $permissions['view own field_slides'] = array(
    'name' => 'view own field_slides',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_slides_url'.
  $permissions['view own field_slides_url'] = array(
    'name' => 'view own field_slides_url',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_speakers'.
  $permissions['view own field_speakers'] = array(
    'name' => 'view own field_speakers',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_timeslot'.
  $permissions['view own field_timeslot'] = array(
    'name' => 'view own field_timeslot',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own orders profile'.
  $permissions['view own orders profile'] = array(
    'name' => 'view own orders profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}

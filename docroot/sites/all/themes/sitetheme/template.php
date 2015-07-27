<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function sitetheme_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  sitetheme_preprocess_html($variables, $hook);
  sitetheme_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */

function sitetheme_preprocess_html(&$variables, $hook) {
  // Get theme path
  $theme_path = drupal_get_path('theme', 'sitetheme');

  // Add scripts
  // drupal_add_js($theme_path . '/js/plugins/doubleTapToGo.js', array('scope' => 'footer', 'group' => JS_THEME, 'every_page' => TRUE));
  drupal_add_js($theme_path . '/js/script.js', array('scope' => 'footer', 'group' => JS_THEME, 'every_page' => TRUE));

  // Add google fonts
  drupal_add_js($theme_path . '/js/google_fonts.js', array('scope' => 'footer', 'group' => JS_THEME, 'every_page' => TRUE));
}


/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */

function sitetheme_preprocess_page(&$variables, $hook) {
  // Give me a node type page template!
  if (!empty($variables['node'])) {
    $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }
}

/**
 * Implements hook_page_alter().
 */
function sitetheme_page_alter(&$page) {
  // Force the navigation region to always display
  // - Doing this because the menu block goes in the footer, while the menu is output
  //   by a variable in hook_preprocess_region() below
  if ( !isset($page['navigation']) || empty($page['navigation'])) {
    $page['navigation'] = array(
      '#region' => 'navigation',
      '#weight' => '-10',
      '#theme_wrappers' => array('region')
    );
  }
}

/**
 * Implements hook_preprocess_view()
 */
function sitetheme_preprocess_views_view_list(&$vars) {
  if (isset($vars['view']->name)) {
    $function = __FUNCTION__ . '__' . $vars['view']->name . '__' . $vars['view']->current_display;

    if (function_exists($function)) {
     $function($vars);
    }
  }
}

function sitetheme_preprocess_views_view_fields(&$vars) {
  if (isset($vars['view']->name)) {
    $function = __FUNCTION__ . '__' . $vars['view']->name . '__' . $vars['view']->current_display;

    if (function_exists($function)) {
     $function($vars);
    }
  }
}

function sitetheme_preprocess_views_view_list__venue_maps__attachment_1(&$vars) {
  $view = $vars['view'];
  $result = $view->result;
  $classes = array();

  foreach( $result as $id ) {
    $classes[] = strtolower(str_replace(" ", "-", $id->taxonomy_term_data_node_name));
  }

  $i = 0;
  while ($i < count($classes)) {
    $vars['classes_array'][$i] .= ' ' . $classes[$i];
    $i++;
  }
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 *
 * Implements hook_preprocess_node().
 */
function sitetheme_preprocess_node(&$vars) {
  $view_mode = $vars['view_mode'];
  $type = $vars['type'];
  $nid = $vars['nid'];

  // Prevent the action slide field from displaying twice.
  unset($vars['content']['field_action_slide']);

  // Create view_mode tpls
  if( !empty($view_mode) ) {
    $vars['theme_hook_suggestions'][] = 'node__' . $type . '__' . $view_mode;
    $vars['theme_hook_suggestions'][] = 'node__' . $nid . '__' . $view_mode;
    $vars['classes_array'][] = 'node--' . $type . '__' . $view_mode;
  }

  // switch($type) {
  //   case 'sponsor':
  //     $vars['sponsor_logo'] = array();
  //     $original = $vars['field_image'][0]['uri'];
  //     $level = ( isset($vars['field_sponsor_level'][LANGUAGE_NONE][0]['value']) ) ? $vars['field_sponsor_level'][LANGUAGE_NONE][0]['value'] : $vars['field_sponsor_level'][0]['value'];
  //
  //     if ( $view_mode == 'single' ) {
  //       $image = image_style_url('sponsor__' . $level, $original);
  //       $logo = theme('image', array('path' => $image));
  //       $vars['sponsor_logo']['#markup'] = l($logo, 'node/' . $nid, $options = array('html' => TRUE));
  //     } else {
  //       $image = ($level == 'in-kind') ? image_style_url('medium', $original) : image_style_url('sponsor__' . $level, $original);
  //       $logo = theme('image', array('path' => $image));
  //       $website = $vars['field_website'][0]['url'];
  //       $vars['sponsor_logo']['#markup'] = l($logo, $website, $options = array('html' => TRUE));
  //     }
  //
  //     $vars['sponsor_logo']['#prefix'] = '<div class="sponsor__logo">';
  //     $vars['sponsor_logo']['#suffix'] = '</div>';
  //   break;
  //
  //   case 'post':
  //     $vars['submitted'] = format_date($vars['changed'], 'custom', 'l, F jS, Y \a\t h:ia');
  //   break;
  // }
}

/**
 * Implements hook_preprocess_user_profile()
 */
function sitetheme_preprocess_user_profile(&$vars) {
  $account = $vars['elements']['#account'];
  $view_mode = $vars['elements']['#view_mode'];

  // Helpful $user_profile variable for templates.
  foreach (element_children($vars['elements']) as $key) {
    $vars['user_profile'][$key] = $vars['elements'][$key];
  }

  // Preprocess fields.
  field_attach_preprocess('user', $account, $vars['elements'], $vars);

  // Create templates for each view_mode
  if ( !empty($view_mode) ) {
    $vars['theme_hook_suggestions'][] = 'user__' . $view_mode;
  }

  switch($view_mode) {
    case 'plaque':
      $roles = $account->roles;
      foreach (element_children($roles) as $key) {
        $vars['attributes_array'][] = str_replace(" ", "-", $roles[$key]);
      }
      $vars['classes_array'] = implode(" ", $vars['attributes_array']);
    break;
  }
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function sitetheme_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
function sitetheme_preprocess_region(&$variables) {
  if ($variables['region'] == 'navigation') {
    $variables['theme_hook_suggestions'][] = 'region__navigation';
    $variables['primary_nav'] = menu_tree_output(menu_tree_all_data('main-menu'));
    $user_mobile = menu_tree_output(menu_tree_all_data('user-menu'));
    $user_mobile['#theme_wrappers'] = array('menu_tree__user_menu_mobile'); // override existing theme functions
    $variables['user_nav'] = $user_mobile;
  }
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function sitetheme_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

function sitetheme_preprocess_field(&$variables, $hook) {
  $field_name = $variables['element']['#field_name'];
  // Store the entity object for later use
  $entity_object = $variables['element']['#object'];
  // Load up flexslider if we have the appropriate fields
  // if ( ($field_name == 'field_slideshow_slide' || $field_name == 'field_action_slide') && count($variables['items']) > 1) {
  //   drupal_add_library('custom', 'flexslider');
  //   // Add the custom flexslider behavior,
  //   drupal_add_js(drupal_get_path('theme', 'sitetheme') . '/js/flexslider.load.js');
  // }
  // if ($field_name == 'field_slideshow_slide') {
  //   $variables['theme_hook_suggestions'][] = 'field__slideshow_slide';
  // }
  // if ($field_name == 'field_action_slide') {
  //   $variables['theme_hook_suggestions'][] = 'field__action_slide';
  // }
}

/**
 * Perform alterations before a form is rendered.
 *
 * One popular use of this hook is to add form elements to the node form. When
 * altering a node form, the node object can be accessed at $form['#node'].
 *
 * In addition to hook_form_alter(), which is called for all forms, there are
 * two more specific form hooks available. The first,
 * hook_form_BASE_FORM_ID_alter(), allows targeting of a form/forms via a base
 * form (if one exists). The second, hook_form_FORM_ID_alter(), can be used to
 * target a specific form directly.
 *
 * The call order is as follows: all existing form alter functions are called
 * for module A, then all for module B, etc., followed by all for any base
 * theme(s), and finally for the theme itself. The module order is determined
 * by system weight, then by module name.
 *
 * Within each module, form alter hooks are called in the following order:
 * first, hook_form_alter(); second, hook_form_BASE_FORM_ID_alter(); third,
 * hook_form_FORM_ID_alter(). So, for each module, the more general hooks are
 * called first followed by the more specific.
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form. The arguments
 *   that drupal_get_form() was originally called with are available in the
 *   array $form_state['build_info']['args'].
 * @param $form_id
 *   String representing the name of the form itself. Typically this is the
 *   name of the function that generated the form.
 *
 * @see hook_form_BASE_FORM_ID_alter()
 * @see hook_form_FORM_ID_alter()
 * @see forms_api_reference.html
 */

function sitetheme_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['search_block_form']['#title'] = t('Search'); // Change the text on the label element
  $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
  $form['search_block_form']['#size'] = 30;  // define size of the textfield
  $form['actions']['submit']['#value'] = 'search'; // Change the text on the submit button
  $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search-button.png');
  $form['actions']['submit']['#attributes']['class'] = array('ss-icon');
  $form['search_block_form']['#attributes']['placeholder'] = t('Search');
}


/**
 * Implements hook_form_FORM_ID_alter()
 *
 function sitetheme_form_midcamp_commerce_registration_form_alter(&$form, &$form_state, $form_id) {} */

/**
 * Returns HTML for a menu link and submenu.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: Structured array data for a menu link.
 *
 * @ingroup themeable
 */
/* // Commented this function out as I've rolled it's functionality into the custom menu_tree functions
function sitetheme_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $element['#attributes']['class'] = 'level-' . $element['#original_link']['depth'];
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
*/

/**
* Implements theme_menu_tree__menu_id()
*
* @funcSet:
*   Return HTML for Primary Menu and Link wrappers [ ul & li ].
*
* @func:
* - Main UL
*
*/
function sitetheme_menu_tree__user_menu_mobile($vars) {
  return '<nav id="user-menu" role="navigation" tabindex="-1"><ul class="menu--user-menu menu links">' . $vars['tree'] . '</ul></nav>';
}

/** @func:
* - Main LI
*/
function sitetheme_menu_link__user_menu($vars) {
  $element = $vars['element'];
  $sub_menu = '';
  $path = current_path();

  if ($element['#below']) {
    foreach ($element['#below'] as $key => $val) {
      if (is_numeric($key)) {
        $element['#below'][$key]['#theme'] = 'menu_link__user_menu_inner'; // Second level LI
        if ($val['#href'] == $path) {
          $element['#localized_options']['attributes']['class'][] = 'menu__item--active-trail active-trail';
          $element['#attributes']['class'][] = 'menu__item--active-trail active-trail';
        }
      }
    }
    $element['#below']['#theme_wrappers'][0] = 'menu_tree__user_menu_inner'; // Second level UL
    $sub_menu = drupal_render($element['#below']);
    $element['#attributes']['class'][] = 'dropdown';
  }
  $element['#attributes']['class'][] = 'menu__item';
  $element['#attributes']['class'][] = 'level-' . $element['#original_link']['depth'];
  $element['#attributes']['class'][] = 'menu__item--' . strtolower(str_replace(' ','-', $element['#original_link']['link_title']));

  if ($element['#below']) {
    $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    $element['#localized_options']['attributes']['aria-haspopup'] ='true';
    $output = '<input type="checkbox" />' . l($element['#title'], $element['#href'], array('attributes' => $element['#localized_options']['attributes'], 'html' => TRUE));
  } else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  }

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . '</li>';
}

/** @func:
* - Inner UL
*/
function sitetheme_menu_tree__user_menu_inner($vars) {
  return '<ul class="menu--user-menu_sub dropdown-menu menu">' . $vars['tree'] . '</ul>';
}

/** @func:
* - Inner LI
*/
function sitetheme_menu_link__user_menu_inner($vars) {
  $element = $vars['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
    $element['#attributes']['class'][] = 'dropdown';
    $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    $element['#localized_options']['attributes']['aria-haspopup'] ='true';
    $output = '<input type="checkbox" />' . l($element['#title'], $element['#href'], array('attributes' => $element['#localized_options']['attributes'], 'html' => TRUE));
  } else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  }

  $element['#attributes']['class'][] = 'level-' . $element['#original_link']['depth'];

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . '</li>';
}

/**
 * Implements theme_menu_tree__menu_id()
 *
 * @funcSet:
 *   Return HTML for Primary Menu and Link wrappers [ ul & li ].
 *
 * @func:
 * - Main UL
 *
 */
function sitetheme_menu_tree__main_menu($vars) {
  return '<nav id="main-menu" role="navigation" tabindex="-1"><ul class="menu--main-menu menu links">' . $vars['tree'] . '</ul></nav>';
}

/** @func:
 * - Main LI
 */
function sitetheme_menu_link__main_menu(array $vars) {
  $element = $vars['element'];
  $sub_menu = '';
  $path = current_path();

  if ($element['#below']) {
    foreach ($element['#below'] as $key => $val) {
      if (is_numeric($key)) {
        $element['#below'][$key]['#theme'] = 'menu_link__main_menu_inner'; // Second level LI
        if ($val['#href'] == $path) {
          $element['#localized_options']['attributes']['class'][] = 'active-trail';
          $element['#attributes']['class'][] = 'active-trail';
        }
      }
    }
    $element['#below']['#theme_wrappers'][0] = 'menu_tree__main_menu_inner'; // Second level UL
    $sub_menu = drupal_render($element['#below']);
    $element['#attributes']['class'][] = 'dropdown';
  }
  $element['#attributes']['class'][] = 'menu-item';
  $element['#attributes']['class'][] = 'level-' . $element['#original_link']['depth'];

  if ($element['#below']) {
    $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    $element['#localized_options']['attributes']['aria-haspopup'] ='true';
    $output = '<input type="checkbox" />' . l($element['#title'] . '<i class="icon theme-icon-arrow-down"></i>', $element['#href'], array('attributes' => $element['#localized_options']['attributes'], 'html' => TRUE));
  } else {
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  }

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . '</li>';
}

/** @func:
 * - Inner UL
 */
function sitetheme_menu_tree__main_menu_inner($vars) {
    return '<ul class="menu--main-menu_sub dropdown-menu menu">' . $vars['tree'] . '</ul>';
}

/** @func:
 * - Inner LI
 */
function sitetheme_menu_link__main_menu_inner($vars) {
  $element = $vars['element'];
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $element['#attributes']['class'][] = 'level-' . $element['#original_link']['depth'];
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . '</li>';
}

/**
 * Implements theme_menu_tree__menu_id()
 *
 * @funcSet:
 *   Return HTML for CTA menu and Link wrappers [ ul & li ].
 *
 * @func:
 * - Main UL
 *
 */
function sitetheme_menu_tree__menu_call_to_action($vars) {
  return '<ul class="menu__call-to-action menu links">' . $vars['tree'] . '</ul>';
}

/** @func
 * Main LI
 */
function sitetheme_menu_link__menu_call_to_action(array $vars) {
  $element = $vars['element'];

  $element['#attributes']['class'][] = 'menu-item';
  $element['#attributes']['class'][] = 'button-blue';
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . '</li>';
}

/**
 * Implements hook_preprocess_block().
 */
function sitetheme_preprocess_block(&$vars) {

  switch ($vars['block']->delta) {
    case 'menu-call-to-action':
      $vars['classes_array'][] = 'block--menu__call-to-action';
      break;
  }
}

/**
 * Implements theme_menu_tree__menu_id()
 *
 * @funcSet:
 *   Returns HTML for footer menu
 */
function sitetheme_menu_tree__menu_footer_navigation($vars) {
  return '<ul class="menu__footer-navigation links inline inline-links">' . $vars['tree'] . '</ul>';
}

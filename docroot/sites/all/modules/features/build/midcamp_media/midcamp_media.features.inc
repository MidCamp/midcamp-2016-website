<?php
/**
 * @file
 * midcamp_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midcamp_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function midcamp_media_image_default_styles() {
  $styles = array();

  // Exported image style: large.
  $styles['large'] = array(
    'label' => 'Large (480x480)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: linkit_thumb.
  $styles['linkit_thumb'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 50,
          'height' => 50,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'linkit_thumb',
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'label' => 'Medium (220x220)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: sponsor_bronze.
  $styles['sponsor_bronze'] = array(
    'label' => 'Bronze sponsor',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor_footer.
  $styles['sponsor_footer'] = array(
    'label' => 'sponsor_footer',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 60,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor_gold.
  $styles['sponsor_gold'] = array(
    'label' => 'Gold sponsor',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: sponsor_silver.
  $styles['sponsor_silver'] = array(
    'label' => 'Silver sponsor',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: user__headshot.
  $styles['user__headshot'] = array(
    'label' => 'user__headshot',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user__thumbnail.
  $styles['user__thumbnail'] = array(
    'label' => 'user__thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 48,
          'height' => 48,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_featured.
  $styles['user_featured'] = array(
    'label' => 'user_featured',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

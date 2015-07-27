<?php
/**
 * @file
 * Template for a "landing" layout;
 *
 * This template provides a two column panel display layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   region of the layout. $content['main'], $content['sidebar'].
 * - $main_classes: Additional classes for the main region.
 */
?>

<section id="feature-1" class="feature">
  <?php print $content['feature_1']; ?>
</section>

<section id="feature-2" class="feature">
  <?php print $content['feature_2']; ?>
</section>


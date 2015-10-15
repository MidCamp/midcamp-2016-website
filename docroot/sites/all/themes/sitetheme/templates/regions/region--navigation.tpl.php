<?php
/**
 * @file
 * Returns HTML for a region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728112
 */
?>
<?php /* if ($content): ?>
  <div class="<?php print $classes; ?>">
    <?php print $content; ?>
  </div>
<?php endif; */ ?>
<input type="checkbox" id="toggle-button"><label for="toggle-button" onclick></label>
<div class="menus">
<?php if (!empty($user_nav)): ?>
  <?php print render($user_nav); ?>
<?php endif; ?>
<?php if (!empty($primary_nav)): ?>
  <?php print render($primary_nav); ?>
<?php endif; ?>
</div>

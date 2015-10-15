<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php
    hide($content['comments']);
    hide($content['links']);
    // hide the default image from manage display
    hide($content['field_image']);
    // show the correct image size with a custom variable from preprocess
    print render($sponsor_logo);
    print render($content);
  ?>
  
</article>

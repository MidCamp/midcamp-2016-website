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
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_track']);
    hide($content['field_audience']);
    hide($content['field_presenters']);
  ?>

  <?php if (!empty($content['field_track']['#items'])): ?>
  <div class="session--track">
    <?php foreach ( $content['field_track']['#items'] as $item ) : ?>
      <i class="session--track__icon track--icon__<?php print $item['value']; ?>"></i>
    <?php endforeach ?>
    <?php /* print render($content['field_track']); */ ?>
  </div>
  <?php endif; ?>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php
        print render($title_suffix);
        print render($content['field_audience']);
      ?>
    </header>
  <?php endif; ?>

  <?php
    print render($content);
  ?>

  <footer>
    <?php print render($content['field_presenters']); ?>
  </footer>

</article>

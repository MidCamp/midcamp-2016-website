<?php
/**
 * @file
 * Template for placeholder-page element type.
 * Based on http://codyhouse.co/gem/intro-page-full-width-navigation/.
 */
?>
<main id="cd-main-content">
  <section id="cd-intro">
    <header class="cd-header">

      <?php print drupal_render($element['content']); ?>
    </header>
  </section>
  <!-- cd-intro -->
</main>

<div class="cd-shadow-layer"></div>
<footer class="cd-footer">
  <h1>Email us at <a href="mailto:sponsor@midcamp.org">sponsor@midcamp.org</a> to help sponsor us now.</h1>
  <p>Find us on <a
      href="http://twitter.com/midwestcamp">Twitter</a>, <a
      href="http://facebook.com/midcamp">Facebook</a>, and <a
      href="http://plus.google.com/+MidCampOrg">Google+</a>.</p>
</footer>

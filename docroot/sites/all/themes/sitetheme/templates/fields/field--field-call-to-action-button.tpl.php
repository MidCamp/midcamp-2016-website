<section class="features homepage-call-to-action">
  <?php
  $count = count($items);
  $class_counter = 1;
  foreach ($items as $id => $item):
  ?>
  <div class="l-3up__<?php print ++$id; ?>">
    <div class="button button-blue">
      <?php print render($item); ?>
    </div>
  </div>
  <?php endforeach; ?>
</section>


<section class="highlights homepage-highlights">
  <?php
  $count = count($items);
  $class_counter = 1;
  foreach ($items as $id => $item):
  ?>
  <div class="l-4up__<?php print ++$id; ?>">
    <?php print render($item); ?>
  </div>
  <?php endforeach; ?>
</section>
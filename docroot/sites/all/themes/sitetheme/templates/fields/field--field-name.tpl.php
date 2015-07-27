<?php
$count = count($items);
$class_counter = 1;
foreach ($items as $id => $item):
?>
<h2>
  <?php print render($item); ?>
</h2>
<?php endforeach; ?>

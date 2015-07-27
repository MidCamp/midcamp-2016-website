<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row):
  ++$id;
  if ($id % 5 == 0) {
    $col_number = 5;
  }
  else {
    $col_number = $id % 5;
  }
?>
  <div class="person l-5up__<?php print $col_number; ?> <?php ($id == 1 ? print 'first id-'.$id : print 'id-'.$id); ?>">
    <div class="profile">
      <?php print $row; ?>
    </div>
  </div>
<?php endforeach; ?>

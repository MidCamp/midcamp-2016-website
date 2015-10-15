<?php
/**
 * @file field--field-slideshow-slides.tpl.php
 * Wrap each slideshow item and use appropriate classes
 *
 *
 */
?>
<section class="slider">
  <div class="slideshow flexslider">
    <div class="slides">
    <?php
    $count = count($items);
    $class_counter = 1;
    foreach ($items as $delta => $item):

    //print_r($item);
    // Get the image style URL.
    //$image = image_style_url($elements['field_image'][0]['#image_style'], $elements['field_image'][0]['#item']['uri']);
    //$image = image_style_url('original', $elements['field_image'][0]['#item']['uri']);
    //$image = image_style_url('original', $item['#item']['uri']);

    ?>
      <div class="slide" style="background-image: url('/sites/default/files/<?php print $item['#item']['filename']; ?>');">
      </div>
    <?php endforeach; ?>

    </div>
  </div>
</section>
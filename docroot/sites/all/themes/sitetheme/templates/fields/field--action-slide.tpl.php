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
      foreach ($item['entity']['field_collection_item'] as $element) {
        $image = image_style_url('homepage_slide', $element['field_actionslide'][0]['#item']['uri']);
        $link = l($element['field_slideshow_link']['#object']->field_slideshow_link['und'][0]['title'], $element['field_slideshow_link']['#object']->field_slideshow_link['und'][0]['url']);
        $lede = $element['field_slideshow_lede']['#object']->field_slideshow_lede['und'][0]['safe_value'];
  }
    ?>
      <div class="slide" style="background-image: url('<?php print $image; ?>');">
        <div class="slideshow__link_lede inner">
          <h1 class="field-name-field-slideshow-link"><?php print $link; ?></h1>
          <div class="field-name-field-slideshow-lede"><?php print $lede; ?></div>
        </div>
      </div>
    <?php endforeach; ?>

    </div>
  </div>
</section>
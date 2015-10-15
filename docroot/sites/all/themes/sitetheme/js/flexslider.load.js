(function ($, Drupal, window, document, undefined) {

// Create a behavior for the flexslider slide shows.
Drupal.behaviors.slideshow = {
  attach: function(context, settings) {
    $('.flexslider')
      .flexslider({
        selector: '.slides > .slide',
        slideshow: true,
        //itemWidth: 1200,
        //move : 1,
        directionNav: false,
        controlNav: false,
        animation:'fade',
        slideshowSpeed:7000,
        animationSpeed:700,
        useCSS:true,
        smoothHeight:true,
        pauseOnHover:true,
        mousewheel:false,
        multipleKeyboard:true,
     });

    //$('.flex-direction-nav').appendTo('.inner');
  }
};


})(jQuery, Drupal, this, this.document);

/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

/**
 * Mobile navigation behavior
 * - Add a slideToggle function to show / hide the mobile navigation.
 * - Also add an active class to the mobile nav button.
 *
 */
  Drupal.behaviors.mobile_nav = {
    attach: function(context, settings) {
      // see whether device supports touch events (a bit simplistic, but...)
      var hasTouch = ("ontouchstart" in window);

      // hook touch events for drop-down menus
      // NB: if has touch events, then has standards event handling too
      if (hasTouch && document.querySelectorAll) {

        var i, len, element, dropdowns = document.querySelectorAll("#main-menu li.dropdown > a");

        function menuTouch(event) {
          // toggle flag for preventing click for this link
          var i, noclick = !(this.dataNoclick);

          // reset flag on all links
          for (i = 0; i < dropdowns.length; i++) {
            dropdowns[i].dataNoclick = false;
          }

          // set new flag value and focus on dropdown menu
          this.dataNoclick = noclick;
          this.focus();
        }

        function menuClick(event) {
          // if click isn't wanted, prevent it
          if (this.dataNoclick) {
            event.preventDefault();
          }
        }

        for (i = 0; i < dropdowns.length; i++) {
          element = dropdowns[i];
          element.dataNoclick = false;
          element.addEventListener("touchstart", menuTouch, false);
          element.addEventListener("click", menuClick, false);
        }
      }
    }
  };

  // Drupal.behaviors.equalHeights = {
  //   attach: function (context, settings) {
  //     $('.footer__region', context).once('equal-height', function () {
  //       var obj = $(this).find('.block-views .view-sponsors'),
  //           sponsors = $(this).find('.sponsor');
  //
  //       setTimeout( function() {
  //         var height =  obj.equalHeights();
  //         sponsors.each( function() {
  //           $(this).css('height', height);
  //         });
  //       }, 600);
  //     });
  //   }
  // };

  // Drupal.behaviors.venueFilter = {
  //   attach: function ( context, settings ) {
  //     $('#map-layer-toggle', context).each( function () {
  //       var layers = ([]),
  //           mainEvent = $('#OpenLayers_Layer_Vector_72_root'),
  //           afterParty = $('#OpenLayers_Layer_Vector_56_root'),
  //           lodging = $('#OpenLayers_Layer_Vector_38_root'),
  //           attractions = $('#OpenLayers_Layer_Vector_20_root');
  //
  //       layers.push(mainEvent);
  //       layers.push(afterParty);
  //       layers.push(lodging);
  //       layers.push(attractions);
  //
  //       console.log(layers);
  //
  //       if ( $(mainEvent).is(':visible') ) {
  //         console.log("visible");
  //       } else {
  //         console.log("nothing");
  //       }
  //
  //     });
  //   }
  // };

  // Constructors

  $.fn.equalHeights = function () {
    var maxHeight = 0,
        $this = $(this);

    $this.each( function() {
      var height = $(this).outerHeight(true);

      if ( height > maxHeight ) {
        maxHeight = height;
      }
    });

    return maxHeight;
  };

})(jQuery, Drupal, this, this.document);

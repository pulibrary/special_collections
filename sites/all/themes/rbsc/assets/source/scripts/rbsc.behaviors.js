(function ($) {

  Drupal.behaviors.rbscExhibitionDisplay = {
    attach: function (context) {
      function exhibitionDisplay(endDate){

          var text = "Previously ";

          var day = endDate.split("T");
          var daySplit = day[0].split("-");
          var dUTC = Date.UTC(daySplit[0],daySplit[1],daySplit[2]);
          var now = new Date();
          if (dUTC > now){
            text = "Now ";
          }
          return text;
        }

        endDate = jQuery( ".date-display-end" ).attr( 'content' );
        if (endDate){
          jQuery( ".view-exhibition-view .views-label-title" ).prepend( exhibitionDisplay(endDate) );
        }

    }
  };

  Drupal.behaviors.rbscMobileMenu = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.

      var subMenuToggle = $('.bigdrop').unbind();
      $('.bigdrop ~ .menu').removeClass("show");

      subMenuToggle.on('click', function (e) {
        e.preventDefault();
        var target = $( e.target );
        target.siblings().slideToggle();
      });

    }
  };

  Drupal.behaviors.rbscTabs = {
    attach: function (context, settings) {
      $(document).ready(function () {
          var refClassName = '.-divisions-' + document.referrer.substr(document.referrer.lastIndexOf('/') + 1);

          $('.accordion-tabs').each(function(index) {
            if ($(refClassName).length) {
              $(refClassName).addClass('is-active').next().addClass('is-open').show();
            } else {
              $(this).children('li').first().children('h2').addClass('is-active').next().addClass('is-open').show();
            }
          });

          $('.accordion-tabs').on('click', 'li > h2.tab-link', function(event) {
            event.preventDefault();
            if (!$(this).hasClass('is-active')) {
              var accordionTabs = $(this).closest('.accordion-tabs');
              accordionTabs.find('.is-open').removeClass('is-open').hide();

              $(this).next().toggleClass('is-open').toggle();
              accordionTabs.find('.is-active').removeClass('is-active');
              $(this).addClass('is-active');
            }

          });
        });
    }
  }


 Drupal.behaviors.rbscTrackFooterMenuUsage = {
   attach: function (context) {
     $('.l-region--footer', context).once('rbsc', function () {
       $('.l-region--footer .block a').each(function () {
         $(this).addClass('footer-link');
         $(this).click(function () {
           console.log('trackFooter fired!');
           ga('send', 'event', 'Footer Menu', 'click', $(this).text(),
             {'page': window.location.pathname});
         });
       });
     });
   }
 };

 Drupal.behaviors.rbscTrackTopicUsage = {
   attach: function (context) {
     $('.view-topics', context).once('rbsc', function () {
       $('.view-topics li a').each(function () {
         $(this).addClass('topic-link');
         $(this).click(function () {
           console.log('topic fired!');
           ga('send', 'event', 'Topic Link', 'click', $(this).text(),
             {'page': window.location.pathname});
         });
       });
     });
   }
 };

 Drupal.behaviors.rbscTrackAllSearchUsage = {
    attach: function (context) {

      $('.page-find-all').once('rbsc', function () {

        // for website content block
        $('#rbsc_basic_node_search-panel_pane_1 .item-list .rbsc-local-content-title').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Website Search', 'Position ' + result_position);
            console.log('Website Content Search Result fired! ' + result_position);
          });
        });

        // for blogs block
        $('#pane-blog-search-panel-pane-2 .item-list .field-content').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
            ga('send', 'event', 'All Search', 'Blog Search', 'Position ' + result_position);
            console.log('Blog Search Result fired! ' + result_position);
          });
        });


        $('#rbsc_basic_node_search-panel_pane_1 .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Website Search', 'Bottom');
            });
        });

        $('#pane-blog-search-panel-pane-2 .more-link a').each(function (index, value) {
          var result_position = parseInt(index, 10) + 1;
          $(this).click(function () {
              ga('send', 'event', 'Expand All Search', 'Blog Search', 'Bottom');
            });
        });


      });
    }
  };


})(jQuery);

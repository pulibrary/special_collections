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


})(jQuery);

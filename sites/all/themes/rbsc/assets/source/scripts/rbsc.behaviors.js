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

})(jQuery);

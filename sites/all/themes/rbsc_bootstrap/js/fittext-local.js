


jQuery( document ).ready(function() {

	jQuery(".img-grid .pane-title").fitText(.6);

	/*
	jQuery( ".panels-flexible-region .pane-title" ).each(function() {
  		jQuery( this ).css("background-color", randomColor({hue: 'orange', luminosity: 'dark'}));
	});
	*/
	
	jQuery(".grid-menu-with-sidebar .img-grid .pane-title").fitText(.8);


	jQuery( ".grid-menu-with-sidebar .img-grid .pane-title" ).each(function() {
  		jQuery( this ).css("background-color", randomColor({hue: 'blue'}));
	});


	jQuery( ".field-type-taxonomy-term-reference .field-item a").wrapInner( "<span class='label label-primary'></span>");;

	jQuery( ".thumbnails li" ).removeClass( "span3" ).addClass( "col-xs-6 col-md-3" );

	jQuery( ".external-link a" ).addClass( "btn btn-primary btn-block" );

	jQuery( "form#nav-search" ).on( "submit", function( event ) {
  		event.preventDefault();
  		window.location.href = "/find/all/" + encodeURIComponent(jQuery( "#nav-search-input" ).val());
	});

	jQuery( ".thumbnail .views-field-title").hover(
		  function() {
		    jQuery( this ).find( ".subtitle" ).show();
		  }, function() {
		    jQuery( this ).find( ".subtitle" ).hide();
		  }
		);

	// update hours
	if(jQuery('.rbscstarthour').length > 0 || jQuery('.muddstarthour').length > 0){

		jQuery.getJSON( "/hours.php", function( data ) {
		  var d = new Date();
		  var n = d.getDay();

		  var stime = "";
		  var etime = "";

		  //set Firestone RBSC Hours
		  if(jQuery('.rbscstarthour').length > 0){
			  jQuery.each( data.locations.location[ 10 ].hours.day, function( i, day ) {
		        if ( day.dow == n  ) {
		          stime = day.start.match(/.{1,2}/g) || [];
		          etime = day.end.match(/.{1,2}/g) || [];

				  if(stime[0] > 12){
		          	stime[0] = stime[0]-12;
		          	stime[1] = stime[1] + "pm";
		          }else{
		          	stime[1] = stime[1] + "am"
		          }

		          if(etime[0] > 12){
		          	etime[0] = etime[0]-12;
		          	etime[1] = etime[1] + "pm";
		          }else{
		          	etime[1] = etime[1] + "am"
		          }

		          stime = stime[0] + ":" + stime[1];
		          etime = etime[0] + ":" + etime[1]
		        }
	          });

			  if(stime.length > 0){
			  	jQuery( ".rbscstarthour" ).html( stime );
			    jQuery( ".rbscendhour" ).html( etime );
			  }else{
	            jQuery( ".rbschours a" ).html( "Closed today." );
	          }

		  }

		  //set Mudd Hours
		  if(jQuery('.muddstarthour').length > 0){
			jQuery.each( data.locations.location[ 8 ].hours.day, function( i, day ) {
		      if ( day.dow == n  ) {
		          stime = day.start.match(/.{1,2}/g) || [];
		          etime = day.end.match(/.{1,2}/g) || [];

				  if(stime[0] > 12){
		          	stime[0] = stime[0]-12;
		          	stime[1] = stime[1] + "pm";
		          }else{
		          	stime[1] = stime[1] + "am"
		          }

		          if(etime[0] > 12){
		          	etime[0] = etime[0]-12;
		          	etime[1] = etime[1] + "pm";
		          }else{
		          	etime[1] = etime[1] + "am"
		          }

		          stime = stime[0] + ":" + stime[1];
		          etime = etime[0] + ":" + etime[1]
		        }

	          if(stime.length > 0){
			  	jQuery( ".muddstarthour" ).html( stime );
			    jQuery( ".muddendhour" ).html( etime );
			  }else{
	            jQuery( ".muddhours a" ).html( "Closed today." );
	          }
		  });

		}

	  });	

	}


});

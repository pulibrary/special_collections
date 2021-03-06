


jQuery( document ).ready(function() {


	jQuery(".img-grid").hover(
	  function () {
	    jQuery(this).find(".darken").addClass('darken-hover');
	    jQuery(this).find(".pane-title a").css( "color", "#ffc04c" );
	  },
	  function () {
	    jQuery(this).find(".darken").removeClass('darken-hover');
	    jQuery(this).find(".pane-title a").css( "color", "white" );
	  }
	);


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

	//var d = Date.UTC(2012,02,30);
	//2003-04-13T13:00:00-04:00

	jQuery( ".field-type-taxonomy-term-reference .field-item a").wrapInner( "<span class='label label-primary'></span>");;

	jQuery( ".thumbnails li" ).removeClass( "span3" ).addClass( "col-xs-6 col-md-3" );

	jQuery( ".pane-node-field-policy-web-form .field-item a" ).addClass( "btn btn-primary btn-block" );

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

		jQuery.getJSON( "/service/hours.php", function( data ) {
		  var d = new Date();
		  var n = d.getDay();

		  var stime = "";
		  var etime = "";

					  //set Firestone RBSC Hours
					  if(jQuery('.rbscstarthour').length > 0){
							var locname = "Special Collections";
							jQuery.each( data.locations.location, function( i, l ) {

								if ( l.name == locname  ) {
									jQuery.each( l.hours.day, function( i, val ) {
										if ( val.dow == n.toString()  ) {
											if(!val.start){
                        stime = [];
                        etime = [];
                      }else{
												stime = val.start.match(/.{1,2}/g) || [];
												etime = val.end.match(/.{1,2}/g) || [];

												if(stime[0] > 12){
													stime[0] = stime[0]-12;
													stime[1] = stime[1] + "pm";
												}else{
													stime[1] = stime[1] + "am";
												}

												if(etime[0] > 12){
													etime[0] = etime[0]-12;
													etime[1] = etime[1] + "pm";
												}else{
													etime[1] = etime[1] + "am";
												}

												stime = stime[0] + ":" + stime[1];
												etime = etime[0] + ":" + etime[1];
											}
										}

									});
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
									var locname = "Mudd Manuscript Library";
									jQuery.each( data.locations.location, function( i, l ) {

										if ( l.name == locname  ) {
											jQuery.each( l.hours.day, function( i, val ) {
												if ( val.dow == n.toString()  ) {

													if(!val.start){
														stime = [];
														etime = [];
													}else{

														stime = val.start.match(/.{1,2}/g) || [];
														etime = val.end.match(/.{1,2}/g) || [];

														if(stime[0] > 12){
															stime[0] = stime[0]-12;
															stime[1] = stime[1] + "pm";
														}else{
															stime[1] = stime[1] + "am";
														}

														if(etime[0] > 12){
															etime[0] = etime[0]-12;
															etime[1] = etime[1] + "pm";
														}else{
															etime[1] = etime[1] + "am";
														}

														stime = stime[0] + ":" + stime[1];
														etime = etime[0] + ":" + etime[1];
													}
												}
											});
										}
									});

								if(stime.length > 0){
									jQuery( ".rbscstarthour" ).html( stime );
									jQuery( ".rbscendhour" ).html( etime );
								}else{
											jQuery( ".rbschours a" ).html( "Closed today." );
								}
						}

				  });

				}


			});

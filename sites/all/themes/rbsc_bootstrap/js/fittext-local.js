


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

});

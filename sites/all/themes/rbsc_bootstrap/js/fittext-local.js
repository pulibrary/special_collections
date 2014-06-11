


jQuery( document ).ready(function() {

	jQuery(".panels-flexible-region .pane-title").fitText(.6);
	jQuery( ".panels-flexible-region .pane-title" ).each(function() {
  		jQuery( this ).css("background-color", randomColor({hue: 'orange', luminosity: 'dark'}));
	});

	jQuery( "form#nav-search" ).on( "submit", function( event ) {
  		event.preventDefault();
  		window.location.href = "/find/all/" + encodeURIComponent(jQuery( "#nav-search-input" ).val());
	});

});

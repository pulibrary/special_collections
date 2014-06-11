


jQuery( document ).ready(function() {

	jQuery(".panels-flexible-region .pane-title").fitText(.6);
	//jQuery(".panels-flexible-region .pane-title").css("background-color", randomColor({hue: 'orange'}));
	jQuery( ".panels-flexible-region .pane-title" ).each(function() {
  		jQuery( this ).css("background-color", randomColor({hue: 'orange', luminosity: 'dark'}));
	});

});

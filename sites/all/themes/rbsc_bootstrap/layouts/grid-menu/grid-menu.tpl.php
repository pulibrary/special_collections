<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>

<div class="panel-display grid-menu clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>     
  <div class="row">

  <!-- grid top row -->
  	<div class="col-lg-6 col-md-6 col-sm-12 col-xs-12 img-grid">
      <?php print $content['featured']; ?>
  	</div>
  	<div class="col-lg-3 col-md-3 col-sm-4 col-xs-6 img-grid">
  	  <?php print $content['grid-A']; ?>
  	</div>
  	<div class="col-lg-3 col-md-3 col-sm-4 col-xs-6 img-grid">
  	  <?php print $content['grid-B']; ?>
  	</div>

  <!-- grid bottom row -->
    <div class="col-lg-3 col-md-3 col-sm-4 col-xs-6 img-grid">
  	  <?php print $content['grid-C']; ?>
  	</div>
  	<div class="col-lg-3 col-md-3 col-sm-4 col-xs-6 img-grid">
  	  <?php print $content['grid-D']; ?>
  	</div>
  	<div class="col-lg-3 col-md-3 col-sm-4 col-xs-6 img-grid">
  	  <?php print $content['grid-E']; ?>
  	</div>
  	<div class="col-lg-3 col-md-3 col-sm-4 col-xs-6 img-grid">
  	  <?php print $content['grid-F']; ?>
  	</div>

  </div>
  <div class="row sub-grid">
    <div class="col-sm-12 col-md-6 rbsc-front-page-desc">
      <?php print $content['rbsc-desc']; ?>
    </div>
    <div class="col-sm-12 col-md-6 allblogs">
      <?php print $content['rbsc-news']; ?>
    </div>
  </div>
</div>

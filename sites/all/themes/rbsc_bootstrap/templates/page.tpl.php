<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

    <div id="wrap">

            <div class="thinbar">
              <div class="container">
                  <a href="http://www.princeton.edu">
                      <img src="/<?php print path_to_theme(); ?>/img/pu_logo_small.png" class="pulogo" border="0">
                  </a>
                  <ul class="nav navbar-nav navbar-right" role="navigation">
                    <li class="dropdown">
                      <a href="#" class="dropdown-toggle" data-toggle="dropdown">Accounts <b class="caret"></b></a>
                      <ul class="dropdown-menu">
                        <li><a href="#">Action</a></li>
                        <li><a href="#">Another action</a></li>
                        <li><a href="#">Something else here</a></li>
                        <li><a href="#">Separated link</a></li>
                      </ul>
                    </li>
                    <li class="dropdown">
                      <a href="#" class="dropdown-toggle" data-toggle="dropdown">Help <b class="caret"></b></a>
                      <ul class="dropdown-menu">
                        <li><a href="#">Action</a></li>
                        <li><a href="#">Another action</a></li>
                        <li><a href="#">Something else here</a></li>
                        <li><a href="#">Separated link</a></li>
                      </ul>
                    </li>
                    <li><a href="#">Site Feedback</a></li>
                  </ul>
                  <?php if (!empty($secondary_nav)): ?>
                    <div class="navbar-collapse collapse">
                      <nav role="navigation">                   
                          <?php print render($secondary_nav); ?>
                      </nav>
                    </div>
                  <?php endif; ?>               
                  
              </div>
            </div>

<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
     
        <div class="container">
          <div class="navbar-header">
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
            </button>
            <?php if ($logo): ?>
                    <a class="navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                      <img height="75px" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                    </a>
            <?php endif; ?>
              
            <?php if (!empty($site_name)): ?>
              <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
            <?php endif; ?>
          </div>
            
            <?php if (!empty($primary_nav) || !empty($page['navigation'])): ?>
              <div class="navbar-collapse collapse">
                <h2>RARE BOOKS <small>AND</small> SPECIAL COLLECTIONS</h2>
                <nav role="navigation">
                  <?php if (!empty($primary_nav)): ?>
                    <?php print render($primary_nav); ?>
                    <form id="nav-search">
                      <div class="input-group">
                        <input type="text" id="nav-search-input" placeholder="Search all of RBSC" class="form-control">
                        <span class="input-group-btn">
                          <button class="btn btn-default" type="submit"><span class="glyphicon glyphicon-search"></span></button>
                        </span>
                      </div><!-- /input-group --> 
                    </form>    
                  <?php endif; ?>
                  <?php if (!empty($page['navigation'])): ?>
                    <?php print render($page['navigation']); ?>
                  <?php endif; ?>
                </nav>
              </div>
            <?php endif; ?>
            <!-- Fixed Logo -->
            
          </div><!--/.nav-collapse -->
          

     
</header>

<?php /* ?>
  
  <header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
    <div class="container">
      <div class="navbar-header">
        <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
        <?php endif; ?>
  
        <?php if (!empty($site_name)): ?>
        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
        <?php endif; ?>
  
        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      </div>
  
      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="navbar-collapse collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>
  </header>
  <?php */?>
  <div class="main-container container">
  
    <header role="banner" id="page-header">
      <?php if (!empty($site_slogan)): ?>
        <p class="lead"><?php print $site_slogan; ?></p>
      <?php endif; ?>
  
      <?php print render($page['header']); ?>
    </header> <!-- /#page-header -->
  
    <div class="row">
  
      <?php if (!empty($page['sidebar_first'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>
  
      <section<?php print $content_column_class; ?>>
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>
        <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
          <h1 class="page-header"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
      </section>
  
      <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>
  
    </div>
  </div>
</div><!-- end wrap -->
    

  <?php // print render($page['footer']); ?>
  <div id="footer">
      <div class="container">
        <div class="row">
          <div class="col-md-3 v-rule">
            <?php print render($page['footer_first']); ?>
          </div>
          <div class="col-md-2 v-rule">
            <?php print render($page['footer_second']); ?>
           
            </div>
          
          <div class="col-md-2 v-rule">
            <?php print render($page['footer_third']); ?>
            
            </div>
          
          <div class="col-md-2 v-rule">
            <?php print render($page['footer_fourth']); ?>
          </div>
          <div class="col-md-3">
            <h2 class="pul-title">Princeton University Library</h2>
            <div class="social-media">
              <a href="https://www.facebook.com/RBSC.Firestone" title="Friend us on Facebook">
                <img src="/<?php print path_to_theme(); ?>/img/facebook.png" alt="Facebook" border="0">
              </a>
              <a href="https://twitter.com/PrincetonRBSC" title="Follow us on Twitter">
                <img src="/<?php print path_to_theme(); ?>/img/twitter.png" alt="Twitter" border="0">
              </a>
              <a href="http://blogs.princeton.edu/rbsc/" title="RBSC Wordpress Blogs">
                <img src="/<?php print path_to_theme(); ?>/img/wordpress.png" alt="RBSC Wordpress Blogs" border="0">
              </a>
              <a href="/about/friends" title="Friends of Princeton University Library">
                <img src="/<?php print path_to_theme(); ?>/img/friends.png" alt="Friends of Princeton University Library" border="0">
              </a>
            </div>
            <div id="pu-footer-logo"><a href="http://www.princeton.edu"><img src="/<?php print path_to_theme(); ?>/img/pu_logo_trans.png" border="0"></a></div>
            <div id="university-copyright-footer" class="text-muted">© 2013 The Trustees of Princeton University. All rights reserved.</div>
          </div>
        </div>
      </div>



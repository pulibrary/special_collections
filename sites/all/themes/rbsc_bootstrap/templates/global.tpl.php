<?php
// $Id: global_nav.tpl.php,v 1.5 2014/01/24 05:05:59 webchick Exp $
/**
* @file
* Default theme implementation to present a global, thin navigation bar
* for Princeton University Library sites.
*
* Available variables: none
*/
?>

      <div class="thinbar">
            <div class="container">
                <a href="http://www.princeton.edu">
                    <img src="img/pul_logo_small.png" class="pulogo" border="0">
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
            </div>
      </div>
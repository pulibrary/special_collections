<?php

// Plugin definition
$plugin = array(
  'title' => t('Grid Menu with Sidebar'),
  'category' => t('Grid Menu'),
  'icon' => 'grid-menu-with-sidebar.png',
  'theme' => 'grid-menu-with-sidebar',
  'css' => 'grid-menu-with-sidebar.css',
  'regions' => array(
    'sidebar' => t('Sidebar'),
    'feature-left' => t('Feature Left Side'),
    'feature-right' => t('Feature Right Side'),
    'grid-A' => t('Grid A'),
    'grid-B' => t('Grid B'),
    'grid-C' => t('Grid C'),
    'grid-D' => t('Grid D'),
    'loc-desc' => t('Location Description'),
    'loc-news' => t('Location New and Notable')
  ),
);

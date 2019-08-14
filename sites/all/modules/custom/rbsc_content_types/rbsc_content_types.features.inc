<?php

/**
 * @file
 * rbsc_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbsc_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rbsc_content_types_node_info() {
  $items = array(
    'collection' => array(
      'name' => t('Collection'),
      'base' => 'node_content',
      'description' => t('Content type for individual collection in RBSC.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'collection_strength' => array(
      'name' => t('Topic'),
      'base' => 'node_content',
      'description' => t('Topic and Subject tags that can be associated with Divisions.'),
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => t('Enter a topic or subject area to associate with Divisions and Collections'),
    ),
    'digital_humanities' => array(
      'name' => t('Digital Projects'),
      'base' => 'node_content',
      'description' => t('Digital Humanities Projects that use RBSC content or data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'division_history' => array(
      'name' => t('Division History'),
      'base' => 'node_content',
      'description' => t('This is a long description of a Division'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'exhibition' => array(
      'name' => t('Exhibition'),
      'base' => 'node_content',
      'description' => t('RBSC Exhibition Description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq_importer' => array(
      'name' => t('FAQ Importer'),
      'base' => 'node_content',
      'description' => t('LibAnswers FAQ Importer'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'holdings' => array(
      'name' => t('Holdings'),
      'base' => 'node_content',
      'description' => t('Division holdings based on collections or topics, for items that have no associated collection.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media_group' => array(
      'name' => t('Media Group'),
      'base' => 'node_content',
      'description' => t('This is a way to group media and images into a grid display.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'online_collections' => array(
      'name' => t('Digital Highlights'),
      'base' => 'node_content',
      'description' => t('Websites featuring digitized content from our collections, Digital Humanities projects, Collaborative Projects, Projects that use but may not feature our collections.  The term "collection" here is used to group related items which may or may not be related to actual RBSC Collections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('Publications include Chronicle Issue, Collection Catalog, Exhibition Catalog, Non-departmental (i.e., University Press)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rbsc_rare_books_topics_importer' => array(
      'name' => t('RBSC Rare Books Topics Importer'),
      'base' => 'node_content',
      'description' => t('Importer for Topics from Steve Ferguson\'s Guide to Special Collections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rbsc_staff_member' => array(
      'name' => t('RBSC Staff Member'),
      'base' => 'node_content',
      'description' => t('Basic staff directory entry. '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'research_guides' => array(
      'name' => t('Research Guide'),
      'base' => 'node_content',
      'description' => t('Guides to one or more collections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'search_interface' => array(
      'name' => t('Search Interface'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a search form interface that submits to an external Database via GET method.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

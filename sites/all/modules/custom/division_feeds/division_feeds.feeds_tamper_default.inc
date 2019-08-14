<?php

/**
 * @file
 * division_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function division_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'rbsc_feeds-url-strip_tags';
  $feeds_tamper->importer = 'rbsc_feeds';
  $feeds_tamper->source = 'url';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '<p><a><em><strong><bold>',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['rbsc_feeds-url-strip_tags'] = $feeds_tamper;

  return $export;
}

<?php

/**
 * @file
 * rbsc_basic_node_search_index.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbsc_basic_node_search_index_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function rbsc_basic_node_search_index_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "rbsc_solr_core",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "article" : "article",
              "page" : "page",
              "collection" : "collection",
              "database" : "database",
              "online_collections" : "online_collections",
              "digital_humanities" : "digital_humanities",
              "division" : "division",
              "exhibition" : "exhibition",
              "faq" : "faq",
              "holdings" : "holdings",
              "location" : "location",
              "policy" : "policy",
              "publication" : "publication",
              "rbsc_staff_member" : "rbsc_staff_member",
              "services" : "services",
              "collection_strength" : "collection_strength"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "source:field_related_division" : "source:field_related_division",
              "source:field_division_holdings" : "source:field_division_holdings",
              "source:field_see_also" : "source:field_see_also"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Division Holdings",
                "type" : "fulltext",
                "fields" : [
                  "title",
                  "field_division_holdings",
                  "field_division_holdings:body:value"
                ],
                "description" : "A Fulltext aggregation of the following fields: Title, Division Holdings, Division Holdings \\u00bb The main body text \\u00bb Text."
              }
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_rbsc_faq_question" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_rbsc_faq_question" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_division_holdings:body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_rbsc_faq_question" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_rbsc_faq_question" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:format" : { "type" : "string" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text", "boost" : "2.0" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_author" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_collection_strength:body:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_collection_strength:field_division" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_collection_strength:field_division_holdings" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_collection_strength:field_location" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_collection_strength:field_see_also" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_collection_strength:field_see_also:body:value" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_collection_strength:field_see_also:title" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_collection_strength:field_service" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_collection_strength:nid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_collection_strength:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_collection_strengths" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_core_collections" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_division:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_division_holdings" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_division_holdings:body:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_division_holdings:field_see_also" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_division_holdings:nid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_division_holdings:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_exhibition_curator" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_faqtags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publication_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_rbsc_faq_answer:value" : { "type" : "text" },
        "field_rbsc_faq_question" : { "type" : "text", "boost" : "2.0" },
        "field_related_division" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_see_also" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_sort_weight" : { "type" : "integer" },
        "field_staff_division:name" : { "type" : "text", "boost" : "2.0" },
        "field_staff_section:name" : { "type" : "text", "boost" : "2.0" },
        "field_staff_unit:name" : { "type" : "text", "boost" : "2.0" },
        "field_sub_title" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "promote" : { "type" : "boolean" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "8.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function rbsc_basic_node_search_index_default_search_api_server() {
  $items = array();
  $items['rbsc_solr_core'] = entity_import('search_api_server', '{
    "name" : "RBSC Solr Core",
    "machine_name" : "rbsc_solr_core",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash_form" : [],
      "site_hash" : false,
      "scheme" : "http",
      "host" : "library-solr-prod.princeton.edu",
      "port" : "8983",
      "path" : "\\/solr\\/special-collections-prod",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 1,
      "retrieve_data" : 1,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "4",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0,
      "autocorrect_spell" : 1,
      "autocorrect_suggest_words" : 1
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

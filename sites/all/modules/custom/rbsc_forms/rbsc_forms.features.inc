<?php
/**
 * @file
 * rbsc_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbsc_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rbsc_forms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function rbsc_forms_default_entityform_type() {
  $items = array();
  $items['ask_a_question'] = entity_import('entityform_type', '{
    "type" : "ask_a_question",
    "label" : "Ask A Question",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submission_rules" : [],
      "notification_text" : "",
      "notify_emails" : "",
      "validation_rules" : [],
      "submit_button_text" : "",
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3" },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EAsk anything...\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['rights_and_permissions'] = entity_import('entityform_type', '{
    "type" : "rights_and_permissions",
    "label" : "Rights and Permissions",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submission_rules" : {
        "rules_email_entityform_submitter" : "rules_email_entityform_submitter",
        "rules_email_entityform_admin" : "rules_email_entityform_admin"
      },
      "notification_text" : "Thank you for your request.",
      "notify_emails" : "shaune@princeton.edu",
      "validation_rules" : [],
      "submit_button_text" : "",
      "submission_page_title" : "Thank you.",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EYou will be hearing from us shortly.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3" },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EPlease fill this out.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function rbsc_forms_node_info() {
  $items = array(
    'web_form' => array(
      'name' => t('Entity Form'),
      'base' => 'node_content',
      'description' => t('This content type can be used as a general contact page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

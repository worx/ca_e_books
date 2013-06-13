<?php
/**
 * @file
 * ca_e_books.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_e_books_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_e_books_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_e_books_node_info() {
  $items = array(
    'ca_ebook' => array(
      'name' => t('E-Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function ca_e_books_weight_features_default_settings() {
  $settings = array();

  $settings['ca_ebook'] = array(
    'enabled' => 1,
    'range' => 100,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}

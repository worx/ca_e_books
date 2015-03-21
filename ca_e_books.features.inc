<?php
/**
 * @file
 * ca_e_books.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_e_books_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_e_books_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_e_books_image_default_styles() {
  $styles = array();

  // Exported image style: ebook_node.
  $styles['ebook_node'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'ebook_node',
  );

  return $styles;
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
  drupal_alter('node_info', $items);
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

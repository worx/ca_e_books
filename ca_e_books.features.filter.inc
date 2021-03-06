<?php
/**
 * @file
 * ca_e_books.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ca_e_books_filter_default_formats() {
  $formats = array();

  // Exported format: iframe.
  $formats['iframe'] = array(
    'format' => 'iframe',
    'name' => 'iframe',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <iframe>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}

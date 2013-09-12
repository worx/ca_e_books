<?php
/**
 * @file
 * ca_e_books.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_e_books_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ca_ebook content'.
  $permissions['create ca_ebook content'] = array(
    'name' => 'create ca_ebook content',
    'roles' => array(
      'administrator' => 'administrator',
      'ebook admin' => 'ebook admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ca_ebook content'.
  $permissions['delete any ca_ebook content'] = array(
    'name' => 'delete any ca_ebook content',
    'roles' => array(
      'administrator' => 'administrator',
      'ebook admin' => 'ebook admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ca_ebook content'.
  $permissions['delete own ca_ebook content'] = array(
    'name' => 'delete own ca_ebook content',
    'roles' => array(
      'administrator' => 'administrator',
      'ebook admin' => 'ebook admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ca_ebook content'.
  $permissions['edit any ca_ebook content'] = array(
    'name' => 'edit any ca_ebook content',
    'roles' => array(
      'administrator' => 'administrator',
      'ebook admin' => 'ebook admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ca_ebook content'.
  $permissions['edit own ca_ebook content'] = array(
    'name' => 'edit own ca_ebook content',
    'roles' => array(
      'administrator' => 'administrator',
      'ebook admin' => 'ebook admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format iframe'.
  $permissions['use text format iframe'] = array(
    'name' => 'use text format iframe',
    'roles' => array(
      'administrator' => 'administrator',
      'ebook admin' => 'ebook admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  return $permissions;
}

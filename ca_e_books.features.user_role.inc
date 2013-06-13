<?php
/**
 * @file
 * ca_e_books.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_e_books_user_default_roles() {
  $roles = array();

  // Exported role: ebook admin.
  $roles['ebook admin'] = array(
    'name' => 'ebook admin',
    'weight' => 6,
    'machine_name' => 'ebook_admin',
  );

  return $roles;
}

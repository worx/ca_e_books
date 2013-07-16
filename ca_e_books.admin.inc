<?php

/** 
 * @file
 * CA_E_Books admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the 
 * actual feature.
 */

/**
 * Defines the menu for overriding blog feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_e_books_settings_form() {
  $form = array();

  $form['ca_e_books_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => variable_get('ca_e_books_panel_title', 'E-Books'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_e_books_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_e_books_menu_title', 'E-Books'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['actions'] = array(
    '#type' => 'actions',
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  // We are adding the system_settings_form_submit manually instead of
  // returning system_settings_form($form) in our return statement.
  // This allows for us to add our submit handler after the
  // system_settings_form_submit. hook_form_alter could not handle this for us.
  $form['#submit'][] = 'system_settings_form_submit';
  $form['#submit'][] = 'ca_e_books_settings_form_submit';

  return $form;
}

/**
 * Handles form submission data from 'ca_e_books_settings_form'.
 *
 * Determines if we should rebuild the menu router based on form data.
 */
function ca_e_books_settings_form_submit($form, &$form_state) {
  $old_title = $form['ca_e_books_menu_title']['#default_value'];
  $new_title = $form_state['values']['ca_e_books_menu_title'];
  if ($old_title != $new_title) {
    menu_rebuild();
  }
}

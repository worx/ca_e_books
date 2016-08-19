<?php
/**
 * @file
 * ca_e_books.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_e_books_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_e_books_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'CA E-Book: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-ebook-node ca-ebook-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_ebook' => 'ca_ebook',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_bar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_bar' => array(
        'type' => 'region',
        'title' => 'Right Bar',
        'width' => '305',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_bar' => NULL,
      'right_bar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cc7a71c6-cfd5-4d73-8f59-67984a8bd3b5';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-65ceab36-a284-4474-8b00-0511ccc0cee0';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_main_image_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65ceab36-a284-4474-8b00-0511ccc0cee0';
  $display->content['new-65ceab36-a284-4474-8b00-0511ccc0cee0'] = $pane;
  $display->panels['center'][0] = 'new-65ceab36-a284-4474-8b00-0511ccc0cee0';
  $pane = new stdClass();
  $pane->pid = 'new-40d9f833-a4ac-4dea-90dd-8e26de367a3a';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_additional_images_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '40d9f833-a4ac-4dea-90dd-8e26de367a3a';
  $display->content['new-40d9f833-a4ac-4dea-90dd-8e26de367a3a'] = $pane;
  $display->panels['center'][1] = 'new-40d9f833-a4ac-4dea-90dd-8e26de367a3a';
  $pane = new stdClass();
  $pane->pid = 'new-325469dc-e35e-4f53-a800-4b9de79638f9';
  $pane->panel = 'center';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '325469dc-e35e-4f53-a800-4b9de79638f9';
  $display->content['new-325469dc-e35e-4f53-a800-4b9de79638f9'] = $pane;
  $display->panels['center'][2] = 'new-325469dc-e35e-4f53-a800-4b9de79638f9';
  $pane = new stdClass();
  $pane->pid = 'new-e424e386-bdba-4cd2-9d78-8078b1001460';
  $pane->panel = 'right_bar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_ebook_embed_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e424e386-bdba-4cd2-9d78-8078b1001460';
  $display->content['new-e424e386-bdba-4cd2-9d78-8078b1001460'] = $pane;
  $display->panels['right_bar'][0] = 'new-e424e386-bdba-4cd2-9d78-8078b1001460';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_e_books_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_e_books_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA E-Book: Responsive Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-ebook-node-responsive ca-ebook-node-responsive-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_ebook' => 'ca_ebook',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bar',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '77.05417575419726',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_bar' => array(
        'type' => 'region',
        'title' => 'Left Bar',
        'width' => '22.94582424580275',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_bar' => NULL,
      'one_main' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4ad91744-6783-412c-b5d6-86a77714af27';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-db879a63-b282-46a7-a993-f16988e70d2e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_main_image_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db879a63-b282-46a7-a993-f16988e70d2e';
  $display->content['new-db879a63-b282-46a7-a993-f16988e70d2e'] = $pane;
  $display->panels['middle'][0] = 'new-db879a63-b282-46a7-a993-f16988e70d2e';
  $pane = new stdClass();
  $pane->pid = 'new-daacf62d-f94d-4dbf-934e-33fe174e7a47';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_additional_images_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'daacf62d-f94d-4dbf-934e-33fe174e7a47';
  $display->content['new-daacf62d-f94d-4dbf-934e-33fe174e7a47'] = $pane;
  $display->panels['middle'][1] = 'new-daacf62d-f94d-4dbf-934e-33fe174e7a47';
  $pane = new stdClass();
  $pane->pid = 'new-7ae0568b-9906-436c-ab31-b4ab342bdba8';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7ae0568b-9906-436c-ab31-b4ab342bdba8';
  $display->content['new-7ae0568b-9906-436c-ab31-b4ab342bdba8'] = $pane;
  $display->panels['middle'][2] = 'new-7ae0568b-9906-436c-ab31-b4ab342bdba8';
  $pane = new stdClass();
  $pane->pid = 'new-3289bd6b-251b-45bb-abcb-7ca6612ba7c6';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_ebook_embed_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3289bd6b-251b-45bb-abcb-7ca6612ba7c6';
  $display->content['new-3289bd6b-251b-45bb-abcb-7ca6612ba7c6'] = $pane;
  $display->panels['middle'][3] = 'new-3289bd6b-251b-45bb-abcb-7ca6612ba7c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_e_books_node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_636f0f2c-5165-475c-91e8-b73ffa3439e3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora E-Book: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-ebook-node ca-ebook-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_ebook' => 'ca_ebook',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_bar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_bar' => array(
        'type' => 'region',
        'title' => 'Right Bar',
        'width' => '305',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_bar' => NULL,
      'right_bar' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cc7a71c6-cfd5-4d73-8f59-67984a8bd3b5';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-65ceab36-a284-4474-8b00-0511ccc0cee0';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_main_image_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65ceab36-a284-4474-8b00-0511ccc0cee0';
  $display->content['new-65ceab36-a284-4474-8b00-0511ccc0cee0'] = $pane;
  $display->panels['first-first'][0] = 'new-65ceab36-a284-4474-8b00-0511ccc0cee0';
  $pane = new stdClass();
  $pane->pid = 'new-40d9f833-a4ac-4dea-90dd-8e26de367a3a';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_additional_images_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '40d9f833-a4ac-4dea-90dd-8e26de367a3a';
  $display->content['new-40d9f833-a4ac-4dea-90dd-8e26de367a3a'] = $pane;
  $display->panels['first-first'][1] = 'new-40d9f833-a4ac-4dea-90dd-8e26de367a3a';
  $pane = new stdClass();
  $pane->pid = 'new-325469dc-e35e-4f53-a800-4b9de79638f9';
  $pane->panel = 'first-first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '325469dc-e35e-4f53-a800-4b9de79638f9';
  $display->content['new-325469dc-e35e-4f53-a800-4b9de79638f9'] = $pane;
  $display->panels['first-first'][2] = 'new-325469dc-e35e-4f53-a800-4b9de79638f9';
  $pane = new stdClass();
  $pane->pid = 'new-e424e386-bdba-4cd2-9d78-8078b1001460';
  $pane->panel = 'first-second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_ebook_embed_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e424e386-bdba-4cd2-9d78-8078b1001460';
  $display->content['new-e424e386-bdba-4cd2-9d78-8078b1001460'] = $pane;
  $display->panels['first-second'][0] = 'new-e424e386-bdba-4cd2-9d78-8078b1001460';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_636f0f2c-5165-475c-91e8-b73ffa3439e3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_83313f61-f5c5-4304-9d02-c50a616c239e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora E-Book: Responsive Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-ebook-node-responsive ca-ebook-node-responsive-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_ebook' => 'ca_ebook',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bar',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '77.05417575419726',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_bar' => array(
        'type' => 'region',
        'title' => 'Left Bar',
        'width' => '22.94582424580275',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_bar' => NULL,
      'one_main' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4ad91744-6783-412c-b5d6-86a77714af27';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-db879a63-b282-46a7-a993-f16988e70d2e';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_main_image_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db879a63-b282-46a7-a993-f16988e70d2e';
  $display->content['new-db879a63-b282-46a7-a993-f16988e70d2e'] = $pane;
  $display->panels['first-first'][0] = 'new-db879a63-b282-46a7-a993-f16988e70d2e';
  $pane = new stdClass();
  $pane->pid = 'new-daacf62d-f94d-4dbf-934e-33fe174e7a47';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_node-ca_ebook_additional_images_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'daacf62d-f94d-4dbf-934e-33fe174e7a47';
  $display->content['new-daacf62d-f94d-4dbf-934e-33fe174e7a47'] = $pane;
  $display->panels['first-first'][1] = 'new-daacf62d-f94d-4dbf-934e-33fe174e7a47';
  $pane = new stdClass();
  $pane->pid = 'new-7ae0568b-9906-436c-ab31-b4ab342bdba8';
  $pane->panel = 'first-first';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7ae0568b-9906-436c-ab31-b4ab342bdba8';
  $display->content['new-7ae0568b-9906-436c-ab31-b4ab342bdba8'] = $pane;
  $display->panels['first-first'][2] = 'new-7ae0568b-9906-436c-ab31-b4ab342bdba8';
  $pane = new stdClass();
  $pane->pid = 'new-3289bd6b-251b-45bb-abcb-7ca6612ba7c6';
  $pane->panel = 'first-first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ca_ebook_embed_code';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3289bd6b-251b-45bb-abcb-7ca6612ba7c6';
  $display->content['new-3289bd6b-251b-45bb-abcb-7ca6612ba7c6'] = $pane;
  $display->panels['first-first'][3] = 'new-3289bd6b-251b-45bb-abcb-7ca6612ba7c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_83313f61-f5c5-4304-9d02-c50a616c239e'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_e_books_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_ebook_add';
  $page->task = 'page';
  $page->admin_title = 'CA Ebook Add';
  $page->admin_description = '';
  $page->path = 'ebooks/add_new';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 63348750,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add E-Book',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_ebook_add__aurora_ebook_add_ebook';
  $handler->task = 'page';
  $handler->subtask = 'ca_ebook_add';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Ebook: Add Ebook',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'aurora_ebook_add_ebook',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f6459af-6fad-4632-bdac-a360d73b1da8';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06d85026-2184-4f2d-9234-59a476f997cf';
  $pane->panel = 'first-first';
  $pane->type = 'context_admin';
  $pane->subtype = 'context_admin:node_create_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_ebook',
    'context_admin_use_node_edit' => 0,
    'context' => 'empty',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '06d85026-2184-4f2d-9234-59a476f997cf';
  $display->content['new-06d85026-2184-4f2d-9234-59a476f997cf'] = $pane;
  $display->panels['first-first'][0] = 'new-06d85026-2184-4f2d-9234-59a476f997cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-06d85026-2184-4f2d-9234-59a476f997cf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_ebook_add_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_ebook_add';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_ebook',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_ebook_add'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_ebook_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Ebook: Admin';
  $page->admin_description = '';
  $page->path = 'ebooks/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 63348750,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Admin',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '20',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_ebook_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_ebook_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Ebook: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-ebook-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Ebooks';
  $display->uuid = 'f911c4f3-6621-45c6-afde-d2dd6ebcd7ba';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_admin-ca_ebook_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $display->content['new-69af64d3-1e35-491b-b40c-a1e7cf302e9b'] = $pane;
  $display->panels['center'][0] = 'new-69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_ebook_admin__panel_context_3f4aab3d-046b-46ae-bea8-a42b2b30c055';
  $handler->task = 'page';
  $handler->subtask = 'ca_ebook_admin';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Ebook: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-ebook-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Ebooks';
  $display->uuid = 'f911c4f3-6621-45c6-afde-d2dd6ebcd7ba';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $pane->panel = 'first-first';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_admin-ca_ebook_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $display->content['new-69af64d3-1e35-491b-b40c-a1e7cf302e9b'] = $pane;
  $display->panels['first-first'][0] = 'new-69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-69af64d3-1e35-491b-b40c-a1e7cf302e9b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_ebook_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_ebook_list';
  $page->task = 'page';
  $page->admin_title = 'CA Ebook: List';
  $page->admin_description = '';
  $page->path = 'ebooks/view';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'E-Books',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_ebook_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_ebook_list';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Ebook: List',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-ebook-list ca-ebook-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5e2b9f45-aa46-4977-b161-3fff9e89135c';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_list-ca_ebook_list_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $display->content['new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1'] = $pane;
  $display->panels['middle'][0] = 'new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_ebook_list__panel_context_83c005a6-0a5d-4467-b3fa-72e3a7a2d7f1';
  $handler->task = 'page';
  $handler->subtask = 'ca_ebook_list';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Ebook: List',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-ebook-list ca-ebook-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5e2b9f45-aa46-4977-b161-3fff9e89135c';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_list-ca_ebook_list_template_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $display->content['new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1'] = $pane;
  $display->panels['middle'][0] = 'new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9a25c3fa-327d-4f64-bb06-84f60e7b5ea1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_ebook_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_ebook_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Ebook Sort';
  $page->admin_description = '';
  $page->path = 'ebooks/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 63348750,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_ebook_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_ebook_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-ebook-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Ebooks';
  $display->uuid = '000d3464-2c9b-47df-a66c-528e378eac46';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b304d18d-2495-461b-865a-5a90062245c8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_e_book_admin-ca_ebook_sort';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b304d18d-2495-461b-865a-5a90062245c8';
  $display->content['new-b304d18d-2495-461b-865a-5a90062245c8'] = $pane;
  $display->panels['middle'][0] = 'new-b304d18d-2495-461b-865a-5a90062245c8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b304d18d-2495-461b-865a-5a90062245c8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_ebook_sort'] = $page;

  return $pages;

}

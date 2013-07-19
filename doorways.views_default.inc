<?php
/**
 * @file
 * doorways.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function doorways_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'doorways';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Doorways';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Doorways';
  $handler->display->display_options['css_class'] = 'doorways';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_doorway_image']['id'] = 'field_doorway_image';
  $handler->display->display_options['fields']['field_doorway_image']['table'] = 'field_data_field_doorway_image';
  $handler->display->display_options['fields']['field_doorway_image']['field'] = 'field_doorway_image';
  $handler->display->display_options['fields']['field_doorway_image']['label'] = '';
  $handler->display->display_options['fields']['field_doorway_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doorway_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_doorway_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doorway_image']['settings'] = array(
    'image_style' => 'doorway',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<strong><em><a>';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_doorway_link']['id'] = 'field_doorway_link';
  $handler->display->display_options['fields']['field_doorway_link']['table'] = 'field_data_field_doorway_link';
  $handler->display->display_options['fields']['field_doorway_link']['field'] = 'field_doorway_link';
  $handler->display->display_options['fields']['field_doorway_link']['label'] = '';
  $handler->display->display_options['fields']['field_doorway_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doorway_link']['element_label_colon'] = FALSE;
  /* Field: Content: Link Text */
  $handler->display->display_options['fields']['field_doorway_link_text']['id'] = 'field_doorway_link_text';
  $handler->display->display_options['fields']['field_doorway_link_text']['table'] = 'field_data_field_doorway_link_text';
  $handler->display->display_options['fields']['field_doorway_link_text']['field'] = 'field_doorway_link_text';
  $handler->display->display_options['fields']['field_doorway_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_doorway_link_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doorway_link_text']['alter']['text'] = '<a href="[field_doorway_link]">[field_doorway_link_text]</a>';
  $handler->display->display_options['fields']['field_doorway_link_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doorway_link_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_doorway_link_text']['hide_empty'] = TRUE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'doorway' => 'doorway',
  );

  /* Display: List */
  $handler = $view->new_display('block', 'List', 'list');

  /* Display: Sort */
  $handler = $view->new_display('page', 'Sort', 'sort');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'node-sort';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_doorway_image' => 'field_doorway_image',
    'body' => 'body',
    'field_doorway_link' => 'field_doorway_link',
    'field_doorway_link_text' => 'field_doorway_link_text',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doorway_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doorway_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doorway_link_text' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_doorway_image']['id'] = 'field_doorway_image';
  $handler->display->display_options['fields']['field_doorway_image']['table'] = 'field_data_field_doorway_image';
  $handler->display->display_options['fields']['field_doorway_image']['field'] = 'field_doorway_image';
  $handler->display->display_options['fields']['field_doorway_image']['label'] = '';
  $handler->display->display_options['fields']['field_doorway_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doorway_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_doorway_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doorway_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['path'] = 'sort/doorways';
  $export['doorways'] = $view;

  return $export;
}

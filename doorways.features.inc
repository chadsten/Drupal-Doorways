<?php
/**
 * @file
 * doorways.features.inc
 */

/**
 * Implements hook_views_api().
 */
function doorways_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function doorways_image_default_styles() {
  $styles = array();

  // Exported image style: doorway.
  $styles['doorway'] = array(
    'name' => 'doorway',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 424,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function doorways_node_info() {
  $items = array(
    'doorway' => array(
      'name' => t('Doorway'),
      'base' => 'node_content',
      'description' => t('Use <em>Doorways</em> to display links to key features and pages on your site from your home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * riff_music_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function riff_music_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function riff_music_content_image_default_styles() {
  $styles = array();

  // Exported image style: art-medium
  $styles['art-medium'] = array(
    'name' => 'art-medium',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '440',
          'height' => '440',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: art-thumbnail
  $styles['art-thumbnail'] = array(
    'name' => 'art-thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function riff_music_content_node_info() {
  $items = array(
    'album' => array(
      'name' => t('Album'),
      'base' => 'node_content',
      'description' => t('Use an album to collect songs together.'),
      'has_title' => '1',
      'title_label' => t('Album name'),
      'help' => '',
    ),
    'song' => array(
      'name' => t('Song'),
      'base' => 'node_content',
      'description' => t('Use a song to post your music.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

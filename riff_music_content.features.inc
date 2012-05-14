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

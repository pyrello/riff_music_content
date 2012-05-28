<?php
/**
 * @file
 * riff_music_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function riff_music_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_album_download_details|node|album|form';
  $field_group->group_name = 'group_album_download_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'album';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Download Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_album_download_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Download Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_album_download_details|node|album|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_song_download_details|node|song|form';
  $field_group->group_name = 'group_song_download_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Download Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_song_download_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Download Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_song_download_details|node|song|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_song_title_path|node|song|form';
  $field_group->group_name = 'group_song_title_path';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title and Path',
    'weight' => '0',
    'children' => array(
      0 => 'title',
      1 => 'path',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title and Path',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_song_title_path|node|song|form'] = $field_group;

  return $export;
}

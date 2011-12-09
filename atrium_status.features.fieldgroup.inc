<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function atrium_status_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_images
  $groups['status-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'status',
    'group_name' => 'group_images',
    'label' => 'Add Images',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'hidden',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_images',
    ),
  );

  // Exported group: group_video
  $groups['status-group_video'] = array(
    'group_type' => 'standard',
    'type_name' => 'status',
    'group_name' => 'group_video',
    'label' => 'Add Video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'hidden',
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_videolink',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Images');
  t('Add Video');

  return $groups;
}

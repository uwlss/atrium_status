<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_status_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function atrium_status_imagecache_default_presets() {
  $items = array(
    'cs_medium' => array(
      'presetname' => 'cs_medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '300',
            'height' => '225',
          ),
        ),
      ),
    ),
    'cs_small' => array(
      'presetname' => 'cs_small',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '90',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function atrium_status_node_info() {
  $items = array(
    'status' => array(
      'name' => t('Status update'),
      'module' => 'features',
      'description' => t('What are you up to? What are you thinking about? What\'s new? Quick status updates give you a chance to quickly share your thoughts. You can easily include media and links.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_status_views_api() {
  return array(
    'api' => '2',
  );
}

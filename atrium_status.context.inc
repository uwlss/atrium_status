<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_status_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'status_listing';
  $context->description = '';
  $context->tag = 'Status';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'status' => 'status',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'status_listing' => 'status_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-status_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'status_comments-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'status',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Status');
  $export['status_listing'] = $context;

  return $export;
}

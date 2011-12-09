<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_status_user_default_permissions() {
  $permissions = array();

  // Exported permission: create status content
  $permissions['create status content'] = array(
    'name' => 'create status content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own status content
  $permissions['delete own status content'] = array(
    'name' => 'delete own status content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own status content
  $permissions['edit own status content'] = array(
    'name' => 'edit own status content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}

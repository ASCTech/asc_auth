<?php
/**
 * @file
 * asc_auth.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_auth_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_email_variable';
  $strongarm->value = 'mail';
  $export['shib_auth_email_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_force_https';
  $strongarm->value = 1;
  $export['shib_auth_force_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_full_handler_url';
  $strongarm->value = '/Shibboleth.sso/Login';
  $export['shib_auth_full_handler_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_full_logout_url';
  $strongarm->value = '/Shibboleth.sso/Logout';
  $export['shib_auth_full_logout_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_username_variable';
  $strongarm->value = 'eppn';
  $export['shib_auth_username_variable'] = $strongarm;

  return $export;
}

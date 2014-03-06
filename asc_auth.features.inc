<?php
/**
 * @file
 * asc_auth.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_auth_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

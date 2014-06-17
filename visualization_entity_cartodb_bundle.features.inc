<?php
/**
 * @file
 * visualization_entity_cartodb_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function visualization_entity_cartodb_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function visualization_entity_cartodb_bundle_eck_bundle_info() {
  $items = array(
    'visualization_cartodb_visualization' => array(
      'machine_name' => 'visualization_cartodb_visualization',
      'entity_type' => 'visualization',
      'name' => 'cartodb_visualization',
      'label' => 'CartoDB Visualization',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * visualization_entity_cartodb_bundle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function visualization_entity_cartodb_bundle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'visualization-cartodb_visualization-field_viz'
  $field_instances['visualization-cartodb_visualization-field_viz'] = array(
    'bundle' => 'cartodb',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'visualization',
    'field_name' => 'field_viz',
    'label' => 'vizualization uuid',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('vizualization uuid');

  return $field_instances;
}

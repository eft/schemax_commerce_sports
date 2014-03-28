<?php
/**
 * @file
 * schemax_commerce_sports.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function schemax_commerce_sports_commerce_product_default_types() {
  $items = array(
    'schemax_product_type' => array(
      'type' => 'schemax_product_type',
      'name' => 'Schemax Product Type',
      'description' => 'Copy of product type bundled with Drupal Commerce',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_commerce_sports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function schemax_commerce_sports_node_info() {
  $items = array(
    'schemax_product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => t('A <em>product display</em> is used to present an Add to Cart form for products to customers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

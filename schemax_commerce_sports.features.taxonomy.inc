<?php
/**
 * @file
 * schemax_commerce_sports.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function schemax_commerce_sports_taxonomy_default_vocabularies() {
  return array(
    'schemax_catalog' => array(
      'name' => 'Catalog',
      'machine_name' => 'schemax_catalog',
      'description' => 'Shopping terms',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

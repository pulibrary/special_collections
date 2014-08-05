<?php
/**
 * @file
 * research_guides.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function research_guides_taxonomy_default_vocabularies() {
  return array(
    'exhibition_types' => array(
      'name' => 'Domain Location',
      'machine_name' => 'exhibition_types',
      'description' => 'Tag content as internal or external for display and behavior purposes. ',
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

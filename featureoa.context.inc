<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function featureoa_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-features-featureoa';
  $context->description = '';
  $context->tag = 'FeatureOA';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'featureoa' => 'featureoa',
        'featureoa/*' => 'featureoa/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'featureoa_vista' => 'featureoa_vista',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'featureoa',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FeatureOA');

  $export['spaces-features-featureoa'] = $context;
  return $export;
}

<?php

/**
 * @file
 * Implements Perfect Scrollbar configuration settings.
 */

/**
 * Perfect Scrollbar options & settings form.
 */

function perfect_scrollbar_configurations() {
  $form = array();
  $form['perfect_scrollbar'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable perfect scrollbar for site'),
    '#default_value' => variable_get('perfect_scrollbar', 0),
  );
  $form['perfect_scrollbar_settings'] = array(
    '#type' => 'textarea',
    '#title' => t('Custom scrollbar settings for every individual scroll in the site.'),
    '#default_value' => variable_get('perfect_scrollbar_settings', '{class:container|height:400|width:300},{id:container|height:400|width:300}'),
    '#description' => t('Follow pattern for setting custom attributes for a scrollbar. E.g. class:container|height:400|width:300'),
  );
  $form['perfect_scrollbar_version'] = array(
    '#type' => 'select',
    '#title' => t('Perfect Scrollbar version'),
    '#options' => perfect_scrollbar_version_options(),
    '#default_value' => variable_get('perfect_scrollbar_version', PERFECT_SCROLLBAR_DEFAULT_VERSION),
    '#description' => t("Select which version of Perfect Scrollbar that's used on the site"),
  );
  $form['perfect_scrollbar_compression_type'] = array(
    '#type' => 'radios',
    '#title' => t('Perfect Scrollbar compression level'),
    '#options' => array(
      'min' => t('Production (minified)'),
      '' => t('Development (uncompressed)')
    ),
    '#default_value' => variable_get('perfect_scrollbar_compression_type', 'min')
  );
   $form['perfect_scrollbar_cdn'] = array(
    '#type' => 'select',
    '#title' => t('Perfect Scrollbar CDN'),
    '#options' => array(
      '0' => t('No'),
      '1' => t('Yes')
    ),
    '#default_value' => variable_get('perfect_scrollbar_cdn', '0'),
    '#description' => t('Us the CDN Path')
  );
  return system_settings_form($form);
}

/**
 * Returns a list of Perfect Scrollbar versions.
 *
 * @return array
 */
function perfect_scrollbar_version_options() {
  $options = array('0.6.15', '0.6.14', '0.6.13', '0.6.12', '0.6.11', '0.6.10', '0.6.9', '0.6.8', '0.6.7', '0.6.5','0.6.4', '0.6.3', '0.6.2', '0.6.1', '0.6.0', '0.5.9', '0.5.8', '0.5.7', '0.5.6', '0.5.5', '0.5.4', '0.5.3', '0.5.2', '0.5.1', '0.4.11', '0.4.10', '0.4.9', '0.4.8', '0.4.7', '0.4.6', '0.4.5', '0.4.4', '0.4.3','0.4.2', '0.4.1', '0.3.4', '0.3.3', '0.3.2', '0.3.1', '0.2.5', '0.2.4', '0.2.3', '0.2.1');
  return drupal_map_assoc($options);
}

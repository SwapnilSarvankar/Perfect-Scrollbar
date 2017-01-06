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
  return system_settings_form($form);
}

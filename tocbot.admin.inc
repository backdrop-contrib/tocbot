<?php
/**
 * @file
 * Tocbot configuration form
 *
 */
 
/**
 * Configuration form to update module settings.
 */
 
function tocbot_config_form($form, $form_state) {
  $config = config('tocbot.settings');

  $form['moduleSettings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Module Settings'),
    '#description' => t('Module settings to customize Tocbot.'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['moduleSettings']['tocbot_extrabodyclass'] = array(
    '#type' => 'textfield',
    '#title' => t('Body class'),
    '#description' => t('Additional body class for pages with a Tocbot block.'),
    '#default_value' => $config->get('tocbot_extrabodyclass'),
  );
  $form['moduleSettings']['tocbot_tocTitle'] = array(
    '#type' => 'textfield',
    '#title' => t('TOC title'),
    '#description' => t('A title for the table of contents. Leave blank for none.'),
    '#default_value' => $config->get('tocbot_tocTitle'),
  );
  $form['moduleSettings']['tocbot_minActivate'] = array(
    '#type' => 'textfield',
    '#title' => t('Minimum number of headings'),
    '#description' => t('Displays the Tocbot block only on pages where the
    number of headings is greater than or equal to this value.'),
    '#default_value' => $config->get('tocbot_minActivate'),
  );
  $form['moduleSettings']['tocbot_createAutoIds'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create automatic IDs'),
    '#description' => t('Use JavaScript to create automatic IDs for headings.
    Disable if you want to create your IDs otherwise, e.g. manually or using
    a text filter module.'),
    '#default_value' => $config->get('tocbot_createAutoIds'),
  );

  // Tocbot Settings tab.
  $form['tocbot_jsSettings'] = array(
    '#type' => 'fieldset',
    '#title' => t('JavaScript Settings'),
    '#description' => t('Tocbot API settings passed to JavaScript.
    See the <a href="https://tscanlin.github.io/tocbot/#api">API of the Tocbot library</a> for details.'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['tocbot_jsSettings']['tocbot_tocSelector'] = array(
    '#type' => 'textfield',
    '#title' => t('tocSelector'),
    '#description' => t('Class of the table of contents wrapper. When you use
    the Tocbot block, set to <code>.js-toc-block</code>. Alternatively, set an
    unique class and place an empty div with that class in your theme template.'),
    '#default_value' => $config->get('tocbot_tocSelector'),
  );
  $form['tocbot_jsSettings']['tocbot_contentSelector'] = array(
    '#type' => 'textfield',
    '#title' => t('contentSelector'),
    '#description' => t('Where to grab the headings to build the table of
    contents.'),
    '#default_value' => $config->get('tocbot_contentSelector'),
  );
  $form['tocbot_jsSettings']['tocbot_headingSelector'] = array(
    '#type' => 'textfield',
    '#title' => t('headingSelector'),
    '#description' => t('Comma and space seperated <code>h2, h3, h4, h5, h6</code>'),
    '#default_value' => $config->get('tocbot_headingSelector'),
  );
  $form['tocbot_jsSettings']['tocbot_ignoreSelector'] = array(
    '#type' => 'textfield',
    '#title' => t('ignoreSelector'),
    '#description' => t('Headings that match the ignoreSelector will be skipped.'),
    '#default_value' => $config->get('tocbot_ignoreSelector'),
  );
  $form['tocbot_jsSettings']['tocbot_linkClass'] = array(
    '#type' => 'textfield',
    '#title' => t('linkClass'),
    '#description' => t('Main class to add to links.'),
    '#default_value' => $config->get('tocbot_linkClass'),
  );
  $form['tocbot_jsSettings']['tocbot_extraLinkClasses'] = array(
    '#type' => 'textfield',
    '#title' => t('extraLinkClasses'),
    '#description' => t('Extra classes to add to links.'),
    '#default_value' => $config->get('tocbot_extraLinkClasses'),
  );
  $form['tocbot_jsSettings']['tocbot_activeLinkClass'] = array(
    '#type' => 'textfield',
    '#title' => t('activeLinkClass'),
    '#description' => t('Class to add to active links, the link corresponding
    to the top most heading on the page.'),
    '#default_value' => $config->get('tocbot_activeLinkClass'),
  );
  $form['tocbot_jsSettings']['tocbot_listClass'] = array(
    '#type' => 'textfield',
    '#title' => t('listClass'),
    '#description' => t('Main class to add to lists.'),
    '#default_value' => $config->get('tocbot_listClass'),
  );
  $form['tocbot_jsSettings']['tocbot_extraListClasses'] = array(
    '#type' => 'textfield',
    '#title' => t('extraListClasses'),
    '#description' => t('Extra classes to add to lists.'),
    '#default_value' => $config->get('tocbot_extraListClasses'),
  );
  $form['tocbot_jsSettings']['tocbot_isCollapsedClass'] = array(
    '#type' => 'textfield',
    '#title' => t('isCollapsedClass'),
    '#description' => t('Class that gets added when a list should be collapsed.'),
    '#default_value' => $config->get('tocbot_isCollapsedClass'),
  );
  $form['tocbot_jsSettings']['tocbot_collapsibleClass'] = array(
    '#type' => 'textfield',
    '#title' => t('collapsibleClass'),
    '#description' => t('Class that gets added when a list is collapsible.'),
    '#default_value' => $config->get('tocbot_collapsibleClass'),
  );
  $form['tocbot_jsSettings']['tocbot_listItemClass'] = array(
    '#type' => 'textfield',
    '#title' => t('listItemClass'),
    '#description' => t('Class to add to list items.'),
    '#default_value' => $config->get('tocbot_listItemClass'),
  );
  $form['tocbot_jsSettings']['tocbot_collapseDepth'] = array(
    '#type' => 'textfield',
    '#title' => t('collapseDepth (number)'),
    '#description' => t('Class to add to list items.'),
    '#default_value' => $config->get('tocbot_collapseDepth'),
  );
  $form['tocbot_jsSettings']['tocbot_orderedList'] = array(
    '#type' => 'checkbox',
    '#title' => t('orderedList'),
    '#description' => t('Generate ordered (ol) instead of unordered lists (ul).'),
    '#default_value' => $config->get('tocbot_orderedList'),
  );
  $form['tocbot_jsSettings']['tocbot_scrollSmooth'] = array(
    '#type' => 'checkbox',
    '#title' => t('scrollSmooth'),
    '#description' => t('Smooth scrolling enabled.'),
    '#default_value' => $config->get('tocbot_scrollSmooth'),
  );
  $form['tocbot_jsSettings']['tocbot_scrollSmoothDuration'] = array(
    '#type' => 'textfield',
    '#title' => t('scrollSmoothDuration (number)'),
    '#description' => t('Smooth scroll duration.'),
    '#default_value' => $config->get('tocbot_scrollSmoothDuration'),
  );
  $form['tocbot_jsSettings']['tocbot_throttleTimeout'] = array(
    '#type' => 'textfield',
    '#title' => t('throttleTimeout (number)'),
    '#description' => t('Timeout between events firing to make sure its not too
    rapid (for performance reasons)'),
    '#default_value' => $config->get('tocbot_throttleTimeout'),
  );
  $form['tocbot_jsSettings']['tocbot_positionFixedSelector'] = array(
    '#type' => 'textfield',
    '#title' => t('positionFixedSelector'),
    '#description' => t('Specify a selector to make the table of contents fixed
    after scrolling down. Default: <code>.js-toc-block</code>, which is the same
    default value as in the "tocSelector" setting above.'),
    '#default_value' => $config->get('tocbot_positionFixedSelector'),
  );
  $form['tocbot_jsSettings']['tocbot_positionFixedClass'] = array(
    '#type' => 'textfield',
    '#title' => t('positionFixedClass'),
    '#description' => t('Fixed position class to add to make sidebar fixed after
    scrolling down past the fixedSidebarOffset.'),
    '#default_value' => $config->get('tocbot_positionFixedClass'),
  );
  $form['tocbot_jsSettings']['tocbot_fixedSidebarOffset'] = array(
    '#type' => 'textfield',
    '#title' => t('fixedSidebarOffset'),
    '#description' => t('fixedSidebarOffset can be any number but by default
    is set to auto which sets the fixedSidebarOffset to the sidebar elements
    offsetTop from the top of the document on init.'),
    '#default_value' => $config->get('tocbot_fixedSidebarOffset'),
  );
  $form['tocbot_jsSettings']['tocbot_includeHtml'] = array(
    '#type' => 'checkbox',
    '#title' => t('includeHtml'),
    '#description' => t('includeHtml can be set to true to include the HTML
    markup from the heading node instead of just including the textContent.'),
    '#default_value' => $config->get('tocbot_includeHtml'),
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * Save Configuration form.
 */
function tocbot_config_form_submit($form, $form_state) {
  $config = config('tocbot.settings');

  $fields_to_save = array(
    'tocbot_extrabodyclass',
    'tocbot_tocTitle',
    'tocbot_minActivate',
    'tocbot_createAutoIds',
    'tocbot_tocSelector',
    'tocbot_contentSelector',
    'tocbot_headingSelector',
    'tocbot_ignoreSelector',
    'tocbot_linkClass',
    'tocbot_extraLinkClasses',
    'tocbot_activeLinkClass',
    'tocbot_listClass',
    'tocbot_extraListClasses',
    'tocbot_isCollapsedClass',
    'tocbot_collapsibleClass',
    'tocbot_listItemClass',
    'tocbot_collapseDepth',
    'tocbot_orderedList',
    'tocbot_scrollSmooth',
    'tocbot_scrollSmoothDuration',
    'tocbot_throttleTimeout',
    'tocbot_positionFixedSelector',
    'tocbot_positionFixedClass',
    'tocbot_fixedSidebarOffset',
  );

  foreach ($fields_to_save as $value) {
    $form_value = $form_state['values'][$value];
    $config->set($value, $form_value);
  }

  $config->save();
  
  backdrop_set_message(t('The configuration options have been saved.'));
}

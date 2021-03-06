<?php
/**
 * @file
 * teia_einfo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teia_einfo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function teia_einfo_node_info() {
  $items = array(
    'e_info_news' => array(
      'name' => t('環境資訊中心: 新聞'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

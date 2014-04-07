<?php
/**
 * @file
 * schemax_commerce_sports.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function schemax_commerce_sports_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'schemax_store';
  $page->task = 'page';
  $page->admin_title = 'Store (user facing)';
  $page->admin_description = '';
  $page->path = 'store';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Store',
    'name' => 'schemax-sports-menu',
    'weight' => '20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schemax_store_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'schemax_store';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Store';
  $display->uuid = 'ff8239d1-3e6c-45ea-af66-7703d269b5c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0eab6ce6-1926-4c5e-8e4a-2aca40e40f7d';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_products-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0eab6ce6-1926-4c5e-8e4a-2aca40e40f7d';
    $display->content['new-0eab6ce6-1926-4c5e-8e4a-2aca40e40f7d'] = $pane;
    $display->panels['content'][0] = 'new-0eab6ce6-1926-4c5e-8e4a-2aca40e40f7d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['schemax_store'] = $page;

  return $pages;

}

<?php
/**
 * @file
 * Contains MenuLinkFeaturesBuilder.
 */

class MenuLinksFeaturesBuilder extends FeaturesBuilderBase {

  public static function listFeatures() {
    return array('menu_links' => t('Menu links'));
  }

  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'Configuration';
  }

  /**
   * {@inheritdoc}
   */
  protected function setComponents() {
    $this->setNamedComponents('menu_links', array('main-menu:http://2015.midcamp.org'));
  }

}

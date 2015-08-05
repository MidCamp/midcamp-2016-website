<?php

use Behat\Behat\Context\SnippetAcceptingContext;
use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

  protected $placeholderEnabled;

  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through behat.yml.
   */
  public function __construct() {
    $this->placeholderEnabled = module_exists('madcamp_placeholder');
  }

  /**
   * Get DrushContext.
   *
   * @return \MidCampDrushContext|NULL
   *   MidCampDrushContext instance.
   */
  protected function getDrushContext() {
    return MidCampDrushContext::cast($this->getDrupal()
      ->getEnvironment()
      ->getContext('MidCampDrushContext'));
  }

  /**
   * @Given the placeholder is not enabled
   */
  public function thePlaceholderIsNotEnabled() {
    $this->getDrushContext()->assertDrushCommandWithArgument('dis', 'madcamp_placeholder -y');
  }

  /**
   * @Given the placeholder is enabled
   */
  public function thePlaceholderIsEnabled() {
    $this->getDrushContext()->assertDrushCommandWithArgument('en', 'madcamp_placeholder -y');
  }

  /**
   * @AfterScenario @placeholder
   */
  public function placeholderTearDown() {
    if ($this->placeholderEnabled) {
      $this->thePlaceholderIsEnabled();
    }
    else {
      $this->thePlaceholderIsNotEnabled();
    }
  }

}

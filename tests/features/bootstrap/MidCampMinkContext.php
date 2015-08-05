<?php
/**
 * @file
 * Contains MidCampMinkContext.
 */

use Drupal\DrupalExtension\Context\MinkContext;

class MidCampMinkContext extends MinkContext {
  /**
   * Cast object to MidCampMinkContext.
   *
   * @param MidCampMinkContext $object
   *   The object to cast, usually from $this->getContext().
   *
   * @return MidCampMinkContext|NULL
   *   The MidCampMinkContext object.
   */
  public static function cast(MidCampMinkContext $object = NULL) {
    return $object;
  }

  /**
   * Checks that current session address is not equal to provided one.
   *
   * @Then I should not be on :page
   *
   * @param string $page
   *   Session address.
   */
  public function iShouldNotBeOn($page) {
    $page = $this->fixStepArgument($page);
    $this->assertSession()->addressNotEquals($this->locatePath($page));
  }
}

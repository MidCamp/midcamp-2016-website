<?php
/**
 * @file
 * Contains MidCampDrushContext.
 */

use Drupal\DrupalExtension\Context\DrushContext;

class MidCampDrushContext extends DrushContext {

  /**
   * Cast object to MidCampDrushContext.
   *
   * @param MidCampDrushContext $object
   *   The object to cast, usually from $this->getContext().
   *
   * @return MidCampDrushContext|NULL
   *   The MidCampDrushContext object.
   */
  public static function cast(MidCampDrushContext $object = NULL) {
    return $object;
  }

}
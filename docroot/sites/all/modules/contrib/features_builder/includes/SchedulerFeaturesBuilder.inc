<?php

class SchedulerFeaturesBuilder extends FeaturesBuilderBase {

  public static function listFeatures() {
    return array('scheduler' => t('Scheduler'));
  }

  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'Configuration';
  }

  protected function setComponents() {
    $this->setRegexComponents('variable', '/^scheduler_.*/');
  }

}

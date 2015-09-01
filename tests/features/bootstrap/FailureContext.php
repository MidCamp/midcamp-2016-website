<?php
/**
 * Created by PhpStorm.
 * User: will
 * Date: 6/22/15
 * Time: 6:59 AM
 */

use Behat\Mink\Driver\Selenium2Driver;
use Behat\Behat\Hook\Scope\AfterStepScope;
use Behat\MinkExtension\Context\RawMinkContext;

class FailureContext extends RawMinkContext {

  /**
   * @AfterStep
   */
  public function handleFailure(AfterStepScope $scope) {

    if (99 !== $scope->getTestResult()->getResultCode()) {
      return;
    }

    $fileName = $this->fileName($scope);
    $this->dumpMarkup($fileName);
    $this->screenShot($fileName);
  }

  /**
   * Compute a file name for the output.
   */
  protected function fileName($scope) {
    $baseName = pathinfo($scope->getFeature()->getFile());
    $baseName = substr($baseName['basename'], 0 , strlen($baseName['basename']) - strlen($baseName['extension']) - 1);
    $baseName .= '-' . $scope->getStep()->getLine();
    $baseName .= '-' . time();
    $baseName = $scope->getEnvironment()->getSuite()->getSetting('failure_path') . '/' . $baseName;
    return $baseName;
  }

  /**
   * Save the markup from the failed step.
   */
  protected function dumpMarkup($fileName) {
    $fileName .= '.html';
    $html = $this->getSession()->getPage()->getContent();
    file_put_contents($fileName, $html);
    sprintf("HTML available at: %s\n", $fileName);
  }

  /**
   * Save a screen shot from the failed step.
   */
  protected function screenShot($fileName) {
    $fileName .= '.png';
    $driver = $this->getSession()->getDriver();

    if ($driver instanceof Selenium2Driver) {
      file_put_contents($fileName, $this->getSession()->getDriver()->getScreenshot());
      sprintf("Screen shot available at: %s\n", $fileName);
      return;
    }
  }
}

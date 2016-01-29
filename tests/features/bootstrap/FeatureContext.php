<?php
/**
 * @file
 * Contains FeatureContext.
 */

use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

  protected $placeholderEnabled;

  /**
   * Instantiate this FeatureContext class.
   */
  public function __construct() {
    $this->placeholderEnabled = module_exists('madcamp_placeholder');
  }

  /**
   * Get the DrupalContext.
   *
   * @return \Drupal\DrupalExtension\Context\DrupalContext
   */
  protected function getDrupalContext() {
    return $this->getDrupal()
      ->getEnvironment()
      ->getContext('Drupal\DrupalExtension\Context\DrupalContext');
  }

  /**
   * Creates sponsors provided in the form:
   * | name             | body                | field_sponsorship_level | logo          |
   * | Drupal Hipsters  | Artisan craft beer. | gold                    | sponsor_a.jpg |
   * | ...              | ...                 | ...                     | ...           |
   *
   * @Given sponsors:
   */
  public function createSponsors(TableNode $table) {
    $drupal_context = $this->getDrupalContext();
    $type = 'sponsor';
    foreach ($table->getHash() as $hash) {
      $hash['type'] = $type;
      $node = (object) $hash;
      $node->type = $type;
      $created_node = $drupal_context->nodeCreate($node);

      $logo = $hash['logo'];
      $file = $this->getFile($logo, "public://tests/$logo");
      if ($file && isset($file->fid)) {
        $file->alt = "{$hash['field_sponsorship_level']} sponsor";
        $wrapper = entity_metadata_wrapper('node', $created_node);
        $wrapper->field_image = (array) $file;
        $wrapper->save();
      }
    }
  }

  protected function getFile($name, $destination) {
    if ($this->getMinkParameter('files_path')) {
      $full_path = rtrim(realpath($this->getMinkParameter('files_path')), DIRECTORY_SEPARATOR) . DIRECTORY_SEPARATOR . $name;
      if (is_file($full_path)) {
        $name = $full_path;
      }
    }
    else {
      $name = realpath($name);
    }

    PHPUnit_Framework_Assert::assertFileExists($name);
    $data = trim(file_get_contents($name));
    // Normalize the line endings in the output.
    if ("\n" !== PHP_EOL) {
      $data = str_replace(PHP_EOL, "\n", $data);
    }

    $directory = dirname($destination);
    file_prepare_directory($directory, FILE_CREATE_DIRECTORY || FILE_MODIFY_PERMISSIONS);

    return file_save_data($data, $destination, FILE_EXISTS_REPLACE);
  }


  /**
   * @Given the placeholder is not enabled
   */
  public function thePlaceholderIsNotEnabled() {
    $this->getDrushContext()
      ->assertDrushCommandWithArgument('dis', 'madcamp_placeholder -y');
  }

  /**
   * @Given the placeholder is enabled
   */
  public function thePlaceholderIsEnabled() {
    $this->getDrushContext()
      ->assertDrushCommandWithArgument('en', 'madcamp_placeholder -y');
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
   * @Then I should see the fields:
   *
   * @param \Behat\Gherkin\Node\TableNode $fields
   *   Fields to verify.
   * @param bool $negate
   *   Defaults to FALSE. If TRUE will chek that fields do not exist.
   *
   * @throws \Behat\Mink\Exception\ElementNotFoundException
   */
  public function assertFields(TableNode $fields, $negate = FALSE) {
    foreach ($fields->getHash() as $key => $value) {
      $field = trim(reset($value));
      if ($negate) {
        $this->assertSession()->fieldNotExists($field);
      }
      else {
        $this->assertSession()->fieldExists($field);
      }
    }
  }

  /**
   * @Then I should not see the fields:
   *
   * @param \Behat\Gherkin\Node\TableNode $fields
   *   Fields to verify.
   *
   * @throws \Behat\Mink\Exception\ElementNotFoundException
   */
  public function assertNotFields(TableNode $fields) {
    $this->assertFields($fields, TRUE);
  }

  /**
   * Asserts attribute in element contains text.
   *
   * @Then the :attr attribute in the :elem element contains :text
   *
   * @param string $attr
   *   Attribute name.
   * @param string $elem
   *   CSS selector for element containg attribute.
   * @param string $text
   *   Text to search for in elements attribute.
   */
  public function theAttributeInTheElementContains($attr, $elem, $text) {
    $this->assertSession()
      ->elementAttributeContains('css', $elem, $attr, $text);
  }

  /**
   * I wait x seconds.
   *
   * @When I wait :seconds seconds
   *
   * @param int $seconds
   *   Number of seconds to wait.
   */
  public function iWaitSeconds($seconds) {
    $ms = $seconds * 1000;
    $this->getSession()->wait($ms);
  }

  /**
   * Checks the pane title element for title.
   *
   * @Then I should see the pane title :text
   *
   * @param string $text
   *   The pane title to check for.
   */
  public function iShouldSeePaneTitle($text) {
    // Todo: Fix step argument here when implemented.
    $this->assertSession()->elementContains('css', 'h2.pane-title', $text);
  }

  /**
   * Checks the pane title element for title is not seen.
   *
   * @Then I should not see the pane title :text
   *
   * @param string $text
   *   The pane title to check for.
   */
  public function iShouldNotSeePaneTitle($text) {
    $this->assertSession()->elementNotContains('css', 'h2.pane-title', $text);
  }

}

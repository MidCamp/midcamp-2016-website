<?php
/**
 * @file
 * Contains FeatureContext.
 */

use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalDriverManager;
use Drupal\DrupalExtension\Context\DrupalContext;
use Drupal\DrupalExtension\Context\DrupalSubContextBase;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends DrupalSubContextBase implements SnippetAcceptingContext {

  protected $placeholderEnabled;

  /**
   * {@inheritdoc}
   */
  public function __construct(DrupalDriverManager $drupal) {
    parent::__construct($drupal);
    $this->placeholderEnabled = module_exists('madcamp_placeholder');
  }

  /**
   * Get the DrupalContext.
   *
   * @param \Drupal\DrupalExtension\Context\DrupalContext|NULL $context
   *   DrupalContext.
   *
   * @return \Drupal\DrupalExtension\Context\DrupalContext
   */
  protected function getDrupalContext(DrupalContext $context = NULL) {
    return $context;
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
    $drupal_context = $this->getDrupalContext($this->getContext('Drupal\DrupalExtension\Context\DrupalContext'));
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

}

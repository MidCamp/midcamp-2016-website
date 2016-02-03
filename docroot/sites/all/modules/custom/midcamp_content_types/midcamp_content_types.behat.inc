<?php
/**
 * @file
 * Contains \ContentTypesSubContext.
 */

use Behat\Behat\Hook\Scope\BeforeScenarioScope;
use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalSubContextBase;
use Drupal\DrupalExtension\Context\DrupalSubContextInterface;

class ContentTypesSubContext extends DrupalSubContextBase implements DrupalSubContextInterface {

  /**
   * @var \FeatureContext
   */
  protected $featureContext;

  /**
   * @var \Drupal\DrupalExtension\Context\DrupalContext
   */
  protected $drupalContext;
  /**
   * @var \MidCampMinkContext
   */
  protected $minkContext;

  /**
   * Initializes Context variables.
   *
   * @BeforeScenario
   *
   * @param \Behat\Behat\Hook\Scope\BeforeScenarioScope $scope
   */
  public function gatherContexts(BeforeScenarioScope $scope) {
    $environment = $scope->getEnvironment();

    $this->featureContext = $environment->getContext('FeatureContext');
    $this->drupalContext = $environment->getContext('Drupal\DrupalExtension\Context\DrupalContext');
    $this->minkContext = $environment->getContext('MidCampMinkContext');
  }

  /**
   * Verifies session node form items.
   *
   * @param string $form_element
   *   CSS selector for form element.
   * @param string $label
   *   The form item label or empty if there is no label.
   * @param string $help
   *   The form item description or empty if there is no description.
   * @param string $field_names
   *   Comma-separated list of input names or empty for form items without
   *   input tags.
   *
   * @throws \Behat\Mink\Exception\ElementNotFoundException
   */
  protected function verifyFormItemElements($form_element, $label = '',
                                            $help = '', $field_names = '') {

    $webassert = $this->assertSession();

    if (!empty($field_names)) {
      $field_names = explode(',', $field_names);
      $num_field_names = count($field_names);

      // Verify the exact number of field inputs exist for form item.
      $this->minkContext->assertNumElements($num_field_names, $form_element . ' input');

      // Verify form item exists.
      foreach ($field_names as $field_name) {
        $field_name = trim($field_name);
        $webassert->fieldExists($field_name);
      }
    }

    // Verify label and help description.
    if (!empty($label)) {
      $webassert->elementTextContains('css', $form_element . ' label', $label);
    }
    if (!empty($help)) {
      //$webassert->elementContains('css', $form_element . ' .description', $help);
      $webassert->elementTextContains('css', $form_element . ' .description', $help);
    }
  }

  /**
   * Looks for session proposal fields for non-admin.
   *
   * @Then I should see the non-admin session node form
   *
   * @param bool $with_admin_fields
   *   Defaults to FALSE. Set to TRUE to verify fields only seen by admins.
   */
  public function iSeeSessionNodeForm($with_admin_fields = FALSE) {

    $this->verifyFormItemElements(
      '.form-item.form-item-field-drupal-specific-und',
      'Is your presentation Drupal-specific?',
      'We welcome presentations that are not specific to Drupal!',
      'field_drupal_specific[und]');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-beginners-und',
      'Is your presentation for Drupal beginners?',
      'A beginner session assumes that the audience has not heard of Drupal before attending this camp.',
      'field_beginners[und]');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-track-und',
      'Which track(s) would best fit your session content? Select up to 3: ',
      'We recommend that you focus your session’s intended audience, but realize that not every topic will fit neatly into one of these categories. For example, a presentation on Multilingual could be primarily Site Building, Content Admin, or Back-End, depending on the focus of the talk.',
      'field_track[und][site_building], field_track[und][frontend], field_track[und][backend], field_track[und][devops], field_track[und][content_administration],field_track[und][business], field_track[und][project_management], field_track[und][design], field_track[und][community]');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-length-und',
      'What is your planned session length?',
      '',
      '');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-length-und .form-item-field-length-und',
      '60 minutes',
      '',
      '');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-length-und .form-item-field-length-und:nth-child(1)',
      '60 minutes',
      '',
      'field_length[und]');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-length-und .form-item-field-length-und:nth-child(2)',
      '30 minutes',
      '',
      'field_length[und]');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-presenters-und',
      'Who is presenting this session?',
      'Since we are doing a blind selection process we don’t need to know who your co-presenters are just yet.');

    $this->verifyFormItemElements(
      '.form-field-type-text-long.form-field-name-field-organizer-description',
      'Describe your session for the conference organizers',
      'Why should the selection committee accept your session? This will be used for selection purposes only and will not be shown to the public.');

    $this->verifyFormItemElements(
      '.form-field-type-text-long.form-field-name-field-attendee-description',
      'Describe your session for attendees',
      'Why should people attend your session? You can always come back and update this information closer to the camp.');

    $this->verifyFormItemElements(
      '.form-field-type-text-long.form-field-name-field-prereqs',
      'What should attendees already know in order to get the most out of your session?',
      'If you aren’t sure yet, that’s okay too. You can always come back and update this information closer to the camp.');

    $this->verifyFormItemElements(
      '.form-item.form-item-field-tc-und',
      'I accept the terms and conditions',
      'Please read the terms and conditions before confirming.',
      'field_tc[und]');

    // Admin fields
    $fields = array(
      'files[field_slides_und_0]',
      'field_slides_url[und][0][url]',
      'field_session_video[und][0][input]',
    );
    $webassert = $this->assertSession();
    foreach ($fields as $field) {
      if ($with_admin_fields) {
        $webassert->fieldExists($field);
      }
    }
    if ($with_admin_fields) {
      $webassert->fieldExists($field);
    }
    else {
      $webassert->fieldNotExists($field);
    }
    // Related content field.
    if ($with_admin_fields) {
      $webassert->elementExists('css', '.form-field-type-link-field.form-field-name-field-related-content');
    }
    else {
      $webassert->elementNotExists('css', '.form-field-type-link-field.form-field-name-field-related-content');
    }
  }

  /**
   * Looks for session proposal fields for non-admin.
   *
   * @Then I should see the admin session node form
   */
  public function iSeeAdminSessionNodeForm() {
    $this->iSeeSessionNodeForm(TRUE);
  }

  /**
   * Finds a node by its title.
   *
   * @param string $type
   *   Node type.
   * @param string $title
   *   Title of node.
   *
   * @return mixed|null
   *   Loaded entity.
   *
   * @throws \Exception
   */
  protected function getNodeByTitle($type, $title) {
    $q = new EfqHelper('node');
    $q->propertyCondition('type', $type)
      ->propertyCondition('title', $title);
    if (!$q) {
      throw new \Exception(sprintf('No %s named %s', $type, $title));
    }
    return $q->first();
  }

  /**
   * Adds current logged in user to the named Sponsor group.
   *
   * @param string $sponsor
   *   Name of sponsor node.
   *
   * @Given I am a member of :sponsor
   */
  public function iAmMemberOf($sponsor) {
    // Find the sponsor node.
    $node = $this->getNodeByTitle('sponsor', $sponsor);
    $user = $this->getUser();

    $og_values = array(
      'entity_type' => 'user',
      'entity' => $user,
    );

    og_group('node', $node->nid, $og_values);
  }

  /**
   * Creates job nodes for Sponsors provided in form:
   *
   *| sponsor      | title     | field_location     |field_job_type | field_skill_level | body                                   |                                                     |
   *| Sponsor name | Job title | arbitrary location | part          | intermediate      | Art party YOLO squid four loko hammock |
   *
   * $param TableNode $table_node
   *   TableNode object of the passed in table.
   *
   * @Given sponsor jobs:
   */
  public function sponsorJobs(TableNode $table_node) {
    $sponsor_nodes = array();
    foreach ($table_node->getHash() as $hash) {
      $sponsor = $hash['sponsor'];
      if (!array_key_exists($sponsor, $sponsor_nodes)) {
        $sponsor_node = $this->getNodeByTitle('sponsor', $sponsor);
        $sponsor_nodes[$sponsor] = $sponsor_node->nid;
      }
      unset($hash['sponsor']);
      // $hash['og_group_ref'] = $sponsor_nodes[$sponsor];
      $hash['type'] = 'job';
      $node = (object) $hash;
      $node = $this->nodeCreate($node);

      $og_values = array(
        'entity_type' => 'node',
        'entity' => $node,
      );
      og_group('node', $sponsor_nodes[$sponsor], $og_values);
    }
  }
}

@api
Feature: Test coverage for content editor

  @sponsor
  Scenario Outline: Content editor can create sponsors but others can not
    Given I am logged in as a user with the "<role>" role
    When I go to "node/add/sponsor"
    Then the response status code should be <number>
    Examples:
      | role               | number |
      | Content Editor     | 200    |
      | anonymous user     | 403    |
      | authenticated user | 403    |

  @midcamp-269 @sponsor
  Scenario: Sponsor fields for Content Editor and ability to unpublish
    Given I am logged in as a user with the "Content Editor" role
    When I go to "node/add/sponsor"
    Then I should see the fields:
      | field id or name or label or value |
      | Name                               |
      | Sponsorship Level                  |
      | Logo                               |
      | field_attendees[und][0][target_id] |
      | Description                        |
      | status                             |
    And I should not see the fields:
      | field id or name or label or value |
      | Group                              |

  @midcamp-294 @training
  Scenario: Training fields for Content Editor
    Given I am logged in as a user with the "Content Editor" role
    And I am on the homepage
    When I click "Add content"
    And I click "Training"
    Then I should be on "node/add/training"
    Then I should see the fields:
      | field id or name or label or value            |
      | Title                                         |
      | Trainers                                      |
      | Body                                          |
      | Audience                                      |
      | field_training_length[und]                    |
      | Cost                                          |
      | field_register_for_this_training[und][0][url] |

@api
Feature: Test coverage for content editor

  Scenario Outline: Content editor can create sponsors but others can not
    Given I am logged in as a user with the "<role>" role
    When I go to "node/add/sponsor"
    Then the response status code should be <number>
    Examples:
      | role               | number |
      | Content Editor     | 200    |
      | anonymous user     | 403    |
      | authenticated user | 403    |

  Scenario: Sponsor fields
    Given I am logged in as a user with the "Content Editor" role
    When I go to "node/add/sponsor"
    Then I should see the fields:
      | field id or name or label or value |
      | Name                               |
      | Sponsorship Level                  |
      | Logo                               |
      | field_attendees[und][0][target_id] |
      | Description                        |
    And I should not see the fields:
      | field id or name or label or value |
      | Group                              |

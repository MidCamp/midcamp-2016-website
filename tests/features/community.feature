@api
Feature: Test Community page

  @community
  Scenario: Community listing should have users
    Given users:
      | name         | pass  | mail                   | roles              |
      | jsession     | behat | joesession@example.com | authenticated user |
    And user "jsession" has given name "Joe" and family name "Session"
    When I am at "/community"
    Then I should see the link "jsession"
    And I should see the text "Joe Session"

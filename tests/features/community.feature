@api
Feature: Test Community page

  @community
  Scenario: Community listing should have users
    Given users:
      | name         | pass  | mail                   | roles              |
      | jsession     | behat | joesession@example.com | authenticated user |
    When I am at "/community"
    Then I should see the link "jsession"
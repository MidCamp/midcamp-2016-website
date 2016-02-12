@api @keynote
Feature: Keynote scenarios

  @midcamp-286
  Scenario: No keynote on front page when no users are keynotes
    Given users:
      | name   | pass  | mail               | roles              | given name | family name |
      | nkuser | behat | notkey@example.com | authenticated user | Not Key    | User        |
    When I am on the homepage
    Then I should not see the text "Keynote"
    And I should not see the text "Not Key User"

  @midcamp-286
  Scenario: Keynote on front page when keynote users
    Given users:
      | name    | pass  | mail               | roles              | given name | family name |
      | keyuser | behat | key@example.com    | Keynote            | Key        | User        |
      | nkuser  | behat | notkey@example.com | authenticated user | Not Key    | User        |
    When I am on the homepage
    Then I should see the pane title "Keynote"
    And I see the text "Key User"
    And I should not see the text "Not Key User"

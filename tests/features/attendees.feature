@api @attendees
Feature: Attendee scenarios

  @midcamp-285
  Scenario: Featured attendees appear on home page
    Given users:
      | name    | pass  | mail                | roles              | given name | family name | is featured |
      | dries   | behat | dries@example.com   | authenticated user | Dries      | Buytaert    | 1           |
      | evilehk | behat | evilehk@example.com | authenticated user | Evil       | E           | 0           |
      | fuser   | behat | fuser@example.com   | authenticated user | Featured   | User        | 1           |
    When I am on the homepage
    Then I should see the pane title "Featured Attendees"
    And I should see "Featured User" in the ".view.view-attendee-user-profiles" element
    And I should see "Dries Buytaert" in the ".view.view-attendee-user-profiles" element
    But I should not see "Evil E" in the ".view.view-attendee-user-profiles" element

  @midcamp-285
  Scenario: No featured attendees on front page when no users are flagged
    Given users:
      | name    | pass  | mail                | roles              | given name | family name | is featured |
      | dries   | behat | dries@example.com   | authenticated user | Dries      | Buytaert    | 0           |
      | evilehk | behat | evilehk@example.com | authenticated user | Evil       | E           | 0           |
      | fuser   | behat | fuser@example.com   | authenticated user | Featured   | User        | 0           |
    When I am on the homepage
    Then I should not see the pane title "Featured Attendees"

  @eventbrite
  Scenario: Attendee listing lists only ticket holders
    Given users:
      | name    | pass  | mail                | roles              | given name | family name | field_organization
      | dries   | behat | dries@example.com   | authenticated user | Dries      | Buytaert    | acquia             |
      | evilehk | behat | evilehk@example.com | authenticated user | Evil       | E           | bt                 |
    And attendees:
      | ticket_id | email                | name           | attendee_id | order_id | ticket_name            |
      | 1         | notauser@example.com | Drew Paul      | 1           | 1        | Individual Sponsorship |
      | 2         | dries@example.com    | Dries Buytaert | 2           | 2        | Individual Sponsorship |

    When I am at "/attendees"
    Then I should see 2 ".view.view-attendees td" elements
    And the ".view.view-attendees" element should contain "dries"
    And the ".view.view-attendees" element should contain "Drew Paul"
    And the ".view.view-attendees" element should not contain "Evil"
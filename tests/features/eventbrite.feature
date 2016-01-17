@api @eventbrite
Feature: Eventbrite integration

  Scenario: Test ticket classes
    Given I am an anonymous user
    When I am on "/buy-tickets-now"
    Then I should see "Early-bird Admission to MidCamp: limited to the first 25 tickets (March 18-19)"
    Then I should see "Regular Admission to MidCamp (March 18-19)"
    Then I should see "At the door Admission to MidCamp (March 18-19)"
    Then I should see "Sprint (March 20)"
    Then I should see "Individual Sponsorship with Free Ticket"

   # @todo ???

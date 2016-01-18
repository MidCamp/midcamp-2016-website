@api @sponsors
Feature: Coverage for sponsor treatment

  Background:
    Given sponsors:
      | title            | body                                          | field_sponsorship_level | logo          |
      | UberShop         | We will über your Drupal.                     | Platinum                | sponsor_a.jpg |
      | Drupal Hipsters  | Ugh put a bird on it artisan craft beer.      | Gold                    | sponsor_a.jpg |
      | Durpal Durpal    | Food truck small batch cold-pressed.          | Silver                  | sponsor_b.jpg |
      | UIC of Chicago U | Shabby chic green juice craft beer chillwave. | Bronze                  | sponsor_c.jpg |
      | Sprint Sponsor   | Ugh put a bird on it artisan craft beer.      | Sprint day              | sponsor_a.jpg |
      | Program Sponsor  | Food truck small batch cold-pressed.          | Program                 | sponsor_b.jpg |
      | Other sponsor    | Shabby chic green juice craft beer chillwave. | Other Valued Sponsor    | sponsor_c.jpg |

  @midcamp-240
  Scenario: Sponsor logo on footer for platinum, gold, silver
    Given I am an anonymous user
    And I am on the homepage
    Then I should see an "img[alt='Platinum sponsor']" element
    Then I should see an "img[alt='Gold sponsor']" element
    And I should see an "img[alt='Silver sponsor']" element
    And I should not see an "img[alt='Bronze sponsor']" element

  @midcamp-259
  Scenario: Sponsor page top and bottom
    Given I am an anonymous user
    When I am on "Sponsors"
    Then I see the heading "Sponsors"
    And I see the text "Want to add your name to this list of amazing businesses and organizations? Find out how to become a sponsor."

    When I click "become a sponsor" in the content
    Then I should be on "become-a-sponsor"

  @midcamp-259
  Scenario Outline: Sponsor page components
    Given I am an anonymous user
    When I am on "Sponsors"
    Then the ".pane-sponsors-panel-pane-<level>-sponsor h2.pane-title" element should contain "<level heading>"
    #Verify sponsor logo and image style by looking in the logo src attribute value.
    And the "src" attribute in the ".pane-sponsors-panel-pane-<level>-sponsor img[alt='<img alt>']" element contains "<style>"
    Examples:
      | level heading         | level    | img alt                      | style            |
      | Platinum sponsors     | platinum | Platinum sponsor             | sponsor_gold     |
      | Gold sponsors         | gold     | Gold sponsor                 | sponsor_gold     |
      | Silver sponsors       | silver   | Silver sponsor               | sponsor_silver   |
      | Program sponsors      | program  | Program sponsor              | sponsor_silver   |
      | Bronze sponsors       | bronze   | Bronze sponsor               | sponsor_bronze   |
      | Sprint day sponsors   | sprint   | Sprint day sponsor           | sponsor_bronze   |
      | Other valued sponsors | other    | Other Valued Sponsor sponsor | sponsor_bronze   |

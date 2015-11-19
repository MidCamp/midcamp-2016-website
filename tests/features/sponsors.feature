@api
Feature: Coverage for sponsor treatment

  Background:
    Given sponsors:
      | title            | body                                          | field_sponsorship_level | logo          |
      | Drupal Hipsters  | Ugh put a bird on it artisan craft beer.      | Gold                   | sponsor_a.jpg |
      | Durpal Durpal    | Food truck small batch cold-pressed.          | Silver                 | sponsor_b.jpg |
      | UIC of Chicago U | Shabby chic green juice craft beer chillwave. | Bronze                 | sponsor_c.jpg |

  @midcamp-240
  Scenario: Sponsor logo on footer for gold, silver
    Given I am an anonymous user
    And I am on the homepage
    Then I should see an "img[alt='Gold sponsor']" element
    And I should see an "img[alt='Silver sponsor']" element
    And I should not see an "img[alt='Bronze sponsor']" element

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
      | level heading         | level    | img alt                      | style          |
      | Platinum sponsors     | platinum | Platinum sponsor             | sponsor_gold   |
      | Gold sponsors         | gold     | Gold sponsor                 | sponsor_gold   |
      | Silver sponsors       | silver   | Silver sponsor               | sponsor_silver |
      | Program sponsors      | program  | Program sponsor              | sponsor_silver |
      | Bronze sponsors       | bronze   | Bronze sponsor               | sponsor_bronze |
      | Sprint day sponsors   | sprint   | Sprint day sponsor           | sponsor_bronze |
      | Other valued sponsors | other    | Other Valued Sponsor sponsor | sponsor_bronze |

  @midcamp-275
  Scenario: The post new job exists only for sponsor members
    #Sponsor member sees job link
    Given I am logged in as a user with the "authenticated user" role
    And I am a member of "UberShop"
    When I am on "sponsor/ubershop"
    Then I should see the pane title "Post new"
    And I should see the link "Job" in the sidebar_second

    #Anonymous user does not see job link
    When I am an anonymous user
    And I am on "sponsor/ubershop"
    Then I should not see the pane title "Post new"
    #No sidebar_second region
    #And I should not see the link "Job" in the sidebar_second
    And I should not see an "section.region.region-sidebar-second" element

    #Authenticated user not a member of sponsor does not see job link
    When I am logged in as a user with the "authenticated user" role
    And I am on "sponsor/ubershop"
    Then I should not see the pane title "Post new"
    And I should not see an "section.region.region-sidebar-second" element

    #Jobs for sponsor not shown unless there are jobs
    And I should not see "Jobs for UberShop"

  @midcamp-276
  Scenario: Posted job is visible on sponsor page
    #Sponsor creates pages and views it
    Given I am logged in as a user with the "authenticated user" role
    And I am a member of "UberShop"
    And I am on "sponsor/ubershop"
    When I click "Job"
    And I fill in the following:
      | title                         | MidCamp web lead                                            |
      | field_location[und][0][value] | Remote                                                      |
      | field_job_type[und][part]     | part                                                        |
      | field_skill_level[und]        | intermediate                                                |
      | body[und][0][value]           | Add bubbles to website, make bubbles pop on click. Bubbles! |
    And press "Save"

    Then I should see the heading "Jobs for UberShop" in the sidebar_second
    And the ".view.view-midcamp-sponsor-content .views-field-title" element should contain "MidCamp web lead"
    And the ".view.view-midcamp-sponsor-content .views-field-body" element should contain "Add bubbles to website, make bubbles pop on click. Bubbles!"

    #Anonymous user can see my job posting
    When I am an anonymous user
    And I am on "sponsor/ubershop"
    Then I should see the heading "Jobs for UberShop" in the sidebar_second
    And the ".view.view-midcamp-sponsor-content .views-field-title" element should contain "MidCamp web lead"
    And the ".view.view-midcamp-sponsor-content .views-field-body" element should contain "Add bubbles to website, make bubbles pop on click. Bubbles!"

    #Job posting is not shown on other sponsor pages
    When I am on "sponsor/durpal-durpal"
    Then I should not see "MidCamp web lead"

  @midcamp-276
  Scenario: The jobs page with no jobs
    Given I am an anonymous user
    When I am on "jobs"
    Then I should see "There are no job postings yet."

  @midcamp-276
  Scenario: The jobs page with jobs
    Given sponsor jobs:
      | sponsor         | title            | field_job_type | field_skill_level       | body                                                        |
      | UberShop        | MidCamp web lead | Part time      | intermediate/Proficient | Add bubbles to website, make bubbles pop on click. Bubbles! |
      | Drupal Hipsters | Art party        | Full time      | Expert/Advanced         | Selfies leggings bespoke, kale chips tousled keffiyeh       |

    #Not sure why I need to clear cache but test will fail on Firefox otherwise.
    And the cache has been cleared
    And I am an anonymous user

    When I am on "jobs"
    Then I should see "MidCamp web lead at UberShop"
    And I should see "Art party at Drupal Hipsters"

    When I select "UberShop" from "Show jobs from"
    And I press "Go"
    Then I should see "MidCamp web lead at UberShop"
    But I should not see "Art party at Drupal Hipsters"

    When I select "Drupal Hipsters" from "Show jobs from"
    And I press "Go"
    Then I should see "Art party at Drupal Hipsters"
    But I should not see "MidCamp web lead at UberShop"

    When I select "All companies" from "Show jobs from"
    And I press "Go"
    Then I should see "MidCamp web lead at UberShop"
    And I should see "Art party at Drupal Hipsters"

  @midcamp-299 @individual-sponsors @eventbrite
  Scenario: Individual sponsors show up on the sponsors page
    Given users:
      | name  | pass  | mail              | roles              | given name | family name | field_drupal_org_profile       |
      | dries | behat | dries@example.com | authenticated user | Dries      | Buytaert    | https://www.drupal.org/u/dries |

    And attendees:
      | ticket_id | email                | name           | attendee_id | order_id | ticket_name            |
      | 1         | notauser@example.com | Drew Paul      | 1           | 1        | Individual Sponsorship |
      | 2         | dries@example.com    | Dries Buytaert | 2           | 2        | Individual Sponsorship |

    And I am an anonymous user
    When I am on "sponsors"
    Then I should see the pane title "Individual Sponsors"
    And I should see 2 ".view.view-individual-sponsors .person" elements
    And I see the text "Dries Buytaert"
    And I should see the link "dries"
    And I see the text "Drew Paul"

@api @training
Feature: Training scenarios

  Background:
    Given users:
      | name  | pass  | mail              | roles              | given name | family name |
      | dries | behat | dries@example.com | authenticated user | Dries      | Buytaert    |
    And training content:
      | title         | field_trainers | body                      | field_training_length | field_cost | field_register_url           |
      | Uber Training | dries          | We will über your Drupal. | Full Day              | 25         | http://ubertraining.eventbrite.example.com |

  @midcamp-236
  Scenario: Training page
    Given I am an anonymous user
    And I am on the homepage
    When I click "Training Day"
    Then I should be on "/trainings"
    And I should see the link "Uber Training"
    And I see the text "We will über your Drupal."

    #Learn more link takes you to training page
    And I see the ".view-id-trainings div.view-content > div > div:nth-child(3) > span > a" element with the "href" attribute set to "training/uber-training" in the content
    #Register link takes you to register url
    And I see the ".view-id-trainings div.view-content div.views-field.views-field-field-register-for-this-training > div > a" element with the "href" attribute set to "http://ubertraining.eventbrite.example.com" in the content

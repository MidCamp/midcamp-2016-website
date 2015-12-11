@api @seo
Feature: Test SEO features

  @url-alias
  Scenario: Sponsor url alias
    Given I am viewing an "sponsor" content:
      | title | sponsor123 |
      | body  | words      |
    Then I should be on "sponsor/sponsor123"

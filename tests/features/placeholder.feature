@api @placeholder
  Feature: The placeholder works

    Scenario: Enabling the placeholder modules changes the homepage, disabling restores.
      Given the placeholder is not enabled
      And I am an anonymous user
      When I am on the homepage
      Then I should not see an "img[alt='MadCamp 2016 teaser sticker']" element
      And I should not see "EMAIL US AT SPONSOR@MIDCAMP.ORG TO HELP SPONSOR US NOW."

      When the placeholder is enabled
      And I am on the homepage
      Then I should see an "img[alt='MadCamp 2016 teaser sticker']" element
      And I should see "EMAIL US AT SPONSOR@MIDCAMP.ORG TO HELP SPONSOR US NOW."

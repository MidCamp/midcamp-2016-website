@api @front
Feature: Front page content

  @midcamp-224
  Scenario: Front page content
    Given I am an anonymous user
    When I am on the homepage

    #Date and venue block (not part of story description)
    Then I should see "March 17-20, 2016 at University of Illinois at Chicago (UIC)" in the header_top

    #Info section
    #And I see the heading "Save the Date for MidCamp 2016"
    And I should see "Save the Date for" in the content
    And I see the heading "MidCamp"

    #Sponsor section
    And I see the heading "Sponsor MidCamp 2016"
    And I should see the link "Learn more" in the content

    #Newsletter
    #And I see the heading "Stay up to date with our Email Newsletter"
    And I should see "Stay up to date with our" in the content
    And I should see "Email Newsletter" in the content

    #Newsletter fields
    And I fill in the following:
      | EMAIL | drewpaul |
      | FNAME | Drew     |
      | LNAME | Paul     |
    #Then I should see "Please enter a valid email address." in the ".mce_inline_error" element
    And I see the button "Subscribe"

  @midcamp-224 @newsletter @javascript
  Scenario: Front page content
    Given I am an anonymous user
    And I am on the homepage
    When I fill in the following:
      | EMAIL | drewpaul |
      | FNAME | Drew     |
      | LNAME | Paul     |
    Then I should see "Please enter a valid email address." in the "div[for=mce-EMAIL].mce_inline_error" element

    @midcamp-225
    Scenario: Main menu links
      Given I am an anonymous user
      And I am on the homepage
      Then I should see 2 "ul.menu--main-menu.menu.links li" elements
      And the "ul.menu--main-menu.menu.links li:nth-child(1)" element should contain "Become a Sponsor"
      And the "ul.menu--main-menu.menu.links li:nth-child(2)" element should contain "2015 MidCamp"

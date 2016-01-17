@api @front
Feature: Front page content

  @midcamp-224
  Scenario: Front page content
    Given I am an anonymous user
    Given "news" content:
      | title                     | promote | sticky | body                  | created           | updated           |
      | Example news 1            | 1       | 1      | Lorem Ipsum Example 1 | 2017-01-01 8:00am | 2017-01-01 8:00am |
      | Example news 2            | 0       | 0      | Lorem Ipsum Example 2 | 2017-01-01 8:01am | 2017-01-01 8:01am |
      | Example news 3            | 1       | 0      | Lorem Ipsum Example 3 | 2017-01-01 8:02am | 2017-01-01 8:02am |
      | Example news 4            | 0       | 0      | Lorem Ipsum Example 4 | 2017-01-01 8:03am | 2017-01-01 8:03am |
      | Example news 5            | 1       | 0      | Lorem Ipsum Example 5 | 2017-01-01 8:04am | 2017-01-01 8:04am |
      | Example news 6            | 1       | 0      | Lorem Ipsum Example 6 | 2017-01-01 8:05am | 2017-01-01 8:05am |
    Given the cache has been cleared
    When I am on the homepage

    #Date and venue block (not part of story description)
    Then I should see "March 17-20, 2016 at University of Illinois at Chicago (UIC)" in the header_top

    # News section
    Then I should see "Example news 1"
    Then I should not see "Example news 2"
    # 1 is older, but is sticky, so pushes 3 off the page.
    Then I should not see "Example news 3"
    Then I should not see "Example news 4"
    Then I should see "Example news 5"
    Then I should see "Example news 6"

    #Info section
    #And I see the heading "Save the Date for MidCamp 2016"
    #And I should see "Save the Date for" in the content
    #And the ".panel-panel.panel-col-first" element should contain "MidCamp 2016"

    #Sponsor section
    #And I see the heading "Sponsor MidCamp 2016"
    #And I should see the link "Learn more" in the content

  Scenario: Newsletter signup
    #Given I am an anonymous user
    #When I am on "/news/stay-date-our-email-newsletter"

    #Newsletter
    #And I should see "Stay up to date with our Email Newsletter"
    #And I should see "Stay up to date with our" in the content
    #And I should see "Email Newsletter" in the content

    #Newsletter fields
    #And I fill in the following:
    #  | EMAIL | drewpaul |
    #  | FNAME | Drew     |
    #  | LNAME | Paul     |
    #Then I should see "Please enter a valid email address." in the ".mce_inline_error" element
    #And I see the button "Subscribe"

  @midcamp-224 @newsletter @javascript
  Scenario: Invalid email address for newsletter sign up
    #Given I am an anonymous user
    #And I am on "/news/stay-date-our-email-newsletter"
    #When I fill in the following:
    #  | EMAIL | drewpaul |
    #  | FNAME | Drew     |
    #  | LNAME | Paul     |
    #Then I should see "Please enter a valid email address." in the "div[for=mce-EMAIL].mce_inline_error" element



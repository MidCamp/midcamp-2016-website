@api @menus
  Feature: Menu scenarios

    @midcamp-225 @main-menu
    Scenario: Main menu links
      Given I am an anonymous user
      And I am on the homepage
      Then I should see 4 "ul.menu--main-menu.menu.links li" elements
      And the "ul.menu--main-menu.menu.links li:nth-child(1)" element should contain "Sponsors"
      And the "ul.menu--main-menu.menu.links li:nth-child(2)" element should contain "Become a Sponsor"
      And the "ul.menu--main-menu.menu.links li:nth-child(3)" element should contain "Submitted Sessions"
      And the "ul.menu--main-menu.menu.links li:nth-child(4)" element should contain "2015 MidCamp"

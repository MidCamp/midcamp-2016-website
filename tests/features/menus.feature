@api @menus
  Feature: Menu scenarios

    @midcamp-225 @main-menu
    Scenario Outline: Main menu links
      Given I am an anonymous user
      And I am on the homepage
      Then I should see an "ul.menu--main-menu.menu.links" element
      And the "ul.menu--main-menu.menu.links" element should contain "<menu title>"
    Examples:
    | menu title         |
    | Sponsors           |
    | Become a Sponsor   |
    | Submitted Sessions |
    | 2015 MidCamp       |

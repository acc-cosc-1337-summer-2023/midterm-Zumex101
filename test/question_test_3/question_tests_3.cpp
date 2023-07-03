#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify Cookie Ingredients Calculation - Test Case 1", "[question3]") {
    int cookies = 48;
    std::vector<double> expectedIngredients = {1.5, 1.0, 2.75};
    REQUIRE(get_cookie_ingredients(cookies) == expectedIngredients);
}

TEST_CASE("Verify Cookie Ingredients Calculation - Test Case 2", "[question3]") {
    int cookies = 96;
    std::vector<double> expectedIngredients = {3.0, 2.0, 5.5};
    REQUIRE(get_cookie_ingredients(cookies) == expectedIngredients);
}

TEST_CASE("Verify Cookie Ingredients Calculation - Test Case 3", "[question3]") {
    int cookies = 24;
    std::vector<double> expectedIngredients = {0.75, 0.5, 1.375};
    REQUIRE(get_cookie_ingredients(cookies) == expectedIngredients);
}
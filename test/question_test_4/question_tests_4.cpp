#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Verify Fahrenheit Conversion - Test Case 1", "[question4]") {
    double celsius = 37;
    double expectedFahrenheit = 98.6;
    REQUIRE(get_fahrenheit(celsius) == expectedFahrenheit);
}

TEST_CASE("Verify Fahrenheit Conversion - Test Case 2", "[question4]") {
    double celsius = 25;
    double expectedFahrenheit = 77;
    REQUIRE(get_fahrenheit(celsius) == expectedFahrenheit);
}

TEST_CASE("Verify Fahrenheit Conversion - Test Case 3", "[question4]") {
    double celsius = 0;
    double expectedFahrenheit = 32;
    REQUIRE(get_fahrenheit(celsius) == expectedFahrenheit);
}
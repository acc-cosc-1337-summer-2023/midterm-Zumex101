#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify Sales Commission Calculation - Test Case 1", "[question1]") {
    double sales = 100;
    double expectedCommission = 5;
    REQUIRE(get_sales_commission(sales) == expectedCommission);
}

TEST_CASE("Verify Sales Commission Calculation - Test Case 2", "[question1]") {
    double sales = 750;
    double expectedCommission = 45;
    REQUIRE(get_sales_commission(sales) == expectedCommission);
}

TEST_CASE("Verify Sales Commission Calculation - Test Case 3", "[question1]") {
    double sales = 1100;
    double expectedCommission = 77;
    REQUIRE(get_sales_commission(sales) == expectedCommission);
}

TEST_CASE("Verify Sales Commission Calculation - Test Case 4", "[question1]") {
    double sales = 1750;
    double expectedCommission = 140;
    REQUIRE(get_sales_commission(sales) == expectedCommission);
}



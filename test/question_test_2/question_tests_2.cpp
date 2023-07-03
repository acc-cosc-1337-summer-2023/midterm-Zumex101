#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_dna_p_distance Function - Test Case 1", "[question2]") {
    std::string sequence1 = "GAGCCTACTAACGGGAT";
    std::string sequence2 = "CATCGTAATGACGGCCT";
    double expectedDistance = 0.4118;

    double pDistance = get_dna_p_distance(sequence1, sequence2);
    REQUIRE(pDistance == Approx(expectedDistance));
}

TEST_CASE("Verify get_dna_p_distance Function - Test Case 2", "[question2]") {
    std::string sequence1 = "GAGCCTACTAACGGGAT";
    std::string sequence2 = "GATCGTAATGACGGCCT";
    double expectedDistance = 0.3529;

    double pDistance = get_dna_p_distance(sequence1, sequence2);
    REQUIRE(pDistance == Approx(expectedDistance));
}

#include <iostream>
#include <iomanip> // for std::setprecision
#include "question2.h"

int main() {
    std::string sequence1, sequence2;

    // Prompt the user for the first sequence
    std::cout << "Enter the first DNA sequence: ";
    std::getline(std::cin, sequence1);

    // Prompt the user for the second sequence
    std::cout << "Enter the second DNA sequence: ";
    std::getline(std::cin, sequence2);

    double pDistance = get_dna_p_distance(sequence1, sequence2);
    std::cout << "P-Distance: " << std::fixed << std::setprecision(4) << pDistance << std::endl;

    return 0;
}

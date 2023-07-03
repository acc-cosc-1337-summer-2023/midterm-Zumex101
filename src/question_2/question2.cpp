#include "question2.h"

double get_dna_p_distance(const std::string& sequence1, const std::string& sequence2) {
    if (sequence1.length() != sequence2.length()) {
        // Sequences must have the same length for comparison
        return -1.0; // Error value to indicate invalid input
    }

    int diffCount = 0;
    int totalLength = sequence1.length();

    for (int i = 0; i < totalLength; ++i) {
        if (sequence1[i] != sequence2[i]) {
            diffCount++;
        }
    }

    double pDistance = static_cast<double>(diffCount) / totalLength;
    return pDistance;
}


bool test_config()
{
    return true;
}
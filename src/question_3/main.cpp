#include <iostream>
#include <vector>
#include <limits>
#include "question3.h"

int main() {
    char bakeMore;

    do {
        int numCookies;
        std::cout << "Enter the number of cookies to bake: ";
        std::cin >> numCookies;

        std::vector<double> ingredients = get_cookie_ingredients(numCookies);

        std::cout << "Cups of Sugar: " << ingredients[0] << std::endl;
        std::cout << "Cups of Butter: " << ingredients[1] << std::endl;
        std::cout << "Cups of Flour: " << ingredients[2] << std::endl;

        std::cout << "Do you want to bake more cookies? (Y/N): ";
        std::cin >> bakeMore;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (bakeMore == 'Y' || bakeMore == 'y');

    return 0;
}
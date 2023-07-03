#include <iostream>
#include <limits>
#include "question1.h"

int main() {
    while (true) {
        double sales;
        std::cout << "Enter the sales amount (or enter a negative value to exit): ";
        std::cin >> sales;

        // Check if the user wants to exit
        if (sales < 0) {
            break;
        }

        double commission = get_sales_commission(sales);
        std::cout << "Sales of " << sales << " yields a commission of " << commission << "." << std::endl;
    }

    return 0;
}
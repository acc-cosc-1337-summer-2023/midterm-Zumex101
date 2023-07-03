#include <iostream>
#include<limits>
#include "question4.h"

int main() {
    char choice;
    
    do {
        double celsius, fahrenheit;
        
        std::cout << "Enter a temperature in Celsius: ";
        std::cin >> celsius;
        
        // Call the function to convert Celsius to Fahrenheit
        fahrenheit = get_fahrenheit(celsius);
        
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
        
        std::cout << "Do you want to convert another temperature? (y/n): ";
        std::cin >> choice;
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
    } while (choice == 'y' || choice == 'Y');
    
    std::cout << "Program exited." << std::endl;
    
    return 0;
}
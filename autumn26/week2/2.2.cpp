// still incomplete
#include <iostream>

#include <iostream>

int main() {
    int year;

    std::cout << "Please enter a year:\n";
    std::cin >> year;

    if ((year % 4) == 0) { 
        // Divisible by 4
        if ((year % 100) == 0) { 
            // Divisible by 100 — check if also divisible by 400
            if ((year % 400) == 0) {
                std::cout << year << " is a leap year." << std::endl;
            } else {
                std::cout << year << " is not a leap year." << std::endl;
            }
        } else { 
            // Divisible by 4, but not by 100
            std::cout << year << " is a leap year." << std::endl;
        }
    } else {
        // Not divisible by 4
        std::cout << year << " is not a leap year." << std::endl;
    }

}
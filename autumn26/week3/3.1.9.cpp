#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter dividend (a) and divisor (b): ";
    std::cin >> a >> b;

    int quotient = 0;
    int remainder = a;

    while (remainder >= b) {
        remainder = remainder - b;
        quotient = quotient + 1;
    }

    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

}
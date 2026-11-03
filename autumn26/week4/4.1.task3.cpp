#include <iostream>

// Returns the larger of two numbers
double max3(double a, double b, double c) {
    if (a > b) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    double num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    double result = max3(num1, num2, num3);

    std::cout << "The maximum is: " << result << std::endl;
}
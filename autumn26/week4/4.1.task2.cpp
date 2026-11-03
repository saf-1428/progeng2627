#include <iostream>

// Returns the larger of two numbers
double max2(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    double num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    double result = max2(num1, num2);

    std::cout << "The maximum is: " << result << std::endl;

}
#include <iostream>

int main() {
    int n;
    int count = 0;
    double sum = 0;

    std::cout << "enter a number:";
    std::cin >> n;

    while (n != 0) {
        sum = sum + n;
        count = count + 1;
        
        // Cast or keep sum as double so the division is floating-point
        std::cout << "the average so far is:" << (sum / count) << std::endl;
        
        std::cout << "enter a number:";
        std::cin >> n;
    }

}
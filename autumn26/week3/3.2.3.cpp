#include <iostream>

int main() {
    int n, factorial = 1; 
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    std::cout << n << "! = " << factorial << std::endl;

}
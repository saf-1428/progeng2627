#include <iostream>

int main() {
    int n, i = 0; // Renamed counter to i
    std::cin >> n;

    while (i < n) {
        std::cout << "hello" << std::endl;
        i = i + 1;
    }
}
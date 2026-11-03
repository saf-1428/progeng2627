#include <iostream>
 
int main(){
    int n;
    double x, acc = 1;
    std::cout << "for x^n, enter x and n" << std::endl;
    std::cin >> x >> n;
    for(int i = 0; i < n; i++) {
        acc = acc * x;
    }
    std::cout << x << "^" << n << " = " << acc << std::endl;
}
#include <iostream>
#include <cmath>

int main(){
    double x, n, sum = 0;
    std::cout << "please enter x and n" <<  std::endl; 
    std::cin >> x >> n;
    for(int i = 0; i <= n; i++){ 
        sum += std::pow(x, i);
        
    }
    std::cout << sum << std::endl;
}
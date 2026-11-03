#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
    for(int i = 0; i < exp; i++){
        result *= base;
    }

    return result;

    if(exp < 0){
        result = 1/result;
    } 
}

int powsum(int x, int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){ 
        sum += mypow(x, i);
    }
    return sum;
}

int main(){
    double x, n, sum = 0;
    std::cout << "please enter x and n" <<  std::endl; 
    std::cin >> x >> n;
    sum = powsum(x, n);
    std::cout << sum << std::endl;
}
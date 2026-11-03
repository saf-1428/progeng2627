#include <iostream>

double mypow(int base, int exp){
    double result = 1;
    if(exp < 0){
        exp = -exp;
        for(int i = 0; i < exp; i++){
            result = result*base;
        }
        result = 1 / result;
    } else {
        for(int i = 0; i < exp; i++){
            result = result*base;
        }
    }
    return result;
}

int main(){
    double x, n, sum = 0;
    std::cout << "please enter x and n" <<  std::endl; 
    std::cin >> x >> n;
    for(int i = 0; i < n; i++){ 
        sum = sum + mypow(x, i);
        
    }
    std::cout << sum << std::endl;
}
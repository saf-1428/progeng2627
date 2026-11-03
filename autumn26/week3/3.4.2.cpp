#include <iostream>

int main(){
    int n, counter = 0, max = 0;
    std::cin >> n;
    while(n != 1){
        if(n % 2 == 0){
        n = n/2;
        std::cout << n << "\t";
        }
        else{
        n = 3*n + 1;
        std::cout << n << "\t";
        }
        counter = counter + 1;
        if(n > max){
            max = n;

        }
    }
    std::cout << "" << std::endl;
    std::cout << counter << " steps and maximum value obtained is " << max << std::endl;
    
}
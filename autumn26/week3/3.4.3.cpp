#include <iostream>

int main(){
    int n, lb, ub;
    std::cout << "whats the range of ur number" << std::endl;
    std::cin >> lb >> ub;
    std::cout << "think of a number within that range" << std::endl;
    char response;
    bool guessed = false;

    while(lb <= ub && !guessed) {
        int guess = lb + (ub - lb)/2;
        std::cout << "say y if ur number is " << guess << "? or reply with h for higher or l for lower" << std::endl;
        std::cin >> response;

        if (response == 'y' || response == 'Y') {
        std::cout << "yippeee";
        guessed = true;
        }
        else if (response == 'h' || response == 'H') {
         lb = guess + 1;
        }
        else if (response == 'l' || response == 'L'){
        ub = guess - 1;
        }
        else{
        std::cout << "invalid response, please input h/l/y only" << std::endl;

        }
    }

}
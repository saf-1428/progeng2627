#include <iostream>

int main(){
    int n, counter = 0;
    std::cin >> n;

    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
    while(counter < n){

        // the following loop draws one row
        for(int c = 0; c < n; c++){
            std::cout << "*"; 
            // there is no << std::endl
            // because we want them on the same row
        }

        std::cout << std::endl;
        // we go on a newline after each row
        counter = counter + 1;

    }

}
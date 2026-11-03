#include <iostream>

int main (){
    double euro, gbp, rate;
    std::cout << "how many GBP do u wish to convert to euros?" << std::endl;
    std::cin >> gbp;
    std::cout << "whats the gbp -> euros exchange rate?" << std::endl;
    std::cin >> rate;
    euro = gbp * rate;
    std::cout << euro << " euros" << std::endl;
}
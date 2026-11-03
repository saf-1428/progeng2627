#include <iostream>

int main (){
    double w, h, bmi;
    std::cout << "what is weight in kg" << std::endl;
    std::cin >> w;
    std::cout << "what is heigght in metres" << std::endl;
    std::cin >> h;
    bmi = w / (h*h);
    std::cout << "bmi is " << bmi << std::endl;
}
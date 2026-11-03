#include <iostream>

int main (){
    double x, y, prm, area;
    std::cout << "what is length of side x?" << std::endl;
    std::cin >> x;
    std::cout << "what is length of side y?" << std::endl;
    std::cin >> y;
    area = x*y;
    prm = x*2 + y*2;
    std::cout << "area is " << area << " and perimeter is " << prm << std::endl;
}
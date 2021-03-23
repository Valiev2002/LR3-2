#include "Square.h"
#include <iostream>
double Square::Perimeter() {
    return 2*(d+e);
}
void Square::print() {
    std::cout<<"First side: "<<d<<"Second side: "<<e<<std::endl;
}
Square::Square(double &code_red, double laskovaya_moya) {
    d=code_red;
    e=laskovaya_moya;
}

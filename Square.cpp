 #include "Square.h"
#include <iostream>
double Square::Perimeter() {
    return 2*(a+b);
}
void Square::print() {
    std::cout<<"First side: "<<a<<std::endl<<"Second side: "<<b<<std::endl;
}
Square::Square(double code_red, double laskovaya_moya):a(code_red),b(laskovaya_moya){}

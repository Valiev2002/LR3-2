#include "Triangle.h"
#include <iostream>
double Triangle::Perimeter() {
     return a+b+c;
    }
void Triangle::print() {
    std::cout<<"First side: "<<a<<std::endl<<"Second side: "<<b<<std::endl<<"Third side: "<<c<<std::endl;
}
Triangle::Triangle(double size1, double size2, double size3) {
    a=size1;
    b=size2;
    c=size3;

}

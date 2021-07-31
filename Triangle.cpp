#include "Triangle.h"
#include <iostream>
double Triangle::Perimeter() {
     return v+w+c;
    }
void Triangle::print() {
    std::cout<<"First side: "<<v<<std::endl<<"Second side: "<<w<<std::endl<<"Third side: "<<c<<std::endl;
}
Triangle::Triangle(double size1, double size2, double size3):v(size1),w(size2),c(size3){}

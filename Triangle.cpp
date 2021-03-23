#include "Triangle.h"
double Triangle::Perimeter() {
     return a+b+c;
    }
void Triangle::print() {
    std::cout<<"First side: "<<a<<"Second side: "<<b<<"Third side: "<<c<<std::endl;
}

Triangle::Triangle(double &size1, double &size2, double &size3) {
    a=size1;
    b=size2;
    c=size3;

}

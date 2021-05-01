#include "Figure.h"
#include<iostream>
void Figure::print() {
    std::cout<<"First side: "<<d<<std::endl<<"Second side: "<<e<<std::endl<<"Third side: "<<std::endl <<f<<std::endl;
}
Figure::Figure():d(1.0),e(2.0),f(3.0) {}
Figure::Figure(double a2, double b2, double c2) {
d=a2;
e=b2;
f=c2;
}

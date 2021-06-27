#include "Figure.h"
#include<iostream>
void Figure::print() {
    std::cout<<"First side: "<<a<<std::endl<<"Second side: "<<b<<std::endl<<"Third side: "<<std::endl <<c<<std::endl;
}
Figure::Figure():a(1.0),b(2.0),c(3.0) {}
Figure::Figure(double a2, double b2, double c2):a(a2),b(b2),c(c2){}

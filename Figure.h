#pragma once
#include <iostream>
class Figure{
protected:
    double a;
    double b;
    double c;
public:
virtual double Perimeter()=0;
virtual void print();
Figure(double a2,double b2,double c2);
    Figure();
};


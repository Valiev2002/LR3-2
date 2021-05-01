#pragma once
#include <iostream>
class Figure{
protected:
    double d;
    double e;
    double f;
public:
virtual double Perimeter()=0;
virtual void print();
Figure(double a2,double b2,double c2);
    Figure();
};


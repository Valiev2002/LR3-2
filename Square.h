#pragma once
#include "Figure.h"
class Square:public Figure {
protected:
    double a;
    double b;
public:
    double Perimeter() override;
   virtual void print();
    Square(double code_red,double laskovaya_moya);

};



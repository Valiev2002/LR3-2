#pragma once
#include "Figure.h"
class Triangle:public Figure {
protected:
    double v;
    double w;
    double c;
public:
     double Perimeter() override;
    void print() override;
    Triangle(double side1, double size2, double size3);
};


#include <iostream>
#include "Figure.h"
class Triangle:public Figure {
private:
    double a;
    double b;
    double c;
public:
     double Perimeter() override;
    void print() override;
    Triangle(double &side1,double &size2, double &size3);

};


#include <iostream>
#include "Figure.h"
class Square:public Figure {
private:
    double d;
    double e;
public:
    double Perimeter() override;
    void print() override;
    Square(double&code_red,double laskovaya_moya);

};



#include <iostream>
class Figure{
protected:
    float length;
    float width;
public:
    virtual double Perimeter()=0;
virtual void print()=0;
};


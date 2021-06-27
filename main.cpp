#include <iostream>
#include <vector>
#include "Figure.h"
#include "Square.h"
#include "Triangle.h"
int main() {
    std::vector <Figure*> fg;
    Figure* const test1 = new Triangle(1.0,2.0,3.0);
    fg.push_back(test1);
    Figure* const test2 = new Square(4.0, 5.0);
    fg.push_back(test2);
    for (auto & i : fg) {
        std::cout<<"Perimetr: "<<i->Perimeter()<<std::endl;
        i->print();
        std::cout << "----------------------" << std::endl;
    }
    delete(test1);
    delete (test2);
    return 0;
}

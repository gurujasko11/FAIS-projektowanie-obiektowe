#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calculator;
    Figure* triangle = calculator.getTriangle(10);
    Figure* square = calculator.getSquare(10);
    Figure* circle = calculator.getCircle(10);
    float pole = calculator.getPole(triangle);
    std::cout<<pole<<std::endl;
    pole = calculator.getPole(square);
    std::cout<<pole<<std::endl;
    pole = calculator.getPole(circle);
    std::cout<<pole<<std::endl;
}

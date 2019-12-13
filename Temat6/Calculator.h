#include "Figure.h"
#include "Triangle.h"

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Figure* getTriangle(float sl);
    Figure* getSquare(float sl);
    Figure* getCircle(float sl);
    float getPole(Figure* figure);
};

#endif //CALCULATOR_H
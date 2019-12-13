#include "Calculator.h"
#include "Square.h"
#include "Circle.h"

float Calculator::getPole(Figure * figure) {
    return figure->getPole();
}

Figure * Calculator::getTriangle(float sl) {
    return new Triangle(sl);
}

Figure * Calculator::getSquare(float sl) {
    return new Square(sl);
}

Figure * Calculator::getCircle(float sl) {
    return new Circle(sl);
}
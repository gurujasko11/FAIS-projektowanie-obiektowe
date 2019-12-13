#include "Circle.h"

Circle::Circle(float sl) :Figure(sl){};
Circle::~Circle() {};
float Circle::getPole() {
    return 3.14 * this->sideLength * this->sideLength;
}
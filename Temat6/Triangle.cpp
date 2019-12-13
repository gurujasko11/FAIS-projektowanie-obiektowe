#include "Triangle.h"

Triangle::Triangle(float sl) : Figure(sl) {}

Triangle::~Triangle() {}

float Triangle::getPole() {
    return (this->sideLength * this->sideLength)/4;
}
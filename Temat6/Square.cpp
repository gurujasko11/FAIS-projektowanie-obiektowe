#include "Square.h"

Square::Square(float sl) :Figure(sl){}
Square::~Square() {}
float Square::getPole() {
    return this->sideLength * this->sideLength;
}
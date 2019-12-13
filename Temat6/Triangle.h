#include "Figure.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public Figure {
public:
    Triangle(float sl);
    virtual ~Triangle();
    virtual float getPole();
};

#endif //TRIANGLE_H
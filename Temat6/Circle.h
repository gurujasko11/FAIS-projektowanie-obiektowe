#include "Figure.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle :public Figure{
public:
    Circle(float sl);
    virtual ~Circle();
    virtual float getPole();
};

#endif //CIRCLE_H
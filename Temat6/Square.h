#include "Figure.h"

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Figure{
public:
    Square(float sl);
    virtual ~Square();
    virtual float getPole();
};

#endif //SQUARE_H

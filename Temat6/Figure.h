#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
    const float sideLength;

    Figure(float sl);
    virtual ~Figure();
    virtual float getPole()=0;
};

#endif //FIGURE_H
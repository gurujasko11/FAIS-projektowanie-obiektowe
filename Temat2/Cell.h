#ifndef CELL_H
#define CELL_H

#include <list>
#include "Organel.h"
enum CellType {
    NONE = 0,
    PLANT = 1,
    ANIMAL = 2
};
class Cell {
public:
    Cell(CellType type_, std::list<Organel> organellsList);
    void print();
private:
    CellType type;
    std::list<Organel> organelles;
};

#endif //CELL_H

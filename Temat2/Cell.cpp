#include "Cell.h"
#include <iostream>

Cell::Cell(CellType type_, std::list<Organel> organellsList)
: type(type_), organelles(organellsList)
{};

void Cell::print() {
    if(type == ANIMAL)
        std::cout << "Animal";
    else
        std::cout << "Plant";
    std::cout << " cell, with organells:\n";
    for(auto i = this->organelles.begin(); i != this->organelles.end(); i++) {
        i->print();
    }
}
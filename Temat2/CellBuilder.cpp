#include "CellBuilder.h"
#include <iostream>

void CellBuilder::addOrganel(OrganelType type) {
    organells.push_back(Organel(type));
}

Cell* CellBuilder::buildCell(CellType type) {
    bool cellPresent = false;
    bool wallPresent = false;
    for(auto i=organells.begin(); i != organells.end(); ++i) {
        if(type == ANIMAL && i->type == WALL) {
            std::cout << "CAUTION: Cell wall could occur only in Plant cells\n";
            return nullptr;
        }
        if(type == ANIMAL && i->type == CHLOROPLASTS) {
            std::cout << "CAUTION: Chloroplast could occur only in Plant cells\n";
            return nullptr;
        }
        if(i->type == WALL) {
            if(wallPresent) {
                std::cout << "CAUTION: Cell could contain only one cell wall\n";
                return nullptr;
            }
            wallPresent = true;
        }
        if(i->type == NUCLEUS) {
            if(cellPresent) {
                std::cout << "CAUTION: Cell could contain only one nucleus\n";
                return nullptr;
            }
            cellPresent = true;
        }
    }
    if(!cellPresent) {
        std::cout << "CAUTION: Cell have to contain nucleus\n";
        return nullptr;
    }
    if(type == PLANT && !wallPresent) {
        std::cout << "CAUTION: Plant cell have to contain cell wall\n";
        return nullptr;
    }
    if(wallPresent) {
        type = PLANT;
    }
    if(type == NONE) {
//      here type could be randomize based on organells likelihood
//      however now, lets make it Animal always
        type = ANIMAL;
    }
    Cell* result = new Cell(type, organells);
    std::cout << "Succesfully created cell\n";
    organells.clear();
    return result;
}
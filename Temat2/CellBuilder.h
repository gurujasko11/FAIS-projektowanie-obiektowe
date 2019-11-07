#ifndef CELLBUILDER_H
#define CELLBUILDER_H

#include "Cell.h"

class CellBuilder {
public:
    void addOrganel(OrganelType type);
    Cell* buildCell(CellType type = NONE);
private:
    std::list<Organel> organells;
};

#endif //CELLBUILDER_H

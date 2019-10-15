#include "IStorageObject.h"

#ifndef TEMAT0_IDAO_H
#define TEMAT0_IDAO_H

class IDao {
public:
    IDao();
    virtual ~IDao();
    virtual void store(IStorageObject* iStorageObject) = 0;
    virtual void remove(IStorageObject* iStorageObject) = 0;
    virtual void update(IStorageObject* iStorageObject) = 0;
    virtual IStorageObject* read(unsigned int Id) = 0;
};

#endif //TEMAT0_IDAO_H

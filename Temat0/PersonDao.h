#include "IDao.h"
#include "Person.h"
#include <list>

#ifndef PERSONDAO_H
#define PERSONDAO_H

class PersonDao : public IDao{
public:
    PersonDao();
    virtual ~PersonDao();
    virtual void store(IStorageObject* iStorageObject);
    virtual void remove(IStorageObject* iStorageObject);
    virtual void update(IStorageObject* iStorageObject);
    virtual IStorageObject* read(unsigned int Id);
private:
    std::list<Person> personList;
};

#endif //PERSONDAO_H

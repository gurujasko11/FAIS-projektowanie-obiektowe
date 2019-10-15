#include "IDao.h"
#include "Person.h"
#include <list>
#include <string>

#ifndef PERSONDAO_H
#define PERSONDAO_H

class PersonDao : public IDao{
public:
    static PersonDao* getInstance();
    PersonDao();
    virtual ~PersonDao();
    void listAll();
    void readFile(std::string filename);
    void printToFile(std::string filename);
    virtual void store(IStorageObject* iStorageObject);
    virtual void remove(IStorageObject* iStorageObject);
    virtual void update(IStorageObject* iStorageObject);
    virtual IStorageObject* read(unsigned int Id);
private:
    static PersonDao* instance;
    std::list<Person> personList;private:
};


#endif //PERSONDAO_H

#include "IStorageObject.h"
#include <string>

#ifndef TEMAT0_PERSON_H
#define TEMAT0_PERSON_H

class Person : public IStorageObject{
public:
    Person();
    Person(std::string name_, std::string surename_, unsigned int age_);
    virtual ~Person();
    virtual void printMe();
    const unsigned int id;
    std::string name;
    std::string surename;
    unsigned int age;
private:
    static unsigned int idGenerator;
};

#endif //TEMAT0_PERSON_H
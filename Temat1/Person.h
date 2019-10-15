#include "IStorageObject.h"
#include <string>

#ifndef TEMAT0_PERSON_H
#define TEMAT0_PERSON_H

class Person : public IStorageObject{
public:
    Person(std::string name_, std::string surename_, unsigned int year_, unsigned int id_, unsigned int penalty_=0);
    virtual ~Person();
    virtual void printMe();

    const unsigned int id;
    std::string name;
    std::string surename;
    unsigned int year;
    unsigned int penalty;
};

#endif //TEMAT0_PERSON_H
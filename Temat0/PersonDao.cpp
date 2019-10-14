#include "PersonDao.h"

PersonDao::PersonDao() {
    std::cout << "PersonDao constructor";
}

PersonDao::~PersonDao() {
    std::cout << "PersonDao destructor";
}

void PersonDao::update(IStorageObject* iStorageObject) {
    Person* person = iStorageObject;
    for(auto i = personList.begin(); i != personList.end(); i++) {
        if(i->id == person->id) {
            i->name = person->name;
            i->surename = person->surename;
            i->age = person->age;
            return;
        }
    }
}

IStorageObject* PersonDao::read(unsigned int id) {
    for(auto i = personList.begin(); i != personList.end(); i++) {
        if (i->id == id) {
            return &(*i);
        }
    }
}

void PersonDao::remove(IStorageObject *iStorageObject) {
    for(auto i = personList.begin(); i != personList.end(); i++) {
        if (i->id == id) {
            personList.erase(i);
            delete *i;
            return;
        }
    }
}

void PersonDao::store(IStorageObject *iStorageObject) {
    personList.add(isStorageObject);
}
#include "PersonDao.h"
#include <iostream>

PersonDao::PersonDao() {
//    std::cout << "PersonDao constructor\n";
}

PersonDao::~PersonDao() {
//    std::cout << "PersonDao destructor\n";
}

void PersonDao::update(IStorageObject* iStorageObject) {
    Person* person = static_cast<Person*>(iStorageObject);
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
    return nullptr;
}

void PersonDao::remove(IStorageObject *iStorageObject) {
    Person* person = static_cast<Person*>(iStorageObject);
    for(auto i = personList.begin(); i != personList.end(); i++) {
        if (i->id == person->id) {
            personList.erase(i);
            return;
        }
    }
}

void PersonDao::store(IStorageObject *iStorageObject) {
    Person* person = static_cast<Person*>(iStorageObject);
    personList.push_back(*person);
}
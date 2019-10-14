#include "Person.h"
#include <iostream>
#include "IStorageObject.cpp"

Person::Person(std::string name_, std::string surename_, unsigned int age_)
    : name(name_), surename(surename_), age(age_), id(idGenerator++)
{}

Person::Person() : id(idGenerator++) {}

Person::~Person() {
    std::cout << "--DELETE PERSON--";
    printMe();
}

void Person::printMe() {
    std::cout << "[Person] id: " << this->id
              << "; name: " << this->name
              << "; surename: " << this->surename
              << "; age: " << this->age;
}


unsigned int Person::idGenerator = 0;
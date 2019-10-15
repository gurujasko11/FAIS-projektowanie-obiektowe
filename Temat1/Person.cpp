#include "Person.h"
#include <iostream>
#include "IStorageObject.h"

Person::Person(std::string name_, std::string surename_, unsigned int year_, unsigned int id_, unsigned int penalty_)
    : name(name_), surename(surename_), year(year_), id(id_), penalty(penalty_)
{}

Person::~Person() {
    std::cout << "--DELETE PERSON--\n";
    printMe();
}

void Person::printMe() {
    std::cout << "[Person] id: " << this->id
              << "; name: " << this->name
              << "; surename: " << this->surename
              << "; year: " << this->year
              << "; penalty: " << this->penalty <<"\n";
}
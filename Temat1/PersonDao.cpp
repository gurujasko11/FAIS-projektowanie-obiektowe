#include "PersonDao.h"
#include <iostream>
#include <fstream>

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
            i->year = person->year;
            i->penalty = person->penalty;
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
    if(read(person->id) == nullptr)
        personList.push_back(*person);
}

PersonDao* PersonDao::getInstance() {
    if(instance == nullptr)
        instance = new PersonDao();
    return instance;
}

void PersonDao::listAll() {
    for(auto i = personList.begin(); i != personList.end(); i++) {
        i->printMe();
    }
}

void PersonDao::readFile(std::string filename) {
    std::cout << "Reading file:" << filename << "\n";
    std::string line;
    std::ifstream infile(filename);
    if(infile.is_open()) {
        while (getline(infile, line)) {
            std::cout<<"Reading line: " << line<<"\n";
            std::string delimiter = ";";
            unsigned int id = std::stoul(line.substr(0, line.find(delimiter)));
            line.erase(0, line.find(delimiter) + delimiter.length());

            std::string name = line.substr(0, line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());

            std::string surename = line.substr(0, line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());

            unsigned int year = std::stoul(line.substr(0, line.find(delimiter)));
            line.erase(0, line.find(delimiter) + delimiter.length());

            unsigned int penalty = std::stoul(line.substr(0, line.find(delimiter)));
            line.erase(0, line.find(delimiter) + delimiter.length());

            Person* person = new Person(name, surename, year, id, penalty);
            store(person);
            person->printMe();
        }
    } else {
        std::cout << "cannot open file\n";
    }

}

void PersonDao::printToFile(std::string filename) {
    std::ofstream myfile;
    myfile.open (filename);
    for(auto i = personList.begin(); i != personList.end(); i++) {
        myfile << i->id << ";" << i->name << ";" << i->surename << ";" << i->year << ";" << i->penalty <<"\n";
    }
}

PersonDao* PersonDao::instance = nullptr;
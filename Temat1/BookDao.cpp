#include "BookDao.h"
#include <iostream>
#include <fstream>

BookDao::BookDao() {
//    std::cout << "BookDao constructor\n";
}

BookDao::~BookDao() {
//    std::cout << "BookDao destructor\n";
}

void BookDao::update(IStorageObject* iStorageObject) {
    Book* book = static_cast<Book*>(iStorageObject);
    for(auto i = bookQueue.begin(); i != bookQueue.end(); i++) {
        if(i->id == book->id) {
            i->title = book->title;
            i->author = book->title;
            i->userId = book->userId;
            return;
        }
    }
}

IStorageObject* BookDao::read(unsigned int id) {
    for(auto i = bookQueue.begin(); i != bookQueue.end(); i++) {
        if (i->id == id) {
            return &(*i);
        }
    }
    return nullptr;
}

void BookDao::remove(IStorageObject *iStorageObject) {
    Book* book = static_cast<Book*>(iStorageObject);
    for(auto i = bookQueue.begin(); i != bookQueue.end(); i++) {
        if (i->id == book->id) {
            bookQueue.erase(i);
            return;
        }
    }
}

void BookDao::store(IStorageObject *iStorageObject) {
    Book* book = static_cast<Book*>(iStorageObject);
    if(read(book->id) == nullptr)
        bookQueue.push_back(*book);
}

void BookDao::listAll() {
    for(auto i = bookQueue.begin(); i != bookQueue.end(); i++) {
        i->printMe();
    }
}

void BookDao::readFile(std::string filename) {
    std::cout << "Reading file:" << filename << "\n";
    std::string line;
    std::ifstream infile(filename);
    if(infile.is_open()) {
        while (getline(infile, line)) {
            std::cout<<"Reading line: " << line<<"\n";
            std::string delimiter = ";";
            unsigned int id = std::stoul(line.substr(0, line.find(delimiter)));
            line.erase(0, line.find(delimiter) + delimiter.length());

            std::string title = line.substr(0, line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());

            std::string author = line.substr(0, line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());

            unsigned int userId = std::stoul(line.substr(0, line.find(delimiter)));
            line.erase(0, line.find(delimiter) + delimiter.length());

            Book* book = new Book(title, author, id, userId);
            store(book);
            book->printMe();
        }
    } else {
        std::cout << "cannot open file\n";
    }

}

void BookDao::printToFile(std::string filename) {
    std::ofstream myfile;
    myfile.open (filename);
    for(auto i = bookQueue.begin(); i != bookQueue.end(); i++) {
        myfile << i->id << ";" << i->title << ";" << i->author << ";" << i->userId << "\n";
    }
}

BookDao* BookDao::getInstance() {
    if(instance == nullptr)
        instance = new BookDao();
    return instance;
}


BookDao* BookDao::instance = nullptr;

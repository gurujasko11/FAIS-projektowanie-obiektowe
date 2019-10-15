#include "BookDao.h"
#include <iostream>

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
            i->year = book->year;
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
    bookQueue.push_back(*book);
}
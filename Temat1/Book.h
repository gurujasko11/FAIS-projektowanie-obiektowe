#include "IStorageObject.h"
#include <string>

#ifndef BOOK_H
#define BOOK_H

class Book : public IStorageObject{
public:
    Book(std::string title_, std::string author_, unsigned int id_, unsigned int userId_);
    virtual ~Book();
    virtual void printMe();
    void borrowBook(unsigned int userId_);
    void returnBook();

    std::string title;
    std::string author;
    unsigned int userId;
    unsigned int id;
};


#endif //BOOK_H

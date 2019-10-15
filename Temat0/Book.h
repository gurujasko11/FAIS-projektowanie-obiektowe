#include "IStorageObject.h"
#include <string>

#ifndef BOOK_H
#define BOOK_H

class Book : public IStorageObject{
public:
    Book(std::string title_, std::string author_, unsigned int year_);
    virtual ~Book();
    virtual void printMe();
    std::string title;
    std::string author;
    unsigned int year;
    unsigned int id;
private:
    static unsigned int idGenerator;
};


#endif //BOOK_H

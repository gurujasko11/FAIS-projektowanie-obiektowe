#include "IStorageObject.h"
#include <string>

#ifndef BOOK_H
#define BOOK_H

class Book : public IStorageObject{
public:
    Book(std::string title_, std::string author_, unsigned int year_);
    std::string title;
    std::string author;
    unsigned int year;
private:
    unsigned int id;
    static unsigned int idGenerator;
};


#endif //BOOK_H

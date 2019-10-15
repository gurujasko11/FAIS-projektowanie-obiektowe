#include "Book.h"
#include <iostream>

Book::~Book() {
    std::cout << "--DELETE BOOK--\n";
    printMe();
}
Book::Book(std::string title_, std::string author_, unsigned int year_)
        : title(title_), author(author_), year(year_), id(idGenerator++)
{std::cout << "Book constructor\n";}

void Book::printMe() {
    std::cout << "[Book] id: " << this->id
              << "; title: " << this->title
              << "; author: " << this->author
              << "; year: " << this->year << "\n";
}

unsigned int Book::idGenerator = 0;
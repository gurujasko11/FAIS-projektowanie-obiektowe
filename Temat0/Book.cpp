#include "Book.h"
#include <iostream>

Book::Book(std::string title_, std::string author_, unsigned int year_)
        : title(title_), author(author_), year(year_), id(idGenerator++)
{}

void Book::printMe() {
    std::cout << "[Book] id: " << this.id
              << "; title: " << this.title
              << "; author: " << this.author
              << "; year: " << this.year;
}

Book::idGenerator = 0;
#include "Book.h"
#include <iostream>

Book::~Book() {
    std::cout << "--DELETE BOOK--\n";
    printMe();
}
Book::Book(std::string title_, std::string author_, unsigned int id_, unsigned int userId_)
        : title(title_), author(author_), userId(userId_), id(id_)
{std::cout << "Book constructor\n";}

void Book::printMe() {
    std::cout << "[Book] id: " << this->id
              << "; title: " << this->title
              << "; author: " << this->author
              << "; userId: " << this->userId << "\n";
}

void Book::borrowBook(unsigned int userId_) {
    if(userId != 0) {
        std::cout << "Someone else already borrow this book, cannot borrow!\n";
    } else {
        userId = userId_;
        std::cout << "Succesfully borrowed book!\n";
    }
}

void Book::returnBook() {
    userId = 0;
    std::cout << "Succesfully returned book!\n";
}
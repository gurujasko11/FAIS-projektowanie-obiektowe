#include <iostream>
#include <string>
#include "Person.h"
#include "PersonDao.h"
#include "Book.h"
#include "BookDao.h"

int main() {
    PersonDao* personDao = PersonDao::getInstance();
    personDao->readFile("../Users.csv");
    Person* janKowalski = new Person("Janusz", "Kowalski", 1999, 3);
    personDao->store(janKowalski);

    BookDao* bookDao = BookDao::getInstance();
    bookDao->readFile("../Books.csv");
    Book* ksiazka = new Book("1984", "George Orwell", 2, 0);
    bookDao->store(ksiazka);

    static_cast<Book*>(bookDao->read(1))->borrowBook(1);
    static_cast<Book*>(bookDao->read(1))->returnBook();
    static_cast<Book*>(bookDao->read(1))->borrowBook(1);

    static_cast<Book*>(bookDao->read(2))->borrowBook(3);

    bookDao->printToFile("../Books.csv");
    personDao->printToFile("../Users.csv");
}
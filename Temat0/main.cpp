#include <iostream>
#include <string>
#include "Person.h"
#include "PersonDao.h"
#include "Book.h"
#include "BookDao.h"

int main() {
    PersonDao* personDao = new PersonDao();
    Person* janKowalski = new Person("Jan", "Kowalski", 20);
    personDao->store(janKowalski);
    personDao->read(janKowalski->id)->printMe();
    janKowalski->name = "Janek";
    personDao->update(janKowalski);
    personDao->read(janKowalski->id)->printMe();
    personDao->remove(janKowalski);

    delete(personDao);

    BookDao* bookDao = new BookDao();
    Book* ksiazka = new Book("1984", "George Orwell", 1949);
    bookDao->store(ksiazka);
    bookDao->read(ksiazka->id)->printMe();
    ksiazka->title = "Nineteen Eighty-Four";
    bookDao->update(ksiazka);
    bookDao->read(ksiazka->id)->printMe();
    bookDao->remove(ksiazka);
    delete(bookDao);

}
#include <iostream>
#include <string>
#include "Person.h"
#include "PersonDao.h"

int main() {
    PersonDao* personDao = new PersonDao();
    Person* janKowalski = new Person("Jan", "Kowalski", 20);
    personDao->store(janKowalski);

}
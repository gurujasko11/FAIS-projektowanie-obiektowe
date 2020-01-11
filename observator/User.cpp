#include "User.h"
#include "iostream"
#include "Auction.h"

User::User(std::string n) : name(n) { }

User::~User() { }

void User::update(ObservedSubject* observedSubject) {
    Auction* auction = static_cast<Auction*>(observedSubject);
    std::cout << "User " << this->name <<" has been notified of price change for " << auction->name << " to price " << auction->price << std::endl;
}
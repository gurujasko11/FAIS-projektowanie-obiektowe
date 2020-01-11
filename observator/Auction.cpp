#include "Auction.h"

Auction::~Auction() { };

Auction::Auction(std::string n, float p) : name(n), price(p) { };

void Auction::bid(float bid) {
    this->price = bid;
}
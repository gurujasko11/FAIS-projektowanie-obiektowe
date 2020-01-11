#ifndef AUCTION_H
#define AUCTION_H

#include "ObservedSubject.h"
#include "string"

class Auction : public ObservedSubject{
public:
    Auction();
    Auction(std::string n, float p);
    std::string name;
    float price;
    void bid(float bid);
    virtual ~Auction();
};


#endif //AUCTION_H

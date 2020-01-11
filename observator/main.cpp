#include <iostream>
#include "User.h"
#include "Auction.h"

int main() {
    Auction auction1 = Auction("car", 1000);
    User user1 = User("user1");
    auction1.price = 1100;
    auction1.updateObservers();
    auction1.attach(&user1);
    auction1.price = 1200;
    auction1.updateObservers();
//    Program output:
//    User user1 has been notified of price change for car to price 1200
}

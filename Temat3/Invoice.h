#pragma once
#include <string>
#include <list>

#ifndef INVOICE_H
#define INVOICE_H

class Invoice {
public:
    unsigned int id;
    std::string billedTo;
    std::string date;
    unsigned int amount;
    std::list<std::string> items;

};

#endif //INVOICE_H

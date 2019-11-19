#include <string>
#include <iostream>
#include <fstream>
#include "Invoice.h"

#ifndef SERIALIZER_H
#define SERIALIZER_H

class Serializer {
public:
    Serializer();
    virtual ~Serializer();
    virtual void serialize(const Invoice& invoice, const std::string& filename) = 0;

};

#endif //SERIALIZER_H
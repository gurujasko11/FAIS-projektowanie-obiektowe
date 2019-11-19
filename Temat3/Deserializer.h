#include "string"
#include <fstream>
#include "Invoice.h"

#ifndef DESERIALIZER_H
#define DESERIALIZER_H

class Deserializer {
public:
    Deserializer();
    virtual ~Deserializer();
    virtual Invoice deserialize(const std::string& filename) = 0;
};

#endif //DESERIALIZER_H

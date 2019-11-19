#include "Serializer.h"

#ifndef CSVSERIALIZER_H
#define CSVSERIALIZER_H

class CsvSerializer : public Serializer{
public:
    CsvSerializer();
    virtual ~CsvSerializer();
    virtual void serialize(const Invoice& invoice, const std::string& filename);
};

#endif //JSONSERIALIZER_H

#include "Serializer.h"

#ifndef JSONSERIALIZER_H
#define JSONSERIALIZER_H

class JsonSerializer : public Serializer{
public:
    JsonSerializer();
    virtual ~JsonSerializer();
    virtual void serialize(const Invoice& invoice, const std::string& filename);
};

#endif //JSONSERIALIZER_H

#include "Deserializer.h"

#ifndef JSONDESERIALIZER_H
#define JSONDESERIALIZER_H

class JsonDeserializer : public Deserializer{
public:
    JsonDeserializer();
    virtual ~JsonDeserializer();
    virtual Invoice deserialize(const std::string& filename);
};

#endif //JSONDESERIALIZER_H

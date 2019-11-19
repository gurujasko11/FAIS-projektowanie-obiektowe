#include "Serializer.h"
#include "Deserializer.h"

#ifndef SERIALIZERFACTORY_H
#define SERIALIZERFACTORY_H

class SerializerFactory {
public:
    virtual Serializer* getSerializer() = 0;
    virtual Deserializer* getDeserializer() = 0;
    virtual ~SerializerFactory();
    SerializerFactory();
};

#endif //SERIALIZERFACTORY_H

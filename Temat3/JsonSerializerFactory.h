#include "SerializerFactory.h"

#ifndef JSONSERIALIZERFACTORY_H
#define JSONSERIALIZERFACTORY_H

class JsonSerializerFactory : public SerializerFactory {
public:
    virtual Serializer* getSerializer();
    virtual Deserializer* getDeserializer();
    virtual ~JsonSerializerFactory();
    JsonSerializerFactory();

};

#endif //JSONSERIALIZERFACTORY_H

#include "SerializerFactory.h"

#ifndef CSVSERIALIZERFACTORY_H
#define CSVSERIALIZERFACTORY_H

class CsvSerializerFactory : public SerializerFactory {
public:
    virtual Serializer* getSerializer();
    virtual Deserializer* getDeserializer();
    virtual ~CsvSerializerFactory();
    CsvSerializerFactory();

};

#endif //CSVSERIALIZERFACTORY_H

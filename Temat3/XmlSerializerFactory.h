#include "SerializerFactory.h"

#ifndef XMLSERIALIZERFACTORY_H
#define XMLSERIALIZERFACTORY_H

class XmlSerializerFactory : public SerializerFactory {
public:
    virtual Serializer* getSerializer();
    virtual Deserializer* getDeserializer();
    virtual ~XmlSerializerFactory();
    XmlSerializerFactory();

};

#endif //XMLSERIALIZERFACTORY_H

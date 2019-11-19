#include "XmlSerializerFactory.h"
#include "XmlSerializer.h"
#include "XmlDeserializer.h"

XmlSerializerFactory::XmlSerializerFactory() {}

XmlSerializerFactory::~XmlSerializerFactory() {}

Serializer* XmlSerializerFactory::getSerializer() {
    return new XmlSerializer();
}

Deserializer* XmlSerializerFactory::getDeserializer() {
    return new XmlDeserializer();
}
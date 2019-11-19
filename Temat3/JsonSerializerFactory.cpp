#include "JsonSerializerFactory.h"
#include "JsonSerializer.h"
#include "JsonDeserializer.h"

JsonSerializerFactory::JsonSerializerFactory() {}

JsonSerializerFactory::~JsonSerializerFactory() {}

Serializer* JsonSerializerFactory::getSerializer() {
    return new JsonSerializer();
}

Deserializer* JsonSerializerFactory::getDeserializer() {
    return new JsonDeserializer();
}
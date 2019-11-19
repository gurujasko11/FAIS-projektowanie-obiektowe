#include "CsvSerializerFactory.h"
#include "CsvSerializer.h"
#include "CsvDeserializer.h"

CsvSerializerFactory::CsvSerializerFactory() {}

CsvSerializerFactory::~CsvSerializerFactory() {}

Serializer* CsvSerializerFactory::getSerializer() {
    return new CsvSerializer();
}

Deserializer* CsvSerializerFactory::getDeserializer() {
    return new CsvDeserializer();
}
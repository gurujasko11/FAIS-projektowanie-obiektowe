#include <iostream>
#include "CsvSerializerFactory.h"
#include "JsonSerializerFactory.h"
#include "XmlSerializerFactory.h"

int main() {
    Invoice invoice;
    invoice.id = 1;
    invoice.amount = 123;
    invoice.date = "12-12-2012";
    invoice.billedTo = "Jan Kowalski";
    invoice.items.push_back("Item1");
    invoice.items.push_back("Item2");

    XmlSerializerFactory xmlSerializerFactory;
    CsvSerializerFactory csvSerializerFactory;
    JsonSerializerFactory jsonSerializerFactory;

    Serializer* xmlSerializerPtr = xmlSerializerFactory.getSerializer();
    Deserializer* xmlDeserializerPtr = xmlSerializerFactory.getDeserializer();

    xmlSerializerPtr->serialize(invoice, "invoice1.xml");
    Invoice invoice2 = xmlDeserializerPtr->deserialize("invoice1.xml");

    Serializer* csvSerializerPtr = csvSerializerFactory.getSerializer();
    Deserializer* csvDeserializerPtr = csvSerializerFactory.getDeserializer();

    csvSerializerPtr->serialize(invoice2, "invoice2.csv");
    Invoice invoice3 = csvDeserializerPtr->deserialize("invoice2.csv");

    Serializer* jsonSerializerPtr = jsonSerializerFactory.getSerializer();
    Deserializer* jsonDeserializerPtr = jsonSerializerFactory.getDeserializer();

    jsonSerializerPtr->serialize(invoice3, "invoice3.json");
    Invoice invoice4 = jsonDeserializerPtr->deserialize("invoice3.json");

    xmlSerializerPtr->serialize(invoice4, "invoice4.xml");

}
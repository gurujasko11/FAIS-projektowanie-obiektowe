#include "Serializer.h"

#ifndef XMLSERIALIZER_H
#define XMLSERIALIZER_H

class XmlSerializer : public Serializer{
public:
    XmlSerializer();
    virtual ~XmlSerializer();
    virtual void serialize(const Invoice& invoice, const std::string& filename);
};

#endif //XMLSERIALIZER_H

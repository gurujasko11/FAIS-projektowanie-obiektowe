#include "Deserializer.h"

#ifndef XMLDESERIALIZER_H
#define XMLDESERIALIZER_H

class XmlDeserializer : public Deserializer{
public:
    XmlDeserializer();
    virtual ~XmlDeserializer();
    virtual Invoice deserialize(const std::string& filename);
};

#endif //XMLDESERIALIZER_H

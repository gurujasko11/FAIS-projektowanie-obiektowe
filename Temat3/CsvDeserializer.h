#include "Deserializer.h"

#ifndef CSVDESERIALIZER_H
#define CSVDESERIALIZER_H

class CsvDeserializer : public Deserializer{
public:
    CsvDeserializer();
    virtual ~CsvDeserializer();
    virtual Invoice deserialize(const std::string& filename);
};

#endif //CSVDESERIALIZER_H

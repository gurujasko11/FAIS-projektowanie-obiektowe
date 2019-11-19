#include "CsvDeserializer.h"
#include "iostream"
CsvDeserializer::CsvDeserializer() {

}

CsvDeserializer::~CsvDeserializer() {

}

Invoice CsvDeserializer::deserialize(const std::string &filename) {
    Invoice invoice;
    std::ifstream infile(filename);
    std::string line, element;
    std::getline(infile, line);
    std::size_t current, previous = 0;
    char delim = ';';
    int elementId = 0;
    current = line.find(delim);
    while (current != std::string::npos) {
        element = (line.substr(previous, current - previous));
        switch(elementId) {
            case 0:
                invoice.id = std::stoi(element);
                break;
            case 1:
                invoice.billedTo = element;
                break;
            case 2:
                invoice.date = element;
            default:
                break;
        }
        previous = current + 1;
        current = line.find(delim, previous);
        elementId++;
    }
    element = (line.substr(previous, current - previous));
    invoice.amount = std::stoi(element);
    while(std::getline(infile, line)) {
        invoice.items.push_back(line);
    }
    return invoice;
}
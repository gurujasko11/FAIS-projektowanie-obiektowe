#include "XmlDeserializer.h"
#include "iostream"
XmlDeserializer::XmlDeserializer() {

}

XmlDeserializer::~XmlDeserializer() {

}

Invoice XmlDeserializer::deserialize(const std::string &filename) {
    Invoice invoice;
    std::ifstream infile(filename);
    std::string line;
    while(std::getline(infile, line)) {
        if(line.find("<Id>") != std::string::npos) {
            invoice.id = std::stoi(line.substr(4, line.length()-9));
        }
        if(line.find("<BilledTo>") != std::string::npos) {
            invoice.billedTo = line.substr(10, line.length()-21);
        }
        if(line.find("<Date>") != std::string::npos) {
            invoice.date = line.substr(6, line.length()-13);
        }
        if(line.find("<Amount>") != std::string::npos) {
            invoice.amount = std::stoi(line.substr(8, line.length()-17));
        }
        if(line.find("<Item>") != std::string::npos) {
            invoice.items.push_back(line.substr(6, line.length()-13));
        }
    }
    return invoice;
}
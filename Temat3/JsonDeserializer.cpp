#include "JsonDeserializer.h"
#include "iostream"
JsonDeserializer::JsonDeserializer() {

}

JsonDeserializer::~JsonDeserializer() {

}

Invoice JsonDeserializer::deserialize(const std::string &filename) {
    Invoice invoice;
    std::ifstream infile(filename);
    std::string line;
    bool readingItems = false;
    while(std::getline(infile, line)) {
        if(readingItems) {
            if(line.substr(line.length()-1, 1) != ",") {
                invoice.items.push_back(line.substr(1, line.length()-2));
                return invoice;
            } else {
                invoice.items.push_back(line.substr(1, line.length()-3));
            }
        } else {
            if(line.find("\"Items\":[") != std::string::npos) {
                readingItems = true;
            }
            else if (line.find("\"Id\":") != std::string::npos) {
                invoice.id = std::stoi(line.substr(6, line.length()-8));
            }
            else if (line.find("\"BilledTo\":") != std::string::npos) {
                invoice.billedTo = line.substr(12, line.length()-14);
            }
            else if (line.find("\"Date\":") != std::string::npos) {
                invoice.date = line.substr(8, line.length()-10);
            }
            else if (line.find("\"Amount\":") != std::string::npos) {
                invoice.amount = std::stoi(line.substr(10, line.length()-12));
            }
        }
    }
    return invoice;
}
#include "JsonSerializer.h"

JsonSerializer::JsonSerializer() {

}

JsonSerializer::~JsonSerializer() {

}

void JsonSerializer::serialize(const Invoice &invoice, const std::string &filename) {
    std::ofstream file;
    file.open (filename);

    file << "{\n";
    file << "\"Id\":\"" << invoice.id << "\",\n";
    file << "\"BilledTo\":\"" << invoice.billedTo << "\",\n";
    file << "\"Date\":\"" << invoice.date << "\",\n";
    file << "\"Amount\":\"" << invoice.amount << "\",\n";
    file << "\"Items\":[\n";

    auto i = invoice.items.begin();
    while(i != invoice.items.end()){
        file << "\"" << *i;
        i++;
        if((i != invoice.items.end())) {
            file << "\",\n";
        } else {
            file << "\"\n";
        }
    }
    file << "]\n}";
}


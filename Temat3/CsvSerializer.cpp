#include "CsvSerializer.h"

CsvSerializer::CsvSerializer() {

}

CsvSerializer::~CsvSerializer() {

}

void CsvSerializer::serialize(const Invoice &invoice, const std::string &filename) {
    std::ofstream file;
    file.open (filename);

    file << invoice.id << ";" << invoice.billedTo << ";" << invoice.date << ";" << invoice.amount << "\n";

    for(auto i = invoice.items.begin(); i != invoice.items.end(); i++) {
        file << *i << "\n";
    }
}


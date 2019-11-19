#include "XmlSerializer.h"

void XmlSerializer::serialize(const Invoice &invoice, const std::string &filename) {
    std::ofstream file;
    file.open (filename);
    file << "<Invoice>\n";

    file << "<Id>";
    file << invoice.id;
    file << "</Id>\n";

    file << "<BilledTo>";
    file << invoice.billedTo;
    file << "</BilledTo>\n";

    file << "<Date>";
    file << invoice.date;
    file << "</Date>\n";

    file << "<Amount>";
    file << invoice.amount;
    file << "</Amount>\n";

    file << "<Items>\n";

    for(auto i = invoice.items.begin(); i != invoice.items.end(); i++) {
        file << "<Item>";
        file << *i;
        file << "</Item>\n";
    }
    file << "</Items>\n";

    file << "</Invoice>\n";
    file.close();
}

XmlSerializer::~XmlSerializer() {

}

XmlSerializer::XmlSerializer() {

}
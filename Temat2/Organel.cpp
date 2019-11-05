#include "Organel.h"
#include <iostream>
#include <string>
Organel::Organel(OrganelType type_) : type(type_){};

void Organel::print() {
    std::string result;
    switch(type) {
        case WALL:
            result = "WALL";
            break;
        default:
            result = "unknown type";
    }
    std::cout<<"Organell type: "+ result <<std::endl;
}
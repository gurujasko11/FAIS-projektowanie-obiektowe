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
        case MEMBRANE:
            result = "MEMBRANE";
            break;
        case NUCLEUS:
            result = "NUCLEUS";
            break;
        case NUCLEUS_MEMBRANE:
            result = "NUCLEUS_MEMBRANE";
            break;
        case CYTOPLASM:
            result = "CYTOPLASM";
            break;
        case ENDOPLASMIC_RETICULUM:
            result = "ENDOPLASMIC_RETICULUM";
            break;
        case RIBOSOMES:
            result = "RIBOSOMES";
            break;
        case MITOCHONDRION:
            result = "MITOCHONDRION";
            break;
        case VACUOLES:
            result = "VACUOLES";
            break;
        case LYSOSOMES:
            result = "LYSOSOMES";
            break;
        case CHLOROPLASTS:
            result = "CHLOROPLASTS";
            break;
        default:
            result = "unknown type";
    }
    std::cout<<"Organell type: "+ result <<std::endl;
}
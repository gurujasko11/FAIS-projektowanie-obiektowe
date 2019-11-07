#include <iostream>
#include "CellBuilder.h"

int main() {
    CellBuilder builder;
    bool appRuning = true;
    int userInput = 0;
    while(appRuning) {
        std::cout << "Select what to do next:\n";
        std::cout << "0-create cell\n";
        std::cout << "1-add organell\n";
        std::cout << "2-close program\n";
        std::cin >> userInput;
        switch(userInput) {
            case 0: {
                std::cout << "Please select cell type:\n";
                std::cout << "1- PLANT\n";
                std::cout << "2- ANIMAL\n";
                std::cin >> userInput;
                Cell* result;
                if(userInput == 1)
                    result = builder.buildCell(PLANT);
                else if(userInput == 2)
                    result = builder.buildCell(ANIMAL);
                else
                    result = builder.buildCell();
                if(result != nullptr) {
                    result->print();
                } else {
                    std::cout << "Creating new cell, organells list is empty now\n";
                }
                break;
            }
            case 1:{
                std::cout << "Please select organell type:\n";
                std::cout << "1- WALL\n";
                std::cout << "2- MEMBRANE\n";
                std::cout << "3- NUCLEUS\n";
                std::cout << "4- NUCLEUS_MEMBRANE\n";
                std::cout << "5- CYTOPLASM\n";
                std::cout << "6- ENDOPLASMIC_RETICULUM\n";
                std::cout << "7- RIBOSOMES\n";
                std::cout << "8- MITOCHONDRIUM\n";
                std::cout << "9- VACUOLES\n";
                std::cout << "10- LYSOSOMES\n";
                std::cout << "11- CHLOROPLASTS\n";
                std::cin >> userInput;
                if(userInput > 0 && userInput <= 11) {
                    builder.addOrganel(OrganelType(userInput));
                } else {
                    std::cout << "Wrong organell type, next time please select number from range [1,11].\n";
                }
                break;
            }
            default: {
                return 0;
            }
        }
    }
    return 0;
}
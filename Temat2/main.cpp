#include <iostream>
#include "CellBuilder.h"

int main() {
    CellBuilder builder;
    bool appRuning = true;
    int userInput = 0;
    while(appRuning) {
        std::cout << "Select what to do next:\n";
        std::cout << "0-create cell";
        std::cout << "1-add organell";
        std::cout << "2-close program";
        std::cin >> userInput;
        switch(userInput) {
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            default:
                return 0;
        }
    }
    return 0;
}
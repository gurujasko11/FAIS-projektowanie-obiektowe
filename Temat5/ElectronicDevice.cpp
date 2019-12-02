#include "ElectronicDevice.h"
#include "iostream"

ElectronicDevice::ElectronicDevice(const std::string name) : deviceName(name){};

void ElectronicDevice::presentDevice() {
    std::cout << "This device is " << deviceName << "\n";
    std::cout << "Modules: ";
    for(auto i=modules.begin(); i != modules.end(); i++) {
        std::cout << i->moduleType << " ";
    }
    std::cout << "\n";
}
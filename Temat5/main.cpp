#include <iostream>
#include "ElectronicDeviceFactory.h"

int main() {
    ElectronicDeviceFactory factory;
    ElectronicDevice* tv = factory.getElectronicDevice(ElectronicDeviceType::TV_RETRO);
    ElectronicDevice* toaster = factory.getElectronicDevice(ElectronicDeviceType::PNEUMATIC_TOASTER);
    ElectronicDevice* peeler = factory.getElectronicDevice(ElectronicDeviceType::HYDROKINETIC_BANANA_PEELER);
    tv->presentDevice();
    toaster->presentDevice();
    peeler->presentDevice();
}

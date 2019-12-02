#ifndef ELECTRONICDEVICE_H
#define ELECTRONICDEVICE_H

#include "Module.h"
#include "list"
#include "string"

enum ElectronicDeviceType {
    TV_RETRO = 1,
    PNEUMATIC_TOASTER = 2,
    HYDROKINETIC_BANANA_PEELER = 3
};

class ElectronicDevice {
public:
    ElectronicDevice(const std::string name);
    void presentDevice();

    const std::string deviceName;
    std::list<Module> modules;
};


#endif //ELECTRONICDEVICE_H

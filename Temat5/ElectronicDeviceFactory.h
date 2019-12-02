#ifndef ELECTRONICDEVICEFACTORY_H
#define ELECTRONICDEVICEFACTORY_H

#include "Robot.h"
#include "ElectronicDevice.h"
#include "map"

class ElectronicDeviceFactory {
public:
    ElectronicDeviceFactory();
    ElectronicDevice* getElectronicDevice(ElectronicDeviceType deviceType);
private:
    std::map<ModuleType, Robot*> robotMap;
};


#endif //ELECTRONICDEVICEFACTORY_H

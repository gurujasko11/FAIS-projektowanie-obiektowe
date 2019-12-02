#include "ElectronicDeviceFactory.h"

ElectronicDeviceFactory::ElectronicDeviceFactory() {
    robotMap.insert({ModuleType::A, new RobotA()});
    robotMap.insert({ModuleType::B, new RobotB()});
    robotMap.insert({ModuleType::C, new RobotC()});
    robotMap.insert({ModuleType::D, new RobotD()});
}

class ElectronicDevice * ElectronicDeviceFactory::getElectronicDevice(enum ElectronicDeviceType deviceType) {
    ElectronicDevice* result;
    switch (deviceType) {
        case TV_RETRO:
            result = new ElectronicDevice("TV RETRO");
            result->modules = std::list<Module>({ModuleType::A, ModuleType::A, ModuleType::A, ModuleType::B, ModuleType::B, ModuleType::C});
            break;
        case PNEUMATIC_TOASTER:
            result = new ElectronicDevice("PNEUMATIC TOASTER");
            result->modules = std::list<Module>({ModuleType::A, ModuleType::B, ModuleType::B, ModuleType::B, ModuleType::A, ModuleType::D});
            break;
        case HYDROKINETIC_BANANA_PEELER:
            result = new ElectronicDevice("HYDROKINETIC BANANA PEELER");
            result->modules = std::list<Module>({ModuleType::C, ModuleType::D, ModuleType::A, ModuleType::D});
            break;
        default:
            return nullptr;
    }
    return result;
}

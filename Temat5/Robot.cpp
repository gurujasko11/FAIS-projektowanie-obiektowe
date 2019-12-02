#include "Robot.h"

Robot::Robot() {};
Robot::~Robot() {};

RobotA::RobotA() {};
RobotA::~RobotA() {};
Module RobotA::getModule() {
    return Module(ModuleType::A);
}

RobotB::RobotB() {};
RobotB::~RobotB() {};
Module RobotB::getModule() {
    return Module(ModuleType::B);
}

RobotC::RobotC() {};
RobotC::~RobotC() {};
Module RobotC::getModule() {
    return Module(ModuleType::C);
}

RobotD::RobotD() {};
RobotD::~RobotD() {};
Module RobotD::getModule() {
    return Module(ModuleType::D);
}
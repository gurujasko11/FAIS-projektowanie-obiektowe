#ifndef ROBOT_H
#define ROBOT_H

#include "Module.h"

class Robot {
public:
    Robot();
    virtual ~Robot();
    virtual Module getModule() = 0;
};

class RobotA : public Robot{
public:
    RobotA();
    virtual ~RobotA();
    virtual Module getModule();
};

class RobotB : public Robot{
public:
    RobotB();
    virtual ~RobotB();
    virtual Module getModule();
};

class RobotC : public Robot{
public:
    RobotC();
    virtual ~RobotC();
    virtual Module getModule();
};

class RobotD : public Robot{
public:
    RobotD();
    virtual ~RobotD();
    virtual Module getModule();
};
#endif //ROBOT_H

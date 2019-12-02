#ifndef MODULE_H
#define MODULE_H

enum ModuleType {
    A = 1,
    B = 2,
    C = 3,
    D = 4
};

class Module {
public:
    const ModuleType moduleType;
    Module(const ModuleType mt);
};


#endif //MODULE_H

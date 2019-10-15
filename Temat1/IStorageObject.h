#ifndef ISTORAGEOBJECT_H
#define ISTORAGEOBJECT_H


class IStorageObject {
public:
    IStorageObject();
    virtual ~IStorageObject();
    virtual void printMe() = 0;
//    virtual void store() = 0;
//    virtual void update() = 0;
//    virtual void delete() = 0;
};


#endif //TEMAT0_ISTORAGEOBJECT_H

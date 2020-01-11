#ifndef USER_H
#define USER_H

#include "Observer.h"
#include "string"

class User : public Observer {
public:
    User(std::string n);
    std::string name;
    virtual void update(ObservedSubject* observedSubject);
    virtual ~User();
};

#endif //USER_H

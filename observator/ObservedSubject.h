#ifndef OBSERVEDSUBJECT_H
#define OBSERVEDSUBJECT_H

#include "Observer.h"
#include "list"

class ObservedSubject {
public:
    void attach(Observer* observer);
    void detach(Observer* observer);
    void updateObservers();
    ObservedSubject();
    virtual ~ObservedSubject();
    std::list<Observer*> observers;
};


#endif //OBSERVEDSUBJECT_H

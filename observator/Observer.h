#ifndef OBSERVER_H
#define OBSERVER_H

class ObservedSubject;

class Observer {
public:
    Observer();
    virtual void update(ObservedSubject*)=0;
    virtual ~Observer();
};

#endif //OBSERVER_H

#include "ObservedSubject.h"

ObservedSubject::ObservedSubject() {
    this->observers = std::list<Observer*>();
}

ObservedSubject::~ObservedSubject() { }

void ObservedSubject::detach(Observer* observer) {
    this->observers.remove(observer);
}

void ObservedSubject::attach(Observer* observer) {
    this->observers.push_back(observer);
}

void ObservedSubject::updateObservers() {
    for(auto i=this->observers.begin(); i!=this->observers.end(); i++) {
        (*i)->update(this);
    }
}
#include "Dog.h"

//Dog::Dog()
//    :Dog {"The dog", 1, 90} {
//};
//
//Dog::Dog(std::string n)
//    :Dog {n, 2, 100} {
//};
// constructor
Dog::Dog(std::string n, int a, int h)
    : name{n}, age{a}, health{h} {
};
// copy constructor
Dog::Dog(const Dog &source)
    // here we use the initialiseur
    // :name{source.name}, age{source.age}, health{source.health} 
    // can also use the delegated way, faster.... (here l'initialisation se racroche au constructeur)
    :Dog {source.name, source.age, source.health}{
}

std::string Dog::getName() {
    return name;
}

int Dog::getAge() {
    return age;
}

int Dog::getHealth() {
    return health;
}




#include "Mailer.h"
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// static property
int Mailer::numMail{0};

Mailer::Mailer(std::string e) {
        email = new std::string;
        *email = e;
        ++numMail;
}

Mailer::Mailer(const Mailer &source) 
    :Mailer{*source.email}{
        cout << "deep copy" << endl;
}

Mailer::Mailer(Mailer &&source) 
    :email{source.email}{
        source.email = nullptr;
        cout << "move" << endl;
}

Mailer::~Mailer() {
    delete email;
    --numMail;
    cout << "destructor" << endl;
}

void Mailer::setMail(std::string e) {
    *email = e;
}

std::string Mailer::getMail() const {
    return *email;
}

// static method
int Mailer::getNumMail() {
    return numMail;
}


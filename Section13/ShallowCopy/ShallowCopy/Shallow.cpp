#include <iostream>
#include "Shallow.h"

using std::endl;
using std::cout;
using std::cin;

Shallow::Shallow(int d) {
        data = new int; 
        *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data{source.data} {
    cout << "copy constructor - shallow copy" << endl;
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructeur freeing storage" << endl;
}

void Shallow::setData(int d) {
    *data = d;
}

int Shallow::getData() {
    return *data;
}


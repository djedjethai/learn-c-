#include "Move.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "constructor" << endl;
}

Move::Move(const Move &source) 
    :Move{*source.data}{
        cout << "deep copy constructor" << endl;
}

Move::Move(Move &&source)
    :data{source.data}{
            source.data = nullptr;
     cout << "Move constructor" << endl;       
}

void Move::setData(int d) {
    *data = d;
}

int Move::getData() {
    return *data;
}

Move::~Move()
{
    delete data;
    cout << "destructor" << endl;
}


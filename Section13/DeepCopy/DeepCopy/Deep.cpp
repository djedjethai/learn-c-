#include <iostream>
#include "Deep.h"

using std::cout;
using std::cin;
using std::endl;

Deep::Deep(int d)
{
    data = new int;
    *data = d;
    cout << "contructor" <<endl;
}

Deep::Deep(const Deep &source)
    :Deep {*source.data} {
        cout << "copy constructor - deep copy" << endl;  
}

Deep::~Deep()
{
    delete data;
}

void Deep::setData(int d) {
    *data = d; 
}

int Deep::getData() {
    return *data;
}

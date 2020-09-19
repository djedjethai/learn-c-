#include "Iprintable.h"

//Iprintable::Iprintable()
//{
//}
//
//Iprintable::~Iprintable()
//{
//}

std::ostream &operator<<(std::ostream &os, const Iprintable &obj) {
    obj.print(os);
    return os;
}

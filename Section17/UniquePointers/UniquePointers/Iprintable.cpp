#include "Iprintable.h"

std::ostream &operator<<(std::ostream &os, const Iprintable &obj) {
    obj.print(os);
    return os;
}



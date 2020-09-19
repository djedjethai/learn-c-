#ifndef _IPRINTABLE_H_
#define _IPRINTABLE_H_
#include <iostream>

class Iprintable
{
friend std::ostream &operator<<(std::ostream &os, const Iprintable &obj);
public:
    virtual ~Iprintable() = default;
    virtual void print(std::ostream &os) const = 0;
};

#endif // _IPRINTABLE_H_

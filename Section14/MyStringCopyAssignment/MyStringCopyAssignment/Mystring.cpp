
#include "Mystring.h"
#include <iostream>
#include <cstring>


Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
};

Mystring::Mystring(char *c)
    :str{nullptr} {
        if (c == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(c) + 1];
            std::strcpy(str, c);
        };
    
};

Mystring::Mystring(const Mystring &source) 
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str); 
};

Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str = nullptr;
};

Mystring &Mystring::operator=(const Mystring &rhs) 
{
        if (this == &rhs)
            return *this;
        
        delete []str;
        str = new char[std::strlen(rhs.str) + 1]; 
        std::strcpy(str, rhs.str);
        return *this;
};

Mystring &Mystring::operator=(Mystring &&rhs)
{
    if (this == &rhs)
        return *this;
    
    delete []str;    
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
};




Mystring::~Mystring()
{
    delete [] str;
};

void Mystring::display() const {
    std::cout << str << " : " << std::strlen(str) << std::endl;
};

int Mystring::getLength() const {
    return std::strlen(str);
};
        
const char *Mystring::getString() const {
    return str;
};


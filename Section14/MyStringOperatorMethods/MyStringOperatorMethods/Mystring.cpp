#include "Mystring.h"
#include <cstring>
#include <iostream>


Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0'; 
};

Mystring::~Mystring()
{
    delete []str;
};


Mystring::Mystring(char *c)
    :str{nullptr}{
        if (std::strlen(c) == 0) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(c) + 1 ];
            std::strcpy(str, c);
        };
};
    
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str) +1 ];
        std::strcpy(str, source.str);
};

Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str = nullptr;
};

Mystring &Mystring::operator=(const Mystring &rhs)
{
    if (this == &rhs) {
        return *this;
    }
    
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
};
    
    
Mystring &Mystring::operator=(Mystring &&rhs)
{
    if (this == &rhs)
        return *this;
    
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
};

bool Mystring::operator==(const Mystring &rhs) const // equality
{
    return (std::strcmp(str, rhs.str) == 0);
};

Mystring Mystring::operator-() const { // make lower case
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i{0}; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp{buff};
    delete []buff;
    return temp;
};

Mystring Mystring::operator+(const Mystring &rhs) const // concatenate
{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str); 
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete []buff;
    return temp;
}
    


void Mystring::display() const {
    std::cout << str << " : " << std::strlen(str) << std::endl;
};

int Mystring::getLength() const {
    return std::strlen(str);
};
        
const char *Mystring::getString() const {
    return str;
};
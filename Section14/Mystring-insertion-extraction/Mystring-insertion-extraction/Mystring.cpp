#include "Mystring.h"



Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        str = '\0';
};

Mystring::~Mystring()
{
    delete []str;
};

Mystring::Mystring(const char *c)
    :str{nullptr} {
        if (std::strlen(c) == 0) {
            str = new char[1];
            str = '\0';
            return;
        }
        str = new char[std::strlen(c) + 1];
        std::strcpy(str, c);
};

Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
};

Mystring::Mystring(Mystring &&source) 
    :str{source.str} {
        source.str = nullptr;
};

Mystring &operator=(const Mystring &lhs) {
    if (this == &lhs) {
        return *this;
    };
    
    delete []str;
    str = new char[std::strlen(lhs.str) + 1];
    std::strcpy(str, lhs.str);
    return *this;
}
    
Mystring &operator=(Mystring &&rhs) {
    if (this == &lhs) {
        return *this;
    };
    
    delete []str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}




bool operator==(const Mystring &lhs, const Mystring &rhs) {
  return (std::strcmp(lhs.str, rhs.str) == 0);  
};

Mystring operator-(Mystring &lhs) {
    char *buff = new char[std::strlen(lhs.str) + 1];
    std::strcpy(buff, lhs.str);
    for (size_t i{0}; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    };
    Mystring temp{buff};
    delete []buff;
    return temp;
};

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete []buff;
    return temp;
};

std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
};

std::istream &operator>>(std::istream &in, Mystring &rhr) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete []buff;
    return in;
};






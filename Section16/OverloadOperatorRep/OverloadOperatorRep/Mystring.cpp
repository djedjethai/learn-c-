#include "Mystring.h"
#include <iostream>
#include <cstring>


Mystring::Mystring()
    :str{nullptr} {
        str = new char[1];
        *str = '\0';
}

Mystring::~Mystring() {
    delete []str;
}

Mystring::Mystring(const char *s)
    :str{nullptr} {
            if (std::strlen(s) == 0) {
                str = new char[1];
                *str = '\0';
            } else {
                str = new char[std::strlen(s) + 1];
                std::strcpy(str, s);
            }
}

Mystring::Mystring(const Mystring &lhs) 
    :str{nullptr} {
            str = new char[std::strlen(lhs.str) + 1];
            std::strcpy(str, lhs.str);
}

Mystring::Mystring(Mystring &&rhs)
    :str{nullptr} {
            str = rhs.str;
            rhs.str = nullptr;
}
    
Mystring &Mystring::operator=(const Mystring &lhs) {
    if (this == &lhs) return *this;
    delete []str;
    str = new char[std::strlen(lhs.str) + 1];
    std::strcpy(str, lhs.str);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs) return *this;
    delete []str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
    
bool Mystring::operator==(const Mystring s) const{
    return (std::strcmp(str, s.str) == 0);
}
bool Mystring::operator!=(const Mystring s) const{
    return !(std::strcmp(str, s.str) == 0);
}
bool Mystring::operator<(const Mystring s) const{
    return (std::strcmp(str, s.str) < 0);
}
    
Mystring Mystring::operator+(const Mystring &s) const{
    char *buff = new char[std::strlen(str) + std::strlen(s.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, s.str);
    Mystring temp{buff};
    delete []buff;
    return temp;
}
Mystring Mystring::operator+=(const Mystring &s) {
    *this = *this + s;
    return *this;
}

Mystring Mystring::operator*(int num) {
    Mystring temp;
    for (size_t i{0}; i < num; i++) {
        temp = temp + *this;
    };
    return temp;
}

Mystring Mystring::operator*=(int num) {
    *this = *this * num;
    return *this;
}
    
Mystring &Mystring::operator-() {
    for (size_t i{0}; i < std::strlen(str); i++) {
        str[i] = std::tolower(str[i]);
    };
    return *this;
}
Mystring &Mystring::operator++() {
    for (size_t i{0}; i < std::strlen(str); i++) {
        str[i] = std::toupper(str[i]);
    };
    return *this;
}

std::ostream &operator<<(std::ostream &os, Mystring &s) {
    os << s.str;
    return os;
}

std::istream &operator>>(std::istream &in, Mystring &s) {
    char *buff = new char[1000];
    in >> buff;
    s = Mystring{buff};
    delete []buff;
    return in;
}
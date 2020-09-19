#include "Mystring.h"
#include <iostream>
#include <cstring>


Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
}
    
Mystring::~Mystring() {
    delete []str;
};

Mystring::Mystring(const char *c)
    :str{nullptr}{
        if (std::strlen(c) == 0) {
            str = new char[1];
            *str = '\0';
        };
        str = new char[std::strlen(c) + 1];
        std::strcpy(str, c);
};

Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
};

Mystring::Mystring(Mystring &&source)
    :str{source.str} {
        source.str = nullptr;
};
    
Mystring &Mystring::operator=(const Mystring &rhs) // copy operator
{
    if (this == &rhs) {
        return *this;
    };
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
};

 // move operator
Mystring &Mystring::operator=(Mystring &&lhs) // move operator
{
    if (this == &lhs) {
        return *this;
    };
    delete [] str;
    str = lhs.str;
    lhs.str = nullptr;
    return *this;
};  

std::ostream &operator<<(std::ostream &os, const Mystring &lhs)
{
    os << lhs.str;
    return os;
};



std::istream &operator>>(std::istream &in, Mystring &lhs)
{
    char *buff = new char[1000];
    in >> buff;
    lhs = Mystring{buff};
    delete [] buff;
    return in;
};
    
    
bool Mystring::operator==(const Mystring s1) {
    return (std::strcmp(str, s1.str) == 0);
} 

bool Mystring::operator!=(const Mystring s1) {
    return !(std::strcmp(str, s1.str) == 0);
}

bool Mystring::operator<(const Mystring s1) {
    return (std::strcmp(str, s1.str) < 0);
}

bool Mystring::operator>(const Mystring s1) {
    return (std::strcmp(str, s1.str) > 0);
}

Mystring Mystring::operator-() {
    char *buff = new char[std::strlen(str) + 1];
    for (size_t i{0}; i < std::strlen(str); i++) {
        buff[i] = std::tolower(buff[i]);
    };
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}
Mystring Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs.str; 
    return *this;
}

Mystring Mystring::operator*(int num) {
    Mystring temp{nullptr};
    for (size_t i{0}; i < num; i++) {
        temp = temp + *this;
    };
    return temp;
    
    
    // ok but not the best
//    char *buff = new char[(std::strlen(str) * num) + 1]; 
//    std::strcpy(buff, "");
//    for (size_t i{0}; i < num; i++) {
//        std::strcat(buff, str);
//    };
//    Mystring temp{buff};
//    delete [] buff;
//    return temp;
}

Mystring Mystring::operator*=(int num) {
    *this = *this * num;
    return *this;
}

Mystring &Mystring::operator++() { // ++s1; pre-increment make uppercase
    for (size_t i{0}; i < std::strlen(str); i++) {
        str[i] = std::toupper(str[i]);
    };
    return *this;
}

Mystring Mystring::operator++(int) { // le (int) means post-increment for the compiler
    Mystring temp{*this}; // make a copy
    operator++(); // we call pre-increment
    return temp; // return the old value
}
    
    
//Mystring operator-(const Mystring &rhs)
//{
//    char *buff = new char[std::strlen(rhs.str) + 1];
//    std::strcpy(buff, rhs.str);
//    for (size_t i{0}; i < std::strlen(buff); i++) {
//        buff[i] = std::tolower(buff[i]);
//    };
//    Mystring temp{buff};
//    delete []buff;
//    return temp;
//};
//
//
//bool operator==(const Mystring s1, const Mystring s2)
//{
//    return (std::strcmp(s1.str, s2.str) == 0);
//};
//
//bool operator!=(const Mystring s1, const Mystring s2)
//{
//    return !(std::strcmp(s1.str, s2.str) == 0);
//};
//
//bool operator<(const Mystring s1, const Mystring s2)
//{
//    return (s1.str < s2.str); 
//};
//
//
//bool operator>(const Mystring s1, const Mystring s2)
//{
//    return (s1.str > s2.str);
//};
//
//Mystring operator+(const Mystring &lhs, const Mystring &rhs)
//{
//    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
//    buff = std::strcpy(buff, lhs.str);
//    buff = std::strcat(buff, rhs.str);
//    Mystring temp{buff};
//    delete [] buff;
//    return temp;
//};
//
//Mystring operator+=(Mystring &lhs, const Mystring &rhs)
//{
//    // the + is a call to the previous overload operator (operatot+)
//    lhs = lhs + rhs;
//    return lhs;
//};
//
//Mystring operator*(Mystring &lhs, int num)
//{
//    Mystring temp;
//    for (size_t i{0}; i < num; i++) {
//        // the + is a call to the previous overload operator (operatot+)
//        temp =  temp + lhs;
//    };
//    return temp;
//};
//
//Mystring operator*=(Mystring &lhs, int num)
//{
//    // the * is a call to the previous overload operator (operatot*)
//    lhs = lhs * num;
//    return lhs;
//};
//
//// Make uppercase - pre increment
//Mystring &operator++(Mystring &obj) {
//    for (size_t i=0; i< std::strlen(obj.str); i++)
//        obj.str[i] = std::toupper(obj.str[i]);
//    return obj;
//};
//
//// Make uppercase - post-increment
//Mystring operator++(Mystring &obj, int) {
//    // we make a copy of the original obj
//    Mystring temp {obj};
//    // then we make a preincrement of our obj but will modify the original obj
//    ++obj;      // make sure you call the pre-increment!
//    // then we return the original obj. 
//    return temp;
//};


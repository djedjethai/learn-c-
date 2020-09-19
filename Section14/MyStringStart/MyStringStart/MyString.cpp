#include "MyString.h"
#include <iostream>
#include <cstring>


MyString::MyString()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
};

MyString::~MyString()
{
    delete []str;
};

MyString::MyString(const char *c) 
    :str{nullptr}{
        if (c == nullptr) {
         str = new char[1];
         *str = '\0';
        } else {
            str = new char[std::strlen(c) + 1];
            std::strcpy(str, c);
        }
};

MyString::MyString(const MyString &source) 
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
};
    
void MyString::display() const{
    std::cout << str << " : " << getLength() << std::endl;
};
    
int MyString::getLength() const{
    return strlen(str);
};
 
const char *MyString::getStr() const{
    return str;
};
    


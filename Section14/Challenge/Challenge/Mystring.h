#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>


class Mystring
{
friend std::ostream &operator<<(std::ostream &os, const Mystring &lhs);
friend std::istream &operator>>(std::istream &in, Mystring &lhs);   

//friend bool operator==(const Mystring s1, const Mystring s2); 
//friend bool operator!=(const Mystring s1, const Mystring s2);
//friend bool operator<(const Mystring s1, const Mystring s2);
//friend bool operator>(const Mystring s1, const Mystring s2);

//friend Mystring operator-(const Mystring &rhs);
//friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
//friend Mystring operator+=(Mystring &lhs, const Mystring &rhs);
//friend Mystring operator*(Mystring &lhs, int num);
//friend Mystring operator*=(Mystring &lhs, int num);
//friend Mystring &operator++(Mystring &obj);                                           // ++s1; pre-increment make uppercase
//friend Mystring operator++(Mystring &obj, int);                                        // s++; post-increment make uppercase

private:
    char *str;
public:
    Mystring();
    ~Mystring();
    Mystring(const char *c);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    
    Mystring &operator=(const Mystring &rhs); // move operator
    Mystring &operator=(Mystring &&lhs); // copy operator
    
    // same as all the friend function. but with member function
    bool operator==(const Mystring s1); 
    bool operator!=(const Mystring s1);
    bool operator<(const Mystring s1);
    bool operator>(const Mystring s1);

    Mystring operator-();
    Mystring operator+(const Mystring &rhs);
    Mystring operator+=(const Mystring &rhs);
    Mystring operator*(int num);
    Mystring operator*=(int num);
    Mystring &operator++();       // ++s1; pre-increment make uppercase
    Mystring operator++(int);
};

#endif // _MYSTRING_H_

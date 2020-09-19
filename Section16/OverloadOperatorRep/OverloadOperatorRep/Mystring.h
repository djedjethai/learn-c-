#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>


class Mystring
{
friend std::ostream &operator<<(std::ostream &os, Mystring &s);
friend std::istream &operator>>(std::istream &in, Mystring &s);

private:
    char *str;
public:
    Mystring();
    ~Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &lhs);
    Mystring(Mystring &&rhs);
    
    Mystring &operator=(const Mystring &lhs);
    Mystring &operator=(Mystring &&rhs);
    
    bool operator==(const Mystring s) const;
    bool operator!=(const Mystring s) const;
    bool operator<(const Mystring s) const;
    
    Mystring operator+(const Mystring &s) const;
    Mystring operator+=(const Mystring &s);
    Mystring operator*(int num);
    Mystring operator*=(int num);
    
    Mystring &operator-();
    Mystring &operator++();
};

#endif // _MYSTRING_H_

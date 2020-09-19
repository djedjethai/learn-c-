#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
friend bool operator==(const Mystring &lhs, const Mystring &rhs);
friend Mystring operator-(Mystring &lhs);
friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
friend std::istream &operator>>(std::istream &in, Mystring &rhr);

private:
    char *str;
public:
    Mystring();
    ~Mystring();
    Mystring(const char *c);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    
    Mystring &operator=(const Mystring &lhs);
    Mystring &operator=(Mystring &&rhs);
    
    
    
    void display() const;
    int getLength() const;
    const char *getString() const;
};

#endif // _MYSTRING_H_

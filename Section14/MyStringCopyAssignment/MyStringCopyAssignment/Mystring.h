#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;
public:
    Mystring();
    Mystring(char *c);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
    ~Mystring();
    
    void display() const;
    int getLength() const;
    const char *getString() const;

};

#endif // _MYSTRING_H_

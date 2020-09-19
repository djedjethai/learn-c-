#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;
public:
    Mystring();
    ~Mystring();
    Mystring(char *c);
    
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    
    Mystring &operator=(const Mystring &rhs); // copy assignment
    Mystring &operator=(Mystring &&rhs); // move assignment
    
    Mystring operator-() const; // make lower case
    Mystring operator+(const Mystring &rhs) const; // concatenate
    bool operator==(const Mystring &rhs) const;
    
    
    
    void display() const;
    int getLength() const;
    const char *getString() const;
    
};

#endif // _MYSTRING_H_

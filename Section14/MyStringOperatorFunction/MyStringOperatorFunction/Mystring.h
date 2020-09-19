#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring
{
friend bool operator==(const Mystring &rhs, const Mystring &lhs); // compare
friend Mystring operator-(Mystring &obj); // lower str
friend Mystring operator+(const Mystring &rhs, const Mystring &lhs);// concat    
    
private:
    char *str;
public:
    Mystring();
    Mystring(const char *c);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
//    Mystring operator-() const; // make lower case
//    Mystring operator+(const Mystring &rhs) const; // concatenate
//    bool operator==(const Mystring &rhs) const;
    
    
    void display() const;
    int getLength() const;
    const char *getString() const;
};

#endif // _MYSTRING_H_

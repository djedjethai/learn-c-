#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private:
    char *str;
    
public:
    MyString();
    MyString(const char *c);
    MyString(const MyString &source);
    
    void display() const;
    int getLength() const;
    const char *getStr() const;
    
    ~MyString();

};

#endif // _MYSTRING_H_

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include "Iprintable.h"

class Account: public Iprintable
{

private:
    static constexpr const char *defaultName = "Unnamed account";
    static constexpr double defaultBalance = 0.0;
protected:
    double balance;
    std::string name;
public:
    virtual ~Account() {};
//    ~Account();
    Account(std::string n = defaultName, double b = defaultBalance);
    virtual bool deposit(double d) = 0;
    virtual bool withdraw(double d) = 0;
    
    virtual void print(std::ostream &os) const override;
};

#endif // _ACCOUNT_H_

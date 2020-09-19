#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

#include "Iprintable.h"

class Account : public Iprintable {
private:
    static constexpr const char *defName = "Unknow name";
    static constexpr double defBalance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = defName, double balance = defBalance);
    virtual ~Account() = default;
    virtual bool withdraw(double num) = 0;
    virtual bool deposit(double num) = 0;
    virtual void print(std::ostream &os) const override;
};

#endif // _ACCOUNT_H_

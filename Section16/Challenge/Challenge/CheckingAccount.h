#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_

#include <string>
#include <iostream>
#include "Account.h"

class CheckingAccount: public Account {

private:
    static constexpr double defaultBalance = 0.0;
    static constexpr const char *defaultName = "Unknow name";
    static constexpr double defaultWithdrawTransaction = 0.0;
protected:
    double withdrawTransaction;
public:
    virtual ~CheckingAccount() {};
    CheckingAccount(std::string n = defaultName, double b = defaultBalance, double i = defaultWithdrawTransaction);
    virtual bool withdraw(double b) override;
    
    // added
    virtual bool deposit(double d) override;
    virtual void print(std::ostream &os) const override;
};

#endif // _CHECKINGACCOUNT_H_

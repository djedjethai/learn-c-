#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_
#include <string>
#include <iostream>
#include "Account.h"

class CheckingAccount: public Account {
friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &account);
private:
    static constexpr double defaultBalance = 0.0;
    static constexpr const char *defaultName = "Unknow name";
    static constexpr double defaultWithdrawTransaction = 0.0;
protected:
    double withdrawTransaction;
public:
    CheckingAccount(std::string n = defaultName, double b = defaultBalance, double i = defaultWithdrawTransaction);
    // ~CheckingAccount();
    bool withdraw(double b);
    
};

#endif // _CHECKINGACCOUNT_H_

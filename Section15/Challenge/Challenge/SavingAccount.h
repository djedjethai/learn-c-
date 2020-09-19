#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_
// #include <iostream>
#include "Account.h"

class SavingAccount: public Account {
friend std::ostream &operator<<(std::ostream &os, const SavingAccount &account);
private:
    static constexpr double defaultBalance = 0.0;
    static constexpr const char *defaultName = "Unknow name";
    static constexpr double defaultInterest = 1; // to make it simpler, gonna * 1.xx to get balance with interest
protected:
    double interest;
public:
    SavingAccount(std::string n = defaultName, double b = defaultBalance, double i = defaultInterest);
    // ~SavingAccount();
    bool deposit(double d);
};

#endif // _SAVINGACCOUNT_H_

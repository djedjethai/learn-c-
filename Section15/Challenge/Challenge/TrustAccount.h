#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_
#include "SavingAccount.h"
// #include <iostream>

class TrustAccount: public SavingAccount {
friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);
private:
    static constexpr const char *nameDefault = "Unknow name";
    static constexpr double balanceDefault = 0.0;
    static constexpr double interestDefault = 1;
protected:
    int nbrWithdraw;
public:
    TrustAccount(std::string n = nameDefault, double b = balanceDefault, double i = interestDefault);
    bool deposit(double d);
    bool withdraw(double w);
};

#endif // _TRUSTACCOUNT_H_

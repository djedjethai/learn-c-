#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_
#include "Account.h"
#include <iostream>

class SavingAccount: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const SavingAccount &savingAccount);
private:
    double interest;
    double balance;
public:
    SavingAccount();
    SavingAccount(double a, double i);
    
    void deposit(double a);
    ~SavingAccount();

};

#endif // _SAVINGACCOUNT_H_

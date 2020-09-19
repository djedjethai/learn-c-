#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_
#include "Account.h"

class SavingAccount: public Account
{
public:
    double intRate;
    SavingAccount();
    ~SavingAccount();
    
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // _SAVINGACCOUNT_H_

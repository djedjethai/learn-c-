#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_

#include "Account.h"

class SavingAccount: public Account {

private:
    static constexpr double defaultBalance = 0.0;
    static constexpr const char *defaultName = "Unknow name";
    static constexpr double defaultInterest = 1; // to make it simpler, gonna * 1.xx to get balance with interest
protected:
    double interest;
public:
    SavingAccount(std::string n = defaultName, double b = defaultBalance, double i = defaultInterest);
    virtual ~SavingAccount() {};
    virtual bool deposit(double d) override;
    
    //added
    virtual bool withdraw(double d) override;
    virtual void print(std::ostream &os) const override;
};

#endif // _SAVINGACCOUNT_H_

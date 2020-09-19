#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_

#include "SavingAccount.h"
// #include <iostream>

class TrustAccount: public SavingAccount {

private:
    static constexpr const char *nameDefault = "Unknow name";
    static constexpr double balanceDefault = 0.0;
    static constexpr double interestDefault = 1;
protected:
    int nbrWithdraw;
public:
    ~TrustAccount() {};
    TrustAccount(std::string n = nameDefault, double b = balanceDefault, double i = interestDefault);
    virtual bool deposit(double d) override;
    virtual bool withdraw(double w) override;
    
    //added
    virtual void print(std::ostream &os) const override;
};

#endif // _TRUSTACCOUNT_H_

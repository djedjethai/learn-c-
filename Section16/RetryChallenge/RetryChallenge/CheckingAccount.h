#ifndef _CHECKINGACCOUNT_H_
#define _CHECKINGACCOUNT_H_
#include "Account.h"

class CheckingAccount : public Account {
private:
    static constexpr const char *defName = "Unname Checking account";
    static constexpr double defBalance = 0.0;
    static constexpr double perCheckFee = 1.2;
public:
    CheckingAccount(std::string name = defName, double balance = defBalance);
    virtual ~CheckingAccount() = default;
    virtual bool withdraw(double num) override;
    virtual bool deposit(double num) override;
    virtual void print(std::ostream &os) const override;

};

#endif // _CHECKINGACCOUNT_H_

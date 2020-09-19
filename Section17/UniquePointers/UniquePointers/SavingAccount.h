#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_
#include "Account.h"

class SavingAccount : public Account {
private:
    static constexpr const char *defName = "Unname Saving account";
    static constexpr double defBalance = 0.0;
    static constexpr double defInterest = 1.2;
protected:
    double interest;
public:
    SavingAccount(std::string name = defName, double balance = defBalance, double interest = defInterest);
    virtual ~SavingAccount() = default;
    virtual bool withdraw(double num) override;
    virtual bool deposit(double num) override;
    virtual void print(std::ostream &os) const override;

};

#endif // _SAVINGACCOUNT_H_

#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_
#include "SavingAccount.h"

class TrustAccount : public SavingAccount {
private:
    static constexpr const char *defName = "Unname Trust account";
    static constexpr double defBalance = 0.0;
    // static constexpr double defInterest = 1.2;
    static constexpr int defMaxWithdraw = 2000;
    static constexpr int defNbrWithdraw = 3;
protected:
    int nbrWithdraw;
public:
    TrustAccount(std::string name = defName, double balance = defBalance);
    virtual ~TrustAccount() = default;
    virtual bool withdraw(double num) override;
    virtual bool deposit(double num) override;
    virtual void print(std::ostream &os) const override;
};

#endif // _TRUSTACCOUNT_H_

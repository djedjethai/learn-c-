#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>


class Account
{
friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char *defaultName = "Unnamed account";
    static constexpr double defaultBalance = 0.0;
protected:
    double balance;
    std::string name;
public:
//    Account();
//    ~Account();
    Account(std::string n = defaultName, double b = defaultBalance);
    bool deposit(double d);
    bool withdraw(double d);
    double getBalance() const;

};

#endif // _ACCOUNT_H_

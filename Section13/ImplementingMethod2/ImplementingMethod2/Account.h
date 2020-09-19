#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account
{
    private:
       std::string name;
       double balance;
    
    public:
        void setBalance(double bal) { balance = bal; };
        double getBalance() { return balance; };
        void setName(std::string name);
        std::string getName();
        
        bool deposit(double amt);
        bool withDraw(double amt);
};

#endif // _ACCOUNT_H_

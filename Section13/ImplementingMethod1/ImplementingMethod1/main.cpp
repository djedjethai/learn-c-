#include <iostream>
// #include "Account.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;


class Account {
    private:
       std::string name;
       double balance;
    
    public:
        void setBalance(double bal) { balance = bal; };
        double getBalance() { return balance; };
        
        bool deposit(double amt);
        bool withDraw(double amt);
   };
   
   bool Account::deposit(double amt) {
       if (amt) {
           balance += amt;
           return true;
       } else {
           return false;
       }
   };
   
   bool Account::withDraw(double amt) {
       if (amt) {
           balance -= amt;
           return true;
       } else {
           return false;
       }
   };




int main()
{
	Account bobAccount;
    bobAccount.setBalance(1000);
    double bal = bobAccount.getBalance();
    cout << bal << endl;
    bobAccount.deposit(230);
    bobAccount.withDraw(30);
    bal = bobAccount.getBalance();
    cout << bal << endl;
    
	return 0;
}

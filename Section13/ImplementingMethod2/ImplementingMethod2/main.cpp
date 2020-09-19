#include <iostream>
#include "Account.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;




int main()
{
    Account bobAccount;
    bobAccount.setName("Harry");
    std::string name = bobAccount.getName();
    cout << name << endl;
    bobAccount.setBalance(1000);
    double bal = bobAccount.getBalance();
    cout << bal << endl;
    bobAccount.deposit(230);
    bobAccount.withDraw(30);
    bal = bobAccount.getBalance();
    cout << bal << endl;
    
	return 0;
}
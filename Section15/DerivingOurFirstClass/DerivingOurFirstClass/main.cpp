#include <iostream>

#include "Account.h"
#include "SavingAccount.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // using Account class
	cout << "\n============== Account =================" << endl;
    Account acc{};
    acc.deposit(2000);
    acc.withdraw(500);
    
    cout << endl;
    
    Account *pacc{nullptr};
    pacc = new Account();
    pacc->deposit(2000);
    pacc->withdraw(500);
    delete pacc;
    
    //using SavingAccount class
    cout << "\n================= SavingAccount ===================" << endl;
    
    SavingAccount svac{};
    svac.deposit(2000);
    svac.withdraw(500);
    
    SavingAccount *psvac{nullptr};
    psvac = new SavingAccount();
    psvac->deposit(2000);
    psvac->withdraw(500);
    delete psvac;
    
    
	return 0;
}

#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingAccount.h"
#include "AccountUtil.h" 
#include "CheckingAccount.h"
#include "TrustAccount.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout.precision(2);
    cout << std::fixed;
    
    CheckingAccount franck{"Franck", 5000};
    cout << franck << endl;
    
    Account *trust = new TrustAccount{"James"};
    cout << *trust << endl;
    
    Account *p1 = new CheckingAccount{"Larry", 10000};
    Account *p2 = new SavingAccount{"Moe", 1000};
    Account *p3 = new TrustAccount{"Curly"};
    
    std::vector<Account*> vc{p1, p2, p3};
    
    display(vc);
    deposit(vc, 1000);
    withdraw(vc, 2000);
    
    delete p1;
    delete p2;
    delete p3;
    delete trust;
    
    
	return 0;
}
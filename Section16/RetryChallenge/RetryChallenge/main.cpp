#include <iostream>
#include <vector>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include "TrustAccount.h"
#include "Utile.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
//	CheckingAccount franck{"franck", 5000};
//    cout << franck << endl;
//    
//    Account *trust = new TrustAccount{"James"};
//    cout << *trust << endl;
//    
//    Account *p1 = new CheckingAccount{"Larry", 10000};
//    Account *p2 = new SavingAccount{"Moe", 1000};
//    Account *p3 = new TrustAccount{"Curly"};
//    
//    std::vector<Account*>vecA{p1, p2, p3};
//    display(vecA);
//    deposit(vecA, 1000);
//    withdraw(vecA, 2000);
//    
//    delete p1;
//    delete p2;
//    delete p3;
//    delete trust;

    try {
        std::unique_ptr<Account> moesAccount = std::make_unique<CheckingAccount>("Moe", -10.0);
        cout << *moesAccount << endl;
        
        std::unique_ptr<Account> larryEx = std::make_unique<CheckingAccount>("Larry", 100);
        larryEx->withdraw(200);
        cout << *larryEx << endl;
    }
    
    catch(IllegalBalanceException &e) {
        std::cerr << e.what() << endl;
    }
    
    catch(InsufficientFundsException &e) {
        std::cerr << e.what() << endl;
    }
    
    cout << "Program complete successfully" << endl;

    
	return 0;
}









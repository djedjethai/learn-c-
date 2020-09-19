#include <iostream>
#include "Account.h"
#include "SavingAccount.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
//	cout << "============ Account ==============" << endl;
//    
//    Account a1{1000.0};
//    cout << a1 << endl;
//    
//    a1.deposit(500);
//    cout << a1 << endl;
//    
//    a1.withdraw(950.5);
//    cout << a1 << endl;
//    
//    a1.withdraw(2000);
//    cout << a1 << endl;
    
    cout << "============= SavingAccount ==============" << endl;
    
    SavingAccount s1{0, 1.05};
    cout << s1 << endl;
    
    s1.deposit(100);
    cout << s1 << endl;
    
    s1.withdraw(3000);
    cout << s1 << endl;
    
    s1.withdraw(50);
    cout << s1 << endl;
    
    
	return 0;
}

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
    
    std::vector<Account> a;
    a.push_back(Account {});
    a.push_back(Account {"Larry"});
    a.push_back(Account {"Moe", 2000});
    a.push_back(Account {"Curly", 5000});
    
    display(a);
    deposit(a, 1000);
    withdraw(a, 2000);
    
    std::vector<SavingAccount> sa;
    sa.push_back(SavingAccount {});
    sa.push_back(SavingAccount {"Superman"});
    sa.push_back(SavingAccount {"Batman", 2000});
    sa.push_back(SavingAccount {"Superwoman", 5000, 5.2});
    
    display(sa);
    deposit(sa, 1000);
    withdraw(sa, 2000);
    
    std::vector<CheckingAccount> ca;
    ca.push_back(CheckingAccount {});
    ca.push_back(CheckingAccount {"CheckingSuperman"});
    ca.push_back(CheckingAccount {"CheckingBatman", 2000});
    ca.push_back(CheckingAccount {"CheckingSuperwoman", 5000, 1.5});
    
    display(ca);
    deposit(ca, 1000);
    withdraw(ca, 2000);
    
    std::vector<TrustAccount> ta;
    ta.push_back(TrustAccount {});
    ta.push_back(TrustAccount {"TrustSuperman"});
    ta.push_back(TrustAccount {"TrustBatman", 20000});
    ta.push_back(TrustAccount {"TrustSuperwoman", 50000, 1.5});
    
    display(ta);
    deposit(ta, 1000);
    withdraw(ta, 3000);
    
    for (int i{1}; i <= 5; i++)
        withdraw(ta, 1000);
    
	return 0;
}

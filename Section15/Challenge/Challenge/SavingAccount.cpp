// #include <iostream>
#include "SavingAccount.h"
// #include "Account.h"

//SavingAccount::~SavingAccount()
//{
//}

SavingAccount::SavingAccount(std::string n, double b, double i)
    :Account{n, b}, interest{i}{
}
    
bool SavingAccount::deposit(double d) {
    d *= interest;
    return Account::deposit(d);
}

std::ostream &operator<<(std::ostream &os, const SavingAccount &account) {
    os << "[Account name: " << account.name << " Balance: " << account.balance << " the interest is: " << account.interest << "]" << std::endl;
    return os;
}


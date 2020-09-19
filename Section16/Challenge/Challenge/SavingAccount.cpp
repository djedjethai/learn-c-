#include "SavingAccount.h"
// #include "Account.h"

// SavingAccount::~SavingAccount() {};
//{
//}

SavingAccount::SavingAccount(std::string n, double b, double i)
    :Account{n, b}, interest{i}{
}
    
bool SavingAccount::deposit(double d) {
    d *= interest;
    return Account::deposit(d);
}

// added
bool SavingAccount::withdraw(double d) {
    return Account::withdraw(d);
}

void SavingAccount::print(std::ostream &os) const {
    os << "[SavingAccount name: " << name << " Balance: " << balance << " the interest is: " << interest << "]";
};






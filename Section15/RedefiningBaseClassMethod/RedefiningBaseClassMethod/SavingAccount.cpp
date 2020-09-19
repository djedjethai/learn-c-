#include "SavingAccount.h"

SavingAccount::SavingAccount()
    :SavingAccount(0.0, 0.0) {
}

SavingAccount::SavingAccount(double a, double i)
    :Account(a), interest(i) {
} 

SavingAccount::~SavingAccount()
{
}

void SavingAccount::deposit(double a) {
    a = a*interest;
    Account::deposit(a);
}

std::ostream &operator<<(std::ostream &os, const SavingAccount &savingAccount) {
    os << "The balance is: " << savingAccount.balance << "the interest is: " << savingAccount.interest << std::endl;
    return os;
}

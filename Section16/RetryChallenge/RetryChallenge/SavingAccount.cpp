#include "SavingAccount.h"

SavingAccount::SavingAccount(std::string name, double balance, double interest)
    :Account{name, balance}, interest{interest}{
}

bool SavingAccount::withdraw(double num) {
    return Account::withdraw(num);
}

bool SavingAccount::deposit(double num) {
    num *=interest;
    return Account::deposit(num);
}

void SavingAccount::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[SavingAccount: " << name << " Balance: " << balance << "]";
}

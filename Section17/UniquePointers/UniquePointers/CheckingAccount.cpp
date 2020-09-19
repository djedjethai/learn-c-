#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance)
    :Account{name, balance}{
}

bool CheckingAccount::withdraw(double num) {
    num *= perCheckFee;
    return Account::withdraw(num);
}

bool CheckingAccount::deposit(double num) {
    return Account::deposit(num);
}

void CheckingAccount::print(std::ostream &os) const {
     os.precision(2);
     os << std::fixed;
     os << "[CheckingAccount: " << name << " Balance: " << balance << "]";
}
    
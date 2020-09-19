#include "CheckingAccount.h"
// #include "Account.h"
// #include <iostream>

CheckingAccount::CheckingAccount(std::string n, double b, double i)
    :Account{n, b}, withdrawTransaction{i}{
}

bool CheckingAccount::withdraw(double w) {
    double totWD = w + withdrawTransaction;
    return Account::withdraw(totWD);
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &account) {
    os << "[Account name: " << account.name << " Balance: " << account.balance << " Withdraw interest: " << account.withdrawTransaction << "]" << std::endl;
    return os;
}



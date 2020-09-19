#include "CheckingAccount.h"
// #include "Account.h"
// #include <iostream>
// CheckingAccount::~CheckingAccount() {};

CheckingAccount::CheckingAccount(std::string n, double b, double i)
    :Account{n, b}, withdrawTransaction{i}{
}

bool CheckingAccount::withdraw(double w) {
    double totWD = w + withdrawTransaction;
    return Account::withdraw(totWD);
}

// added
bool CheckingAccount::deposit(double d) {
    return Account::deposit(d);
}

void CheckingAccount::print(std::ostream &os) const {
    os << "[CheckingAccount name: " << name << " Balance: " << balance << " Withdraw interest: " << withdrawTransaction << "]";
}



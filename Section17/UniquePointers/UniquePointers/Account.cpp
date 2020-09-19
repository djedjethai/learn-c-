#include "Account.h"

Account::Account(std::string name, double balance)
    :name{name}, balance{balance}{
}

bool Account::withdraw(double num) {
    if (num <= balance) {
        balance -= num;
        return true;
    } else
        return false;
}

bool Account::deposit(double num) {
    if (num > 0) {
        balance += num;
        return true;
    } else 
        return false;
}

void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << " Balance: " << balance << "]";
}


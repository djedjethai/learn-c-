#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

Account::Account(std::string name, double balance)
    :name{name}, balance{balance}{
        if (balance < 0.0)
            throw IllegalBalanceException{};
}

bool Account::withdraw(double num) {
    if (num <= balance) {
        balance -= num;
        return true;
    } else {
        throw InsufficientFundsException{};
        // return false;
    }
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
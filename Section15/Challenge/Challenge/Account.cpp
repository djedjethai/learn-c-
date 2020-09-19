// #include <iostream>
#include "Account.h"

//Account::Account()
//{
//}
//
//Account::~Account()
//{
//}

Account::Account(std::string n, double b)
    : name{n}, balance{b} {
}

bool Account::deposit(double d) {
    if (d > 0) {
        balance += d;
        return true;
    } else {
        return false;
    }
}

bool Account::withdraw(double d) {
    if (balance >= d) {
        balance -=d;
        return true;
    } else {
        return false;
    }
}

double Account::getBalance() const {
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "[Account name: " << account.name << " Balance: " << account.balance << "]" << std::endl;
    return os;
}

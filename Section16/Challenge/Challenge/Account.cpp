// #include <iostream>
#include "Account.h"

//Account::Account()
//{
//}
//
// Account::~Account() {};
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

void Account::print(std::ostream &os) const {
    os << "[Account name: " << name << " Balance: " << balance << "]";
};





#include "Account.h"


void Account::setName(std::string n) {
        name = n;
}

std::string Account::getName() {
    return name;
}

bool Account::deposit(double amt) {
    if (amt) {
        balance += amt;
        return true;
    } else {
        return false;
    }
};

bool Account::withDraw(double amt) {
    if (amt) {
        balance -= amt;
        return true;
    } else {
        return false;
    }
};


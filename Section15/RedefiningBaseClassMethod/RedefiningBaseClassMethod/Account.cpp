#include "Account.h"

Account::Account()
    :Account(0.0) {
}

Account::Account(double a)
    :balance(a) {
}

Account::~Account()
{
}

void Account::deposit(double a) {
    if (a > 0) 
        balance += a; 
    else 
        std::cout << "Incorrect amount" << std::endl;
}

void Account::withdraw(double a) {
    if (balance >= a)
        balance -= a;
    else
        std::cout << "You don t have this amount" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &a) {
    os << "Account balance" << a.balance;
    return os;
}
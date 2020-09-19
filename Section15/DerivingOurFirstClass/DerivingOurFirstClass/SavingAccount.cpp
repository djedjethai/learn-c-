#include "SavingAccount.h"
#include <iostream>

SavingAccount::SavingAccount()
    :intRate{3.3}{
}

SavingAccount::~SavingAccount()
{
}

void SavingAccount::deposit(double amount) {
    std::cout << "SavingAccount deposit called with: " << amount << std::endl;
}

void SavingAccount::withdraw(double amount) {
    std::cout << "SavingAccount withdraw called with: " << amount << std::endl;
}
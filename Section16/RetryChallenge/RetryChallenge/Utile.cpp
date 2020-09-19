#include "Utile.h"

void display(const std::vector<Account*> &account) {
    std::cout << std::endl;
    std::cout << "================== account ====================\n"; 
    for (const auto acc: account) {
        std::cout << "Display: " << *acc << std::endl;
    }
}

void deposit(std::vector<Account*> &account, double amt) {
    std::cout << std::endl;
    std::cout << "================== deposit account ====================\n"; 
    for (auto acc: account) {
        if (acc->deposit(amt)) {
            std::cout << "Account deposit: " << amt << " to " << *acc << std::endl;  
        } else {
            std::cout << "Account deposit failed: " << amt << " to " << *acc << std::endl;
        }
    }
}

void withdraw(std::vector<Account*> &account, double amt) {
    std::cout << std::endl;
    std::cout << "================== withdraw account ====================\n"; 
    for (auto acc: account) {
        if (acc->withdraw(amt)) {
            std::cout << "Account withdraw: " << amt << " to " << *acc << std::endl;
        } else {
            std::cout << "Account withdraw failed: " << amt << " to " << *acc << std::endl;
        }
    }
}

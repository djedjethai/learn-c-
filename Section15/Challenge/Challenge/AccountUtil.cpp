#include "AccountUtil.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void display(const std::vector<Account> &account) {
    cout << endl;
    cout << "================== account ====================\n"; 
    for (const Account &acc: account) {
        cout << acc;
    };
}

void deposit(std::vector<Account> &account, double d) {
cout << endl;    
cout << "================== deposit account ====================\n"; 
    for (Account &acc: account) {
        if (acc.deposit(d)) {
            cout << "Account deposit: " << d << " to " << acc;
        } else {
            cout << "Fail deposit: " << d << " to " << acc;
        };
    };
}

void withdraw(std::vector<Account> &account, double w) {
cout << endl;    
cout << "================== withdraw account ====================\n"; 
    for (Account &acc: account) {
        if (acc.withdraw(w)) {
            cout << "Account withdraw: " << w << " to " << acc;
        } else {
            cout << "Fail withdraw: " << w << " to " << acc;
        };
    };
}

void display(const std::vector<SavingAccount> &account) {
cout << endl;    
cout << "================== saving account ====================\n"; 
    for (const auto &acc: account) {
        cout << acc;
    };
}

void deposit(std::vector<SavingAccount> &account, double d) {
cout << endl;    
cout << "================== deposit saving account ====================\n"; 
    for (auto &acc: account) {
        if (acc.deposit(d)) {
            cout << "Account deposit: " << d << " to " << acc;
        } else {
            cout << "Fail deposit: " << d << " to " << acc;
        };
    };
}

void withdraw(std::vector<SavingAccount> &account, double w) {
cout << endl;    
cout << "================== withdraw saving account ====================\n"; 
    for (auto &acc: account) {
        if (acc.withdraw(w)) {
            cout << "Account withdraw: " << w << " to " << acc;
        } else {
            cout << "Fail withdraw: " << w << " to " << acc;
        };
    };
}

void display(const std::vector<CheckingAccount> &account) {
cout << endl;    
cout << "================== Checking account ====================\n"; 
    for (const auto &acc: account) {
        cout << acc;
    };
}

void deposit(std::vector<CheckingAccount> &account, double d) {
cout << endl;    
cout << "================== deposit Checking account ====================\n"; 
    for (auto &acc: account) {
        if (acc.deposit(d)) {
            cout << "Account deposit: " << d << " to " << acc;
        } else {
            cout << "Fail deposit: " << d << " to " << acc;
        };
    };
}

void withdraw(std::vector<CheckingAccount> &account, double w) {
cout << endl;    
cout << "================== withdraw Checking account ====================\n"; 
    for (auto &acc: account) {
        if (acc.withdraw(w)) {
            cout << "Account withdraw: " << w << " to " << acc;
        } else {
            cout << "Fail withdraw: " << w << " to " << acc;
        };
    };
}

void display(const std::vector<TrustAccount> &account) {
cout << endl;    
cout << "================== Trust account ====================\n"; 
    for (const auto &acc: account) {
        cout << acc;
    };
}

void deposit(std::vector<TrustAccount> &account, double d) {
cout << endl;    
cout << "================== deposit Trust account ====================\n"; 
    for (auto &acc: account) {
        if (acc.deposit(d)) {
            cout << "Account deposit: " << d << " to " << acc;
        } else {
            cout << "Fail deposit: " << d << " to " << acc;
        };
    };
}

void withdraw(std::vector<TrustAccount> &account, double w) {
cout << endl;    
cout << "================== withdraw Trust account ====================\n"; 
    for (auto &acc: account) {
        if (acc.withdraw(w)) {
            cout << "Account withdraw: " << w << " to " << acc;
        } else {
            cout << "Fail withdraw: " << w << " to " << acc;
        };
    };
}


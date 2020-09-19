#include "AccountUtil.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void display(const std::vector<Account*> &account) {
    cout << endl;
    cout << "================== account ====================\n"; 
    for (const auto acc: account) {
        cout << *acc << endl;
    };
}

void deposit(std::vector<Account*> &account, double d) {
cout << endl;    
cout << "================== deposit account ====================\n"; 
    for (auto acc: account) {
        if (acc->deposit(d)) {
            cout << "Account deposit: " << d << " to " << *acc << endl;
        } else {
            cout << "Fail deposit: " << d << " to " << *acc << endl;
        };
    };
}

void withdraw(std::vector<Account*> &account, double w) {
cout << endl;    
cout << "================== withdraw account ====================\n"; 
    for (auto acc: account) {
        if (acc->withdraw(w)) {
            cout << "Account withdraw: " << w << " to " << *acc << endl;
        } else {
            cout << "Fail withdraw: " << w << " to " << *acc << endl;
        };
    };
}




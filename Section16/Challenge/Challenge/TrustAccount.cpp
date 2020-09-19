#include "TrustAccount.h"
// #include "SavingAccount.h"
// TrustAccount::~TrustAccount() {};

TrustAccount::TrustAccount(std::string n, double b, double i)
    :SavingAccount{n, b, i}, nbrWithdraw{0}{
};

bool TrustAccount::deposit(double d) {
    if (d >= 5000) 
        d += 50;
    
    return SavingAccount::deposit(d);
}

bool TrustAccount::withdraw(double w) {
    if (w <= (balance * 0.2) && nbrWithdraw < 4) {
        nbrWithdraw++;
        
        return SavingAccount::withdraw(w);
    };
    return false;
}

void TrustAccount::print(std::ostream &os) const {
    os << "[TrustAccount name: " << name << " Balance: " << balance << " the interest is: " << interest << "]";
};



#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance)
    :SavingAccount{name, balance}, nbrWithdraw{0} {
}

bool TrustAccount::withdraw(double num) {
    if (num <= defMaxWithdraw && nbrWithdraw <= defNbrWithdraw ) {
        nbrWithdraw++;
        return SavingAccount::withdraw(num);
    } else {
        return false;
    }
}

bool TrustAccount::deposit(double num) {
    return SavingAccount::deposit(num);
}

void TrustAccount::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[TrustAccount: " << name << " Balance: " << balance << "]";
}
    
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


class Account{
public:
    virtual void withdraw(double a) {
        cout << "Account class, you drop: " << a << endl;
    };
    virtual ~Account() {};
};

class SavingAccount: public Account{
public:
    virtual void withdraw(double a) override{
        cout << "SavingAccount class, you drop: " << a << endl;
    };
    virtual ~SavingAccount() {};
};

class CheckingAccount: public Account{
public:
    virtual void withdraw(double a) override{
        cout << "CheckingAccount class, you drop: " << a << endl;
    };
    virtual ~CheckingAccount() {};
};

class TrustAccount: public Account{
public:
    virtual void withdraw(double a) override{
        cout << "TrustAccount class, you drop: " << a << endl;
    };
    virtual ~TrustAccount() {};
};
    

void doWithdraw(Account &x, double d) {
    x.withdraw(d);
}




int main()
{
	Account a;
    Account &ref = a;
    
    cout << "================================" << endl;
    ref.withdraw(1000);
    cout << endl;
    
    TrustAccount t;
    Account &ref1 = t;
    
    cout << "================================" << endl;
    ref1.withdraw(1000);
    cout << endl;
    
    Account a1;
    SavingAccount a2;
    CheckingAccount a3;
    TrustAccount a4;
    
    cout << "================================" << endl;
    doWithdraw(a1, 1000);
    doWithdraw(a2, 2000);
    doWithdraw(a3, 3000);
    doWithdraw(a4, 4000);
    
	return 0;
}

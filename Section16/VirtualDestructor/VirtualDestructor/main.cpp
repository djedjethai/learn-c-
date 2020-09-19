#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

class Account {
public:
    virtual void withdraw() {
        cout << "Account withdraw" << endl;
    };
    virtual ~Account() {};
};

class SavingAccount: public Account {
public:
    virtual void withdraw() override{
        cout << "SavingAccount withdraw" << endl;
    };
    virtual ~SavingAccount() {};
};

class CheckingAccount: public Account {
public:
    virtual void withdraw() override{
        cout << "CheckingAccount withdraw" << endl;
    };
    virtual ~CheckingAccount() {};
};

class TrustAccount final: public Account {
public:
    virtual void withdraw() override final{
        cout << "TrustAccount withdraw" << endl;
    };
    virtual ~TrustAccount() {};
};



int main()
{
	Account *p1 = new Account();
    Account *p2 = new SavingAccount();
    Account *p3 = new CheckingAccount();
    Account *p4 = new TrustAccount();
    
    p1->withdraw();
    p2->withdraw();
    p3->withdraw();
    p4->withdraw();
    
    cout << "----------- loop ------------" << endl;
    
    Account *array [] = {p1, p2, p3, p4, p1, p3};
    
    for (size_t i{0}; i < 6; i++) {
        array[i]->withdraw();
    }
    
    cout << "----------- range base loop ------------" << endl;
    
    std::vector<Account*> arrayVec{p2, p2, p3, p3};
    arrayVec.push_back(p4);
    arrayVec.push_back(p1);
    
    for (auto acc: arrayVec) {
        acc->withdraw();
    };
    
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
	return 0;
}

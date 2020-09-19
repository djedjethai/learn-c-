#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;


class Account {
    public: 
        virtual void withdraw() const {
            cout << "I m Account" << endl;
        };
};

class Saving : public Account {
    public: 
        virtual void withdraw() const {
            cout << "I m Saving" << endl;
        };
};

class Checking : public Account {
    public: 
        virtual void withdraw() const {
            cout << "I m Checking" << endl;
        };
};

class Trust : public Account {
    public: 
        virtual void withdraw() const {
            cout << "I m Trust" << endl;
        };
};



int main()
{
    Account *p1 = new Account;
    Account *p2 = new Saving;
    Account *p3 = new Checking;
    Account *p4 = new Trust;
    
    p1->withdraw();
	p2->withdraw();
    p3->withdraw();
    p4->withdraw();
    
    cout << "------------ array ptr --------------" << endl;
    Account *array [] = {p1, p2, p3, p4};
    for (size_t i{0}; i < 4; i++) {
        array[i]->withdraw();
    };
    cout << endl;
    
    array[3] = p1;
    for (size_t i{0}; i < 4; i++) {
        array[i]->withdraw();
    };
    
    cout << "-------------- vector ptr ----------------" << endl;
    
    std::vector<Account*>accountVect{p1, p2, p3, p4};
    for (auto acc: accountVect) {
        acc->withdraw();
    }
    cout << endl;
    accountVect.push_back(p2);
    accountVect.push_back(p4);
    for (auto acc: accountVect) {
        acc->withdraw();
    }
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
	return 0;
}

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;


class Iprint {
friend std::ostream &operator<<(std::ostream &os, const Iprint &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~Iprint(){};
};
std::ostream &operator<<(std::ostream &os, const Iprint &obj) {
    obj.print(os);
    return os;
};

class Account: public Iprint {
public:
    virtual void withdraw(double d) {
        cout << "Account withdraw: " << d << endl;
    };
    virtual void print(std::ostream &os) const override {
        os << "Account display";
    };
    virtual ~Account() {};
};

class Saving: public Account {
public:
    virtual void withdraw(double d) override {
        cout << "Saving withdraw: " << d << endl;
    };
    virtual void print(std::ostream &os) const override {
        os << "Saving display";
    };
    virtual ~Saving() {};
};

class Checking: public Account {
public:
    virtual void withdraw(double d) override {
        cout << "Checking withdraw: " << d << endl;
    };
    virtual void print(std::ostream &os) const override {
        os << "Checking display";
    };
    virtual ~Checking() {};
};

class Trust: public Account {
public:
    virtual void withdraw(double d) override {
        cout << "Trust withdraw: " << d << endl;
    };
    virtual void print(std::ostream &os) const override {
        os << "Trust display";
    };
    virtual ~Trust() {};
};

class Dog: public Iprint {
public:
    virtual void print(std::ostream &os) const override {
        os << "Woof, wooof" << endl;
    };
    virtual ~Dog(){};
};

// WE CAN EVEN WRITE A FUNCTION WHICH GONNA PRINT ANY OBJ WHICH ARE ATTACH TO THE INTERFACE
void printIprint(const Iprint &obj) {
    cout << obj << endl;
};


int main()
{
//	Account *p1 = new Account();
//    Account *p2 = new Saving();
//    Account *p3 = new Checking();
//    Account *p4 = new Trust();
//    
//    std::vector<Account*>accVec{p1, p2, p3, p4};
//    for (auto ac: accVec) {
//        ac->withdraw(1000);
//    };

//    delete p1;
//    delete p2;
//    delete p3;
//    delete p4;
    
    Iprint *i1 = new Account();
    cout << *i1 << endl;
    
    Iprint *i2 = new Trust();
    cout << *i2 << endl;
    
    Iprint *d1 = new Dog();
    cout << *d1 << endl; 
    
    // use the printIprint function
    printIprint(*d1);
    
    delete d1;
    delete i1;
    delete i2;
    
	return 0;
}

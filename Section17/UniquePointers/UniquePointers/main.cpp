#include <iostream>
#include <vector>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include "TrustAccount.h"
#include "Utile.h"

using std::cout;
using std::cin;
using std::endl;


class Test {
protected:
    int data;
public:
    Test():data{0} {cout << "Test Constructor no value: " << data << endl;}
    Test(int num):data{num} {cout << "Test Constructor with value: " << data << endl;}
    int getData() const {return data;}
    ~Test(){cout << "Test Destructor: " << data << endl;}
};


// shared pointer
class B;

class A {
protected:
    std::shared_ptr<B> ptrB;
public:
    A() { cout << "Constructor A" << endl; };
    ~A() { cout << "Destructor A" << endl; };
    void setPtr(std::shared_ptr<B> &b){ 
        ptrB = b; 
    };
};

class B {
protected:
    // std::shared_ptr<A> ptrA; // that would create a memory leak asa we destruct one of the 2 objects
    std::weak_ptr<A> ptrA; // that fixe it
public:
    B() { cout << "Constructor B" << endl; };
    ~B() { cout << "Destructor B" << endl; };
    void setPtr(std::shared_ptr<A> &a) { 
        ptrA = a;
    };
};


int main()
{
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->setPtr(b);
    b->setPtr(a);
    
    
// cout << "========================= Unique pointer ========================" << endl;
//    Test t1{1000};
//    
//    Test *t2 = new Test{2000};
//    delete t2;

//        std::unique_ptr<Test> t3(new Test{100});
//        std::unique_ptr<Test> t4 = std::make_unique<Test>(200);
//        
//        std::unique_ptr<Test> tcp;
//        tcp = std::move(t3);
//        
//        if (!t3)
//            cout << "t3 has been moved" << endl;

//    std::unique_ptr<Account> acc1 = std::make_unique<SavingAccount>("Annie", 230);
//    cout << *acc1 << endl;
//    acc1->deposit(5000);
//    cout << *acc1 << endl;
//    
//    std::unique_ptr<Account> acc2 = std::make_unique<SavingAccount>("Larry", 1001);
//    std::unique_ptr<Account> acc3 = std::make_unique<SavingAccount>("Simon", 1002);
//    
//    // do not work....
//    // std::vector<std::unique_ptr<Account>>vec1{std::move(acc1), std::move(acc2), std::move(acc3)};
//    
//    std::vector<std::unique_ptr<Account>> vec2;
//    vec2.push_back(std::make_unique<SavingAccount>("Boris", 23));
//    vec2.push_back(std::make_unique<CheckingAccount>("Cheche", 761));
//    vec2.push_back(std::make_unique<TrustAccount>("Trutru", 6790));
//    
//    
//    // display(vec1);
//    for (const auto &v: vec2)
//        cout << *v << endl;

//    std::shared_ptr<int> p1{new int{100}};
//    cout << *p1 << endl;
//    std::shared_ptr<int> p2{p1};
//    cout << *p2 << endl;
//    cout << p1.use_count() << endl;
//    cout << p2.use_count() << endl;
//    cout << "============ After reset p2 ============" << endl;
//    p2.reset();
//    cout << p1.use_count() << endl;
//    cout << p2.use_count() << endl;


// cout << "======================== Shared Pointer ==========================" << endl;
//        std::shared_ptr<Account> acc1{new SavingAccount{"Gigi", 2346}};
//        acc1->deposit(10000);
//        cout << *acc1 << endl;
//
//
//        std::vector<std::shared_ptr<Account>> vecAcc;
//        std::shared_ptr<Account> acc2{new SavingAccount{"Sava", 767}};
//        vecAcc.push_back(acc2);
//        cout << acc2.use_count() << endl;
//        
    
//    std::shared_ptr<int> p1{new int{24}};
//    cout << "nbr ptr p1: " << p1.use_count() << endl;
//    
//    std::shared_ptr<int> p2{p1};
//    cout << "nbr ptr p1: " << p1.use_count() << endl;
//    
//    
//    p1.reset();
//    cout << "nbr ptr p1: " << p1.use_count() << endl;
//    cout << "nbr ptr p2: " << p2.use_count() << endl;


//    std::shared_ptr<Test> ptr = std::make_shared<Test>(56);
//    cout << ptr->getData() << endl;
//    cout << "nbr pointer ptr: " << ptr.use_count() << endl;
//    
//    {
//        std::shared_ptr<Test> ptr1 = ptr;
//        cout << "nbr pointer ptr: " << ptr.use_count() << endl;
//        {
//            std::shared_ptr<Test> ptr2 = ptr;
//            cout << "nbr pointer ptr: " << ptr.use_count() << endl;
//            ptr.reset();
//        }
//        cout << "nbr pointer ptr: " << ptr.use_count() << endl;
//    }
//    cout << "nbr pointer ptr: " << ptr.use_count() << endl;

//    std::shared_ptr<Account> acc1 = std::make_shared<CheckingAccount>("Lara", 2000);
//    std::shared_ptr<Account> acc2 = std::make_shared<SavingAccount>("Arold", 1000);
//    std::shared_ptr<Account> acc3 = std::make_shared<TrustAccount>("Sami", 5000);
//    
//    std::vector<std::shared_ptr<Account>> vecAcc;
//    vecAcc.push_back(acc1);
//    vecAcc.push_back(acc2);
//    vecAcc.push_back(acc3);
//    
//    for (const auto &v: vecAcc) {
//        cout << *v << endl;
//        cout << "nbr pointer: " << v.use_count() << endl;
//    }
//    

    
    
    
    
    
    
    
    
    
//	CheckingAccount franck{"franck", 5000};
//    cout << franck << endl;
//    
//    Account *trust = new TrustAccount{"James"};
//    cout << *trust << endl;
//    
//    Account *p1 = new CheckingAccount{"Larry", 10000};
//    Account *p2 = new SavingAccount{"Moe", 1000};
//    Account *p3 = new TrustAccount{"Curly"};
//    
//    std::vector<Account*>vecA{p1, p2, p3};
//    display(vecA);
//    deposit(vecA, 1000);
//    withdraw(vecA, 2000);
//    
//    delete p1;
//    delete p2;
//    delete p3;
//    delete trust;
    
	return 0;
}



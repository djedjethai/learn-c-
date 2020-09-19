#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Base {
private:
    int value;
public:
    Base(): value{0} { cout << "Base no arg constructor" << endl; }
    Base(int val): value{val} { cout << "Base (int) overloaded constructor" << endl; }
    ~Base() { cout << "Base destructor" << endl; }
    
};

//class Derived: public Base {
//    using Base::Base;
//private:
//    int doubledValue;
//public:
//    Derived(): doubledValue{0} { cout << "Derived no arg constructor" << endl; }
//    Derived(int val): doubledValue{val*2} { cout << "Derived (int) overloaded constructor" << endl; }
//    ~Derived() { cout << "Derived destructor" << endl; }
//};

class Derived: public Base {
private:
    int doubledValue;
public:
    Derived(): Base(), doubledValue{0} { cout << "Derived no arg constructor" << endl; }
    Derived(int val): Base(val), doubledValue{val*2} { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main()
{
	// Base b;
    // Base c{23};
    // Derived c;
    Derived d{456};
	return 0;
}

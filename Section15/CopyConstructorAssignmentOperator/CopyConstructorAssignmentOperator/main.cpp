#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Base {
private:
    int value;
public:
    Base()
        :value{0}{
            cout << "constructor no-args Base" << endl;
    }
    
    ~Base(){
        cout << "destructor Base" << endl;
    }
    
    Base(int v)
        :value{v} {
            cout << "constructor args" << endl;
    }
    
    Base(const Base &b) 
        :value{b.value} {
        cout << "Base copy constructor" << endl;
    }
    
    Base &operator=(const Base &rhs) {
        cout << "Base operator" << endl;
        if (this == &rhs) {
            return *this;
        };
        value = rhs.value;
        return *this;
    } 
};

class Derived: public Base {
private:
    int doubleDerived;
public:
    Derived()
        :Base(), doubleDerived{0} {
            cout << "Derived no-args constructor" << endl;
    }
    
    Derived(int v)
        :Base(v), doubleDerived(v*2) {
            cout << "Derived args constructor" << endl;
    }
    
    Derived(const Derived &d)
        :Base{d}, doubleDerived(d.doubleDerived) {
            cout << "Derived copy constructor" << endl;
    }
    
    Derived &operator=(const Derived &rhs) {
        cout << "Derived operator" << endl;
        if (this == &rhs) 
            return *this;
        Base::operator=(rhs);
        doubleDerived = rhs.doubleDerived;
        return *this;
    }
};

int main()
{
//	Base b{100};
//    Base b1{b};
//    b = b1;
    
    Derived d{100};
    Derived d1{d};
    d = d1;

	return 0;
}

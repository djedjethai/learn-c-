#include <iostream>

using std::cout;
using std::cin;
using std::endl;


class Base {
public:
    void sayHello() const {
        cout << "Hello i'm the Base class" << endl;
    };
};

class Derived: public Base{
public:
    void sayHello() const {
        cout << "Hello i'm the Derived class" << endl;
    };
};

void greetings(const Base &obj) {
    cout << "Greetings from: ";
    obj.sayHello();
};


int main()
{
	Base b;
    Derived d;
    
    b.sayHello();
    d.sayHello();
    
    greetings(b);
    greetings(d);
    
    cout << "----------------- ptr ---------------------" << endl;
    Base *ptr = new Derived;
    ptr->sayHello();
    greetings(*ptr);
    
    delete ptr;
    
	return 0;
}

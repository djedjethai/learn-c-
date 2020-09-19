#include <iostream>

int main()
{
	class Base {
        // note friends class of Base have access to all
    public:
        int a{0};
        void display() { std::cout << a << " ," << b << " ," << c << endl; }; // member method has access to all
    protected:
        int b{0};
    private:
        int c{0};
    }
    
    class Derived: public Base {
        
        void accessBaseMembers() {
            a = 100; // ok
            b = 200; // ok
            // c = 300; // compile err, as c is private
        }
    }
    
    Base base{};
    base.a = 100; // ok
    // base.b = 200; // compiler err, no access
    // base.c = 300; // compiler err, no access
    
    Derived d{};
    d.a = 1000;
    // d.b = 200; // compiler err, no access
    // d.c = 300; // compiler err, no access
    
	return 0;
}

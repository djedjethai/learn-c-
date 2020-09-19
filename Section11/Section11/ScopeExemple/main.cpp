#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void localExample(int x);
void globalExemple();
void staticLocalExample();

int num {300};


int main()
{
	int num{100};// local to main
    int num1{500};// local to main
    
    {// create a new level of scope
        int num{200};
        cout << "Local num in paraenthese is: " << num << endl;
        cout << "Can access num1 in main scope: " << num1 << endl;
        
    }
    
    cout << "Local num in main is: " << num << endl;
    
    // localExample(10);
//    globalExemple();
//    
//    cout << "Global in main after modif: " << num << endl;
        staticLocalExample();
        staticLocalExample();
    
	return 0;
}


void localExample(int x) {
    int num{1000};
    cout << "\n Local num in the localExample function: " << num << endl;
    num = x;
    cout << "\n Local num after assign x value: " << num << endl;
}

void globalExemple() {
    cout << "There is the global var: " << num << endl;
    num *= 2;
    cout << "Global in funct after modif: " << num << endl;
}

// the static variable keeps its new value in the scope it's declare (like global var but only inside its scope)
// call the funct once num = 6000, call twice num = 7000.
void staticLocalExample() {
    static int num{5000};
    cout << "There is the static var: " << num << endl;
    num += 1000;
    cout << "static in funct after modif: " << num << endl;
}
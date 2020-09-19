#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void funcB();
void funcC();

void funcA() {
    cout << "Start funcA" << endl;
    funcB();
    cout << "End funcA" << endl;
}

void funcB() {
    cout << "Start funcB" << endl;
    try {
        funcC();
    }
    catch (int &e) {
        cout << "[Error]: catch int err in funcB" << endl;
    }
    cout << "End funcB" << endl;
}

void funcC() {
    cout << "Start funcC" << endl;
    throw 100;
    cout << "End funcC" << endl;
}

int main()
{
	cout << "Start Main" << endl;
    try {
        funcA();
    }
    catch (int &e) {
        cout << "[Error]: catch int err in main" << endl;
    }
    cout << "End Main" << endl;
    
	return 0;
}

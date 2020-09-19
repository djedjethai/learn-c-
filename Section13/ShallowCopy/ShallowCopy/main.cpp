#include <iostream>
#include <string>

#include "Shallow.h"

using std::cout;
using std::cin;
using std::endl;

void displayShallow(Shallow s);

int main()
{
    Shallow obj1{100};
    displayShallow(obj1);
    
    Shallow obj2(obj1);
    obj2.setData(1000);
	
	return 0;
}

void displayShallow(Shallow s) {
    cout << "The data of Shallow is: " << s.getData() << endl;
};
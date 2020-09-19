#include <iostream>
#include "Deep.h"

using std::cin;
using std::cout;
using std::endl;

void showData(Deep obj);

int main()
{
	Deep obj1{100};
    showData(obj1);
    
    Deep obj2{obj1};
    obj2.setData(999);
    showData(obj2);
    
	return 0;
}

void showData(Deep obj) {
    cout << "the data in obj is: " << obj.getData() << endl;
}

#include <iostream>

using std::endl;
using std::cin;
using std::cout;

//unsigned long long factorial(unsigned long long);
//
//int main()
//{
//	cout << factorial(8) << endl; 
//	return 0;
//}
//
//unsigned long long factorial(unsigned long long num) {
//    if (num == 0)
//        return 1;
//        
//    return num * factorial(num - 1);
//}


double totAm(double);

int main()
{
	cout << totAm(16) << endl; 
	return 0;
}

double totAm(double d) {
    if (d == 1)
        return 0.01;
    
    return 2 * totAm(d - 1);
}




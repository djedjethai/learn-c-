#include <iostream>
#include <cstring>
#include "Mystring.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	Mystring larry{"Larry"};
    larry.display(); // Larry
    
    larry = -larry;
    larry.display(); // larry
    
    cout << std::boolalpha << endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;
    
    cout << (larry == moe) << endl; // false
    cout << (larry == stooge) << endl; // true
    
    Mystring stooges = "Larry" + moe;
    stooges.display(); // LarryMoe
    
    Mystring twoStooges = moe + " " + "Larry";
    twoStooges.display(); // Moe Larry
    Mystring threeStooges = moe + " " + larry + " " + "Curly";
    threeStooges.display(); // Moe Larry Curly
    
	return 0;
}

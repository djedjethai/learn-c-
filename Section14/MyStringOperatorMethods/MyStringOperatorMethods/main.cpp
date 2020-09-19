#include <iostream>
#include "Mystring.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
//	Mystring a{"Hello"};
//    a = Mystring{"Hola"};
//    a = "Bonjour";
    
    
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    
    Mystring stooge = larry;
    larry.display(); //Larry
    moe.display(); //Moe
    
    cout << (larry == moe) << endl; //false
    cout << (larry == stooge) << endl; //true
    
    larry.display(); //larry
    
    Mystring stooges = larry + "Moe";
    // !!! Mystring stooge = larry + "moe"; // compiler erreur
    
    Mystring twoStooges = moe + " " + "Larry";
    twoStooges.display(); // Moe Larry
    

	return 0;
}

#include <iostream>
#include "Mystring.h"

int main()
{
//	Mystring empty;
//    Mystring larry("Larry");
//    Mystring stooge(larry);
//    
//    empty.display();
//    larry.display();
//    stooge.display();

    Mystring a{"Hello"};
    a = Mystring{"Hola"};
    a = "Bonjour";
    
	return 0;
}

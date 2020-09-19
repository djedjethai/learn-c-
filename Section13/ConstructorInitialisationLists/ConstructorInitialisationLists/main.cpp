#include <iostream>
#include <string>
#include "Dog.h"

using std::endl;
using std::cin;
using std::cout;

int main()
{
	Dog dog1;
    Dog dog2("DoggyWouf", 6, 150);
    
    std::string dog1Name = dog1.getName();
    int dog1Age = dog1.getAge();
    int dog1Health = dog1.getHealth();
    cout << dog1Name << " - " << dog1Age << " - " << dog1Health << endl;
    
    std::string dog2Name = dog2.getName();
    int dog2Age = dog2.getAge();
    int dog2Health = dog2.getHealth();
    cout << dog2Name << " - " << dog2Age << " - " << dog2Health << endl;
    
	return 0;
}

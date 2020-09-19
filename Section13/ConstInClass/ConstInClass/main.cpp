#include <iostream>
#include <string>

#include "Player.h"

using std::endl;
using std::cout;
using std::cin;

int main()
{
	Player num1;
    const Player num2("Incomplet");
    const Player num3("Ari", 23, 3);
    
    cout << "num1" << endl;
    std::string n = num1.getName();
    cout << n << endl;
    int a = num1.getAge();
    cout << a << endl;
    int x = num1.getXp();
    cout << x << endl;
    cout << "num2" << endl;
    std::string n2 = num2.getName();
    cout << n2 << endl;
    int a2 = num2.getAge();
    cout << a2 << endl;
    int x2 = num2.getXp();
    cout << x2 << endl;
    cout << "num3" << endl;
    std::string n3 = num3.getName();
    cout << n3 << endl;
    int a3 = num3.getAge();
    cout << a3 << endl;
    int x3 = num3.getXp();
    cout << x3 << endl;
    
	return 0;
}

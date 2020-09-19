#include <iostream>
#include "Player.h"
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Player anna("Bob", 90, 3);
	// Player anna("Simon");
    // anna.setName("Anna");
    std::string joueur = anna.getName();
    cout << joueur << endl;
	return 0;
}

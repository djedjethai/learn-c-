#include <iostream>
#include "Player.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int showHealth;
    int showXp;
    std::string showName;
    // Player num1;
    // Player num1("Teddy");
    Player num1("OOOkkk", 200, 40);
    showName = num1.getName();
    showHealth = num1.getHealth();
    showXp = num1.getXp();
    
    cout << showName << " - " << showHealth << " - " << showXp << endl;
    cout << "=============================" << endl;
    
    Player *playHeap = new Player("onTheHeap", 222, 11);
    std::string showHeapName = (*playHeap).getName();
    int showHeapHealth = (*playHeap).getHealth();
    int showHeapXp = (*playHeap).getXp();
    
    cout << showHeapName << " - " << showHeapHealth << " - " << showHeapXp << endl;
    
    
    delete playHeap;
    
    
	return 0;
}

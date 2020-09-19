#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


class Player {
    string name {"Player"};
    int health {100};
    int xp {3};
    
    void talk(string str);
    bool isDead();

};

class Account {
    string name {"Account"};
    double balance {0.0};
    
    bool deposit(double amt);
    bool withDraw(double amt);
};

int main()
{
	Player frank;
    Player hero;
    
    // create an array of Player Obj
    Player players[]{frank, hero};

    // vector of Objects
    vector<Player> vecPlay{frank};
    // push_back() is a method of vector
    vecPlay.push_back(hero);
    
    // create a pointer
    Player *enemy{nullptr};
    // create the new Player Obj on the heap.
    enemy = new Player;
    
    
    Account franckAcc;
    Account jimAcc;
    
    delete enemy;
    
	return 0;
}

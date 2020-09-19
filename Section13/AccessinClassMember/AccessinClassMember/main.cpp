#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


class Player {
public:
    string name {"Player"};
    int health {100};
    int xp {3};
    
    void talk(string str) {
        cout << name + " says " + str + "." << endl;
    };
    bool isDead();

};

class Account {
public:
    string name {"Account"};
    double balance {0.0};
    
    void showBalance() { cout << "The account balance of " << name << " is " << balance << endl; };
    bool deposit(double amt) { balance += amt; };
    bool withDraw(double amt) { balance -=amt; };
};

int main()
{
	Player frank;
    Player hero;
    
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    
    frank.talk("Bouuufffonnnn");
    
    Player *playHeap{nullptr};
    playHeap = new Player;
    (*playHeap).name = "Enemy";
    playHeap->health = 120;
    (*playHeap).talk("Aaaaaaaahhhhhhh");
    playHeap->talk("Ooooooohhhhh");
    
    delete playHeap;
    
    
    Account thom;
    
    thom.showBalance();
    thom.name = "Thom";
    thom.deposit(230);
    thom.showBalance();
    thom.withDraw(100);
    thom.showBalance();
        
	return 0;
}

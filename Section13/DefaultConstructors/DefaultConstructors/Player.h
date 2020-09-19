#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    Player();
    Player(std::string n);
    Player(std::string n, int h, int x);
    // constructor with default values
    // Payer(std::string = "None", int h = 23, int x = 2);
    // copy constructor
    Player(const Player &source);
    
    void setName(std::string n);
    std::string getName();
    int getHealth();
    int getXp();
};

#endif // _PLAYER_H_

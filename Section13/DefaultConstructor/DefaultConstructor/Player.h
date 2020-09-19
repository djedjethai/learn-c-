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
    // Player(std::string n, int h, int x);
   
    void setName(std::string name);
    std::string getName();
//    int showHealth();
//    int showXp();
};

#endif // _PLAYER_H_

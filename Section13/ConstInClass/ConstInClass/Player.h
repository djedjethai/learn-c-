#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
    std::string name;
    int age;
    int xp;
public:
    // Player();
    Player(std::string name = "None",int age = 18,int xp = 0);
    Player(const Player &source);
    
    void setName(std::string n);
    void setAge(int a);
    void setXp(int x);
    
    std::string getName() const;
    int getAge() const;
    int getXp() const;
};

#endif // _PLAYER_H_

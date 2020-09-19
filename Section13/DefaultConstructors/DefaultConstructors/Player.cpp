#include "Player.h"

Player::Player()
{
    name = "none";
    health = 100;
    xp = 3;
}

Player::Player(std::string n) {
    name = n;
    health = 150;
    xp = 6;
}

Player::Player(std::string n, int h, int x) {
    name = n;
    health = h;
    xp = x;
}

//contructor with default values, in this case the above constructor can be deleted
//Player::Player(std::string n, int h, int x) 
//    : name{n}, health{h}, xp{x} {
//}

// copy constructor
Player::Player(const Player &source)
    // here we use the initialiseur
    // : name{source.name}, health{source.name}, xp{source.xp}
    // here we delegate to the constructor
    :Player{source.name, source.health, source.xp} {
}

void Player::setName(std::string n) {
    name = n;
}

std::string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}

int Player::getXp() {
    return xp;
}


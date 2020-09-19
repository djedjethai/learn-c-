#include "Player.h"

//Player::Player() {
//    name = "none";
//    health = 100;
//    xp = 10;
//}

Player::Player(std::string n)
{
    name = n;
}

//Player::Player(std::string n, int h, int x)
//{
//    name = n;
//    health = h;
//    xp = x;
//}


void Player::setName(std::string n) {
    name = n;
}

std::string Player::getName() {
    return name;
}

//int Player::showHealth() {
//    return health;
//}

//int Player::showXp() {
//    return xp;
//}





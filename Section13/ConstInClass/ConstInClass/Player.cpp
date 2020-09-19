#include "Player.h"
#include <string>

//Player::Player()
//    :Player{"Nooo", 10, 5 }{
//}
Player::Player(std::string n, int a, int x)
    : name{n}, age{a}, xp{x}{
}
Player::Player(const Player &source) 
    :Player{source.name, source.age, source.xp}{
}


void Player::setName(std::string n) {
    name = n;
}
void Player::setAge(int a) {
    age = a;
}
void Player::setXp(int x) {
    xp = x;
}

std::string Player::getName() const{
    return name;
}
int Player::getAge() const{
    return age;
}
int Player::getXp() const{
    return xp;
}


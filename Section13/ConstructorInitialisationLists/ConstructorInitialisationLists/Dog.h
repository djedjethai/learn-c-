#ifndef _DOG_H_
#define _DOG_H_
#include <string>

class Dog
{
    private:
        std::string name;
        int age;
        int health;
    public:
//        Dog();
//        Dog(std::string n);
        Dog(std::string n = "None", int a = 3, int h = 80);
        // copy constructor
        Dog(const Dog &source);

        std::string getName();
        int getAge();
        int getHealth();

};
#endif // _DOG_H_

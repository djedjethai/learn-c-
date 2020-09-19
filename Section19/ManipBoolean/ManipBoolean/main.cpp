#include <iostream>
#include <iomanip>

int main()
{
	// std::cout << "no bool alpha default (10 == 10): " << (10 == 10) << std::endl; // 1
    // std::cout << "no bool alpha default (10 == 20): " << (10 == 20) << std::endl; // 0
    
    // USING MANIPULATOR
    std::cout << std::boolalpha; // when all following program apply it
    std::cout << "no bool alpha default (10 == 10): " << (10 == 10) << std::endl; // true
    std::cout << "no bool alpha default (10 == 20): " << (10 == 20) << std::endl; // false
    
    std::cout << "no bool alpha default (10 == 10): " << (10 ==10) << std::endl; // true
    std::cout << "no bool alpha default (10 == 20): " << (10 ==20) << std::endl; // false
    
    std::cout << std::noboolalpha; // set the ostream to 0 amd 1
    std::cout << "no bool alpha default (10 == 10): " << (10 == 10) << std::endl; // 1
    std::cout << "no bool alpha default (10 == 20): " << (10 == 20) << std::endl; // 0
    
    // USING METHODS
    // std is the namespace, io the class, boolalpha the flag to find in the class
    std::cout.setf(std::ios::boolalpha);
    std::cout << "no bool alpha default (10 == 10): " << (10 == 10) << std::endl; // true
    std::cout << "no bool alpha default (10 == 20): " << (10 == 20) << std::endl; // false
    
    // reset flag to default, entre parenthese is the flag to reset
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "no bool alpha default (10 == 10): " << (10 == 10) << std::endl; // 1
    std::cout << "no bool alpha default (10 == 20): " << (10 == 20) << std::endl; // 0
    
    
	return 0;
}

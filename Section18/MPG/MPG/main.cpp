#include <iostream>


int main()
{
	int miles;
    int gallons;
    int milesPerGallon;
    
    std::cout << "Enter miles: ";
    std::cin >> miles;
    
    std::cout << "Enter galons: ";
    std::cin >> gallons;
    
    try {
        if (gallons <= 0) 
            throw 0;
    
        milesPerGallon = static_cast<double>(miles) / gallons;
        std::cout << "The miles per gallon are: " << milesPerGallon;
    }
    
    
    catch(int &ex) {
        std::cerr << "Sorry, can not divise per 0" << std::endl;
    }
    
    
	return 0;
}

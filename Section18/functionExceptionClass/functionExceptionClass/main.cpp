#include <iostream>


class DivideByZeroException {
    
};

class NegativeValueException {
    
};

double calculeMpg(int miles, int galons) {
    if (galons == 0)
        throw DivideByZeroException();
    if (miles < 0 || galons < 0) 
        throw NegativeValueException();
        
    return static_cast<double>(miles) /galons;
};



int main()
{
	int miles{};
    int gallons{};
    double milesPerGallon{};
    
    std::cout << "Enter miles: ";
    std::cin >> miles;
    
    std::cout << "Enter galons: ";
    std::cin >> gallons;
    
    try {
        milesPerGallon = calculeMpg(miles, gallons);
        std::cout << "The miles per gallon are: " << milesPerGallon;
    }
    
    
    catch(DivideByZeroException &ex) {
        std::cerr << "Sorry, can not divise per 0" << std::endl;
    }
    
    catch(NegativeValueException &ex) {
        std::cerr << "Sorry, negative value are not accepted" << std::endl;
    }
    
    std::cout << "bye " << std::endl;
    
	return 0;
}
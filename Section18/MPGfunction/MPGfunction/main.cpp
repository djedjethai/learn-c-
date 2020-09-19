#include <iostream>

double returnAverage(int total, int nbr) {
    if (nbr <= 0)
        throw 0;
    if (total <= 0 || nbr <= 0 )
        throw std::string {"Negative value err"};
        
    return static_cast<double>(total) / nbr;
}

int main()
{
	int total;
    int nbr;
    
    
    std::cout << "Enter total: ";
    std::cin >> total;
    
    std::cout << "Enter nbr: ";
    std::cin >> nbr;
    
    try {
        double avg = returnAverage(total, nbr);
        std::cout << "The average is: " << avg;
    }
    
    
    catch(int &ex) {
        std::cerr << "Sorry, can not divise per 0" << std::endl;
    }
    catch(std::string &ex) {
        std::cerr << "[ERROR]: " << ex <<std::endl;
    }
    catch(...) {
        std::cerr << "An error occur" << std::endl;
    }
    
    std::out << "bye." << std::endl;ß
    
    
	return 0;
}

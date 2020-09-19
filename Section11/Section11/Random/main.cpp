#include <iostream>
#include <cstdlib> //required for rand()
#include <ctime> //required for time()
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

int main()
{
    // create a random number between 1 and 6
//	int randomNumber{};
//    size_t count{10};
//    int min{1};
//    int max{6};
//    
//    // if we don t seed the generator we will get the same random number each time
//    cout << "RAND_MAX on my systhem is: " << RAND_MAX << endl;
//    srand(time(nullptr)); //that for the random to be different each time
//    
//    for (size_t i{1}; i <= count; i++) {
//        randomNumber = rand() % max + min;
//        cout << randomNumber;
//        cout << endl;
//    }

    // exercice 
    double bill_total {102.78};
    int number_of_guests {5};
    
    double individualBill{bill_total / number_of_guests};
    
    cout << individualBill << endl;
    
    double individualBill1{std::floor(individualBill)};
    double individualBill2{std::round(individualBill)};
    double individualBill3{std::ceil(individualBill)};
    
    cout << "The individual bill at location 1 will be $" << individualBill1 << "\n" << "The individual bill at location 2 will be $" << individualBill2 << "\n" << "The individual bill at location 3 will be $" << individualBill3;
    
    
	return 0;
}

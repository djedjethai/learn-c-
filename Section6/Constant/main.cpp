#include <iostream>

using std::cout;
using std::cin;
using std:: endl;

int main()
{
	const double pricePerSmallRoom {25.0};
    const double pricePerBigRoom {35.0};
    const double taxe{0.036};
    
    cout << "The price per small room per month is: " << pricePerSmallRoom << " $" << endl;
    cout << "The price per big room per month is: " << pricePerBigRoom << " $" << endl;
    cout << "The taxes are: " << taxe * 100 << " %" << endl;
    // cout << endl; can use to jump a line. but \n is better
    
    cout << "\nHow many small rooms do you need to clean: ";
    int signed nbrSmallRooms {0};
    cin >> nbrSmallRooms;
    
    cout << "\nHow many big rooms do you need to clean: ";
    int signed nbrBigRooms {0};
    cin >> nbrBigRooms;
    
    cout << "\n==============================================================" << endl;
    cout << nbrSmallRooms << " small rooms" << endl;
    cout << nbrBigRooms << " big rooms" << endl;
    cout << "\nThe estimate price is: " 
        << ((pricePerSmallRoom * nbrSmallRooms) + (pricePerBigRoom * nbrBigRooms)) * 
            ( 1 + taxe ) 
        << " $" << endl;
	return 0;
}

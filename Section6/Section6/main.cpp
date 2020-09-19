#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char middleInitial {'j'};
    cout << "My middle initial is: " << middleInitial << endl;

    unsigned short int examScore {55};
    cout << "Your score is: " << examScore << endl;
    
    int countryRepresented {65};
    cout << "There is " << countryRepresented << " country represented in the event" << endl;
    
    long peopleInFlorida {2'061'000'000'000'000'000};
    cout << "There is " << peopleInFlorida << " Peaple in florida" << endl;
    
    long long peopleOnEarth {7'600'000'000};
    cout << "There is " << peopleOnEarth << " Peaple on earth" << endl;
    
    long long superLong {7'600'000'000'000'000'000};
    cout << "There is " << superLong << " distance in " << "kilometers" << endl;
    
    // floating
    
    float examScoreFloat {5.5};
    cout << "Your score is: " << examScoreFloat << endl;
    
    // will cut the last 7 and will return 5.57869
    double longNumber {5.578687};
    cout << "Your score is: " << longNumber << endl;
    
    long double overLong {2.7e120};
    cout << "Your score is: " << overLong << endl;
    
    short value1 {30000};
    short value2 {1000};
    int product {value1*value2}; // if short ERR
    cout << "la somme de " << value1 << " and " << value2 << " est: " << product << endl;
}

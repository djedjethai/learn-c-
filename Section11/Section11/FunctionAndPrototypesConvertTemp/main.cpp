#include <iostream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;
using std::string;

void farenheitToCelsius(double);
void celsiusToFarenheit(double temp);
void promptUser();

int main()
{
    promptUser();
	return 0;
}

void promptUser() {
    string choice{};
    do {
        cout << " You like Farenheit to Celsius, enter: f,\n You like Celsius to Farenheit, enter: c ";
        cin >> choice;
    } while (choice != "f" && choice != "c");
    
    double temperature{};
    if (choice == "f") {
        cout << "Enter a temp in Farenheit: ";
        cin >> temperature;
        return farenheitToCelsius(temperature);
    }
    if (choice == "c") {
        cout << "Enter a temp in Celsuis: ";
        cin >> temperature;
        return celsiusToFarenheit(temperature);
    }
}

void farenheitToCelsius(double temp) {
    cout << "The temperature in Celsius is: " << round((5.0 / 9.0) * (temp - 32)) << endl;
}

void celsiusToFarenheit(double temp) {
    cout << "The temperature in Farenheit is: " << round((5.0 / 9.0) * (temp - 32) + 273) << endl;
}



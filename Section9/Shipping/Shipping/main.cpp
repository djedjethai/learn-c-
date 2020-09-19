#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int length{}, width{}, height{};

    const float surcharge1{ 0.1 };
    const float surcharge2{ 0.25 };

    const int cubic1{ 100 };
    const int cubic2{ 500 };

    float baseCost{ 2.5 };

    double price{ 0 };
    price = 0;

    // enter dim
    cout << "Enter the dimension: length, width, height, separate by space: ";
    cin >> length >> width >> height;

    // check dim
    if(length && width && height) {
        double volume{};
        volume = length * width * height;
        cout << "The volume of your container is: " << volume << endl;

        if(volume <= cubic1) {
            price = baseCost;
        } else if(volume > cubic1 && volume <= cubic2) {
            price = baseCost * (surcharge1 + 1);
            cout << "The surcharge for more than " << cubic1 << " cubic inch\n";
            cout << "and less than " << cubic2 << " is: " << surcharge1 * 100 << " % " << endl;
        } else {
            price = baseCost * (surcharge2 + 1);
            cout << "The surcharge for more than " << cubic2 << " is: " << surcharge2 * 100 << " % " << endl;
        }

        cout << "The total price is: " << price << " $ " << endl;

    } else {
        cout << "Some dimenssions are missing, please try again" << endl;
    }

    return 0;
}

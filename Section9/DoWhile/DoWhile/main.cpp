#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char choice{};

    string report{};
    string do1 = "Do this";
    string do2 = "Do that";
    string do3 = "Do something else";
    string doQ = "Bye bye";

    do {
        cout << "1 : " << do1 << endl;
        cout << "2 : " << do2 << endl;
        cout << "3 : " << do3 << endl;
        cout << "Q : " << doQ << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == '1')
            report = do1;
        else if(choice == '2')
            report = do2;
        else if(choice == '3')
            report = do3;
        else if(choice == 'Q' || choice == 'q')
            report = doQ;
        else {
            cout << "Invalid Input" << endl;
            report = "Is not available";
        }

        cout << "You choiced: " << report << endl;

        cout << "=============================================" << endl;

    } while(choice != 'Q' && choice != 'q');

    return 0;
}

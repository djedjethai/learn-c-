#include <iostream>
#include <typeinfo>
#include <vector>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{

    char menu{};
    int newNumber{};

    vector<int> numbers{};

    do {
        cout << "P - Print number" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display means of number" << endl;
        cout << "S - Display samllest number" << endl;
        cout << "L - Display largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> menu;
        
        switch(menu) {
            case 'a':
            case 'A':
                cout << "Add a number: ";
                while(!(cin >> newNumber)) {
                    cout << "That''s not valid input. Try again :" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
                cout << "The number you added is: " << newNumber << '\n';
                numbers.push_back(newNumber);
                break;
                
            case 'p':
            case 'P':
                if(numbers.size() > 0) {
                    cout << "[ ";
                    for(auto num : numbers)
                        cout << num << " ";

                    cout << "]" << endl;
                } else
                    cout << "[]" << endl;
                break;

            case 'm':
            case 'M':
                if(numbers.size() > 1) {
                    double tot{};
                    for(auto num : numbers)
                        tot += num;
                    // we set the number of decimal using the <iomanip> module
                    cout << std::fixed << std::setprecision(1);
                    cout << "The mean is: " << static_cast<double>(tot) / numbers.size() << endl;
                } else
                    cout << "unable to calculate the mean - no data" << endl;
                break;
            
            case 's':
            case 'S':
                if(numbers.size() > 1) {
                    int ref{ numbers[0] };
                    for(auto num : numbers) {
                        if(num < ref) {
                            ref = num;
                        }
                    }
                    cout << "The minimum number is: " << ref << endl;
                } else
                    cout << "unable to detemine the smallest number" << endl;
                break;
                
            case 'l':
            case 'L':
                if(numbers.size() > 1) {
                    int ref{ numbers[0] };
                    for(auto num : numbers) {
                        if(num > ref) {
                            ref = num;
                        }
                    }
                    cout << "The maximum number is: " << ref << endl;
                } else
                    cout << "unable to detemine the largest number" << endl;
                break;
                
            default:
                cout << "Invalid character, please try again" << endl;
          
        }
        cout << "========================================" << endl;
        
    } while(menu != 'q' && menu != 'Q');

    return 0;
}

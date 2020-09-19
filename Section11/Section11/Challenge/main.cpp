#include <iostream>
#include <typeinfo>
#include <vector>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


void input();
void group(char chx);
void a(vector<int> &numbers);
void p(vector<int> &numbers);
void m(vector<int> &numbers);
void s(vector<int> &numbers);
void l(vector<int> &numbers);

int main()
{
    input();

    return 0;
}

void input() {
    char menu{};
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
        
        group(menu);
          
        cout << "========================================" << endl;
        
    } while(menu != 'q' && menu != 'Q');
}

void group(char menu) {
    
    static vector<int> numbers{};
    
    if (menu == 'a' || menu == 'A')
        a(numbers);
    else if (menu == 'p' || menu == 'P')
        p(numbers);
    else if (menu == 'm' || menu == 'M')
        m(numbers);
    else if (menu == 's' || menu == 'S')
        s(numbers);
    else if (menu == 'l' || menu == 'L')
        l(numbers);
    else
        cout << "Invalid character, please try again" << endl;
}

void a(vector<int> &numbers) {
    int newNumber{};
    cout << "Add a number: ";
    while(!(cin >> newNumber)) {
        cout << "That''s not valid input. Try again :" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << "The number you added is: " << newNumber << '\n';
    numbers.push_back(newNumber);
}

void p(vector<int> &numbers) {
    if(numbers.size() > 0) {
        cout << "[ ";
        for(auto num : numbers)
            cout << num << " ";

        cout << "]" << endl;
    } else
        cout << "[]" << endl;
}

void m(vector<int> &numbers) {
    if(numbers.size() > 1) {
        double tot{};
        for(auto num : numbers)
            tot += num;
        // we set the number of decimal using the <iomanip> module
        cout << std::fixed << std::setprecision(1);
        cout << "The mean is: " << static_cast<double>(tot) / numbers.size() << endl;
    } else
        cout << "unable to calculate the mean - no data" << endl;
}

void s(vector<int> &numbers) {
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
    
}

void l(vector<int> &numbers) {
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
}

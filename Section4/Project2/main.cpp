#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
    
    cout << "Enter 2 number between 0 and 100: ";
    int num1 {0};
    int num2 {0};
    cin >> num1 >> num2;
    cout << "la somme des nombre est: " << num1 + num2 << endl;
    return 0;
}
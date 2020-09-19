#include <iostream>
#include <cmath>
#include <typeinfo>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

// function prototypes are placed after using
// they declare the functions, then which can be place after the main() without any issue
// order of prototype function do not matter, and the type of the argument is enought
void showSurface();
double areaCircle (double ray);
double volumeCylinder (double, double);
void showVolume();

void showNames(vector<std::string>);

const double pi{3.14};

int main()
{
    showSurface();
    showVolume();
    
    vector<std::string> names{"pierre", "paul", "jack"};
    showNames(names);
    cout << "==================" << endl;
    for (auto n: names)
        cout << n << " - ";

	return 0;
}

double areaCircle (double ray) {
    return pi * pow(ray, 2.0);
}

double volumeCylinder (double area, double hgt) {
    return area * hgt;
}

void showSurface() {
    double rayon{};
    cout << "Please enter an integer or double as the rayon: ";
    cin >> rayon;
    cout << "The surface is: " << areaCircle(rayon) << endl;
}
    
void showVolume() {
    double rayon{};
    double hgt{};
    cout << "Please enter an integer or double as the rayon, and a hight :";
    cin >> rayon >> hgt;
    cout << " And the volume is: " << volumeCylinder(areaCircle(rayon), hgt) << endl;
}

void showNames(vector<std::string>v) {
    for (auto n: v) 
        cout << n + " modif - " << endl;
}

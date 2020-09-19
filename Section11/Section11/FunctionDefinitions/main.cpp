#include <iostream>
#include <cmath>
#include <typeinfo>

using std::cout;
using std::cin;
using std::endl;

const double pi{3.14};

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


int main()
{

    showSurface();
    showVolume();

	return 0;
}

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int surface(int, int L = 1);
double surface(double, double L = 1);

int main()
{
    double l{};
    double c{};
    double  L{};
	cout << "If you have a carre enter a number: ";
    cin >> l;
    cout << "The surface is: " << surface(l) << endl;
    cout << "If you have a rectangle, enter the width first then the length separate with a space: ";
    cin.ignore();
    cin >> c >> L;
    cout << "\nThe surface is: " << surface(c, L) << endl;
	return 0;
}

int surface(int l, int L) {
    if (L > 1) 
        return l*L;
    else if (L == 1)
        return pow(l, 2.0);
    else
        return 0;
}

double surface(double l, double L) {
    if (L > 1) 
        return l*L;
    else if (L == 1)
        return pow(l, 2.0);
    else
        return 0;
}

// correction
//int find_area(int);
//double find_area(double,double);
//
//
//void area_calc() {
//    
//    int square_area = find_area(2);
//    double rectangle_area = find_area(4.5,2.3);
//    
//    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
//}
//
//
//int find_area(int side_length) {
//    return pow(side_length,2); //return side_length*side_length will also work
//}
//
//double find_area(double length, double width) {
//    return length*width;
//}
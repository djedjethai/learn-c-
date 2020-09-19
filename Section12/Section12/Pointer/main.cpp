#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
//    int *p;
//    
//    cout << "The value of p is: " << p << endl;
//    
//    cout << "The address of p is: " << &p << endl;
//    
//    cout << "The size of p is: " << sizeof p << endl;
//    
//    p = nullptr;
//    
//    cout << "The value of p is: " << p << endl;


//    int score {23};
//    double doubleScore{67.4};
//    
//    int *p{nullptr};
//    double *p1{nullptr};
//    long long *p2{nullptr};
//    std::vector<std::string> *p3{nullptr};
//    
//    cout << "Value of score is: " << score << endl;
//    cout << "Adress of score is: " << &score << endl;
//    cout << "Size of score is: " << sizeof score << endl;
//    
//    cout << "Value of p is: " << p << endl;
//    cout << "Adress of p is: " << &p << endl;
//    cout << "Size of p is: " << sizeof p << endl;
//    
//    cout << "=========================" << endl;
//    p = &score;
//    cout << "Value of p is: " << p << endl;
//    cout << "Adress of p is: " << &p << endl;
//    cout << "Size of p is: " << sizeof p << endl;
//    cout << "===============" << endl;
//    cout << "===============" << endl;
//    
//    
//    cout << "Value of p1 is: " << p1 << endl;
//    cout << "Adress of p1 is: " << &p1 << endl;
//    cout << "Size of p1 is: " << sizeof p1 << endl;
//    cout << "===============" << endl;
//    cout << "Value of p2 is: " << p2 << endl;
//    cout << "Adress of p2 is: " << &p2 << endl;
//    cout << "Size of p2 is: " << sizeof p2 << endl;
//    cout << "===============" << endl;
//    cout << "Value of p3 is: " << p3 << endl;
//    cout << "Adress of p3 is: " << &p3 << endl;
//    cout << "Size of p3 is: " << sizeof p3 << endl;
//    cout << "===============" << endl;
//   

int score {23};
int *p{&score};

int scoreBig {1000};
int smallScore {7};


cout << "Address score: " << &score << endl;
cout << "Value score: " << score << endl;

cout << "================" << endl;
cout << "Value/reference p: " << p << endl;   
cout << "dereferencing p: " << *p << endl;

cout << "1================" << endl;
*p = 200;   
cout << "Value/reference p: " << &p << endl;   
cout << "dereferencing p: " << *p << endl;
cout << "Value/reference p: " << p << endl; 
cout << "Value score: " << score << endl;
cout << "Address score: " << &score << endl;

cout << "2================" << endl;
*p = scoreBig;  
cout << "Value/reference p: " << &p << endl;  
cout << "Value/reference p: " << p << endl;   
cout << "dereferencing p: " << *p << endl;
cout << "Value score: " << score << endl;
cout << "Address score: " << &score << endl;

cout << "3================" << endl;
scoreBig = 689;
p = &scoreBig;  
cout << "Value/reference p: " << &p << endl;  
cout << "Value/reference p: " << p << endl;   
cout << "dereferencing p: " << *p << endl;
cout << "Value score: " << score << endl;
cout << "Address score: " << &score << endl;



// don t work, can not reassigner le pointer
//cout << "================" << endl;
//*p = &smallScore;  
//cout << "Value/reference p: " << &p << endl;  
//cout << "Value/reference p: " << p << endl;   
//cout << "dereferencing p: " << *p << endl;
//cout << "Address smallScore: " << &smallScore << endl;
//cout << "Value score: " << score << endl;
//cout << "Address score: " << &score << endl;


	return 0;
}

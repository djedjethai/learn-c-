#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
//    int *varPtr{nullptr};
//    varPtr = new int{467};
//    cout << "The dereference value of varPtr is: " << *varPtr << endl;
//    cout << "The value(address) that contain of varPtr is: " << varPtr << endl;
//    delete varPtr;
//    cout << "The dereference value of varPtr after delete is: " << *varPtr << endl;
//    cout << "The value(address) that contain of varPtr is: " << varPtr << endl;

    double *tempPtr{nullptr};
    size_t size{0};
    
    cout << "How many temps do you want to register ? ";
    cin >> size;
    
   
    tempPtr = new double[size];
    
    cout << "The dereference value of tempPtr is: " << *tempPtr << endl;
    cout << "The value(address) that contain of tempPtr is: " << tempPtr << endl;
    
    
    // !!!! if we do: tempPtr = nullptr; the *tempPtr = 0, 
    // BUT we lose the heap's memory area allocated. we call it a leak memory
    // but with delete the pointer still point to heap area but this one is freezed.
    // at this time this pointer becomes impredictable, but there is no leak memory. That is expected
    delete [] tempPtr;
    
    cout << "================" << endl;
    cout << "The dereference value of tempPtr after delete is: " << *tempPtr << endl;
    cout << "The value(address) that contain of tempPtr after delete is: " << tempPtr << endl;
    
	return 0;
}

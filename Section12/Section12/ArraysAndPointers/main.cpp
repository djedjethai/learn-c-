#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int array[] {1,2,3,4,5};
    
    cout << "The address of the array is: " << array << endl;
    cout << "The value of the array is: " << *array << endl;
    
    cout << "====ADD ARRAY TO POINTER=====" << endl;
    int *arrayPtr {array};
    cout << "The address of the arrayPointer is: " << arrayPtr << endl;
    cout << "The value of the arrayPointer is: " << *arrayPtr << endl;
    
    cout << "====PARSE THE POINTER (SUBSCRIPT NOTATION)=====" << endl;
    cout << arrayPtr[1] << endl;
    cout << arrayPtr[2] << endl;
    cout << arrayPtr[3] << endl;
    
    cout << "====let display throught the pointer the location of each elmt of the array=====" << endl;
    // each array's int use 4 bites in memory, so there we go.
    cout << arrayPtr << endl; // 0x7ffeebf69a10
    cout << arrayPtr + 1 << endl; // 0x7ffeebf69a14
    cout << arrayPtr + 2 << endl; // 0x7ffeebf69a18
    cout << arrayPtr + 3 << endl; // 0x7ffeebf69a1c
    
    cout << "====PARSE THE POINTER USING DEREFERENCE (OFFSET NOTATION)=====" << endl;
    cout << *arrayPtr << endl;
    cout << *(arrayPtr + 1) << endl;
    cout << *(arrayPtr + 2) << endl;
    cout << *(arrayPtr + 3) << endl;
    
    cout << "====PARSE THE ARRAY USING DEREFERENCE (OFFSET NOTATION)=====" << endl;
    cout << *array << endl;
    cout << *(array + 1) << endl;
    cout << *(array + 2) << endl;
    cout << *(array + 3) << endl;
    
	return 0;
}

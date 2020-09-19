#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int *createArray(int size, int initVal);
void displayArr(const int *const arr, int size);

int main()
{
    int *myArr{nullptr};
    int size{100};
    int arrVal{20};
    
    myArr = createArray(size, arrVal);
    
    cout << myArr[50] << endl; // 20
    // cout << *myArr[50] << endl; // Error
    cout << *(myArr + 70) << endl; // 20
    cout << *myArr + 99 << endl; // 119 GARBAGE VALUE
    cout << *(myArr + 99) << endl; // 20
    cout << "==================" << endl;
    displayArr(myArr, size);
    
    // don t forget to delete a pointer on the heap (to liberate memory)
    delete []myArr;
    
	return 0;
}

// create dynamiquement an array on the heap
int *createArray(int size, int initVal) {

    int *newStorage{nullptr};
 
    newStorage = new int[size];
    for (size_t i{0}; i < size; i++) {
            *(newStorage + i) = initVal; 
    } 
    return newStorage;
}


void displayArr(const int *const arr,int size) {
    for (size_t i{0}; i < size; i++) {
        // cout << arr[i] << endl; // arr[i] == *(arr + i)
        cout << *(arr + i) << endl;
    }
}








#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int *setFinalHeapArr(const int *const arr1, int size1, const int *const arr2, int size2);    
void iterArrPtrHeap(const int *const arr, int size);

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {10, 20, 30};
    
    int size1 = *(&arr1 + 1) - arr1;
    int size2 = *(&arr2 + 1) - arr2;
    int *arrPtr{nullptr};
    arrPtr = setFinalHeapArr(arr1, size1, arr2, size2);
    
    int totSize = size1 * size2;
    iterArrPtrHeap(arrPtr, totSize);
    
    delete []arrPtr;
    
	return 0;
}



int *setFinalHeapArr(const int *const arr1, int size1, const int *const arr2, int size2) {
    
        int *heapPtr = new int[size1 * size2];
        int cont{0};   
        for (size_t i{0}; i < size2; i++) {
            for (size_t y{0}; y < size1; y++) {
                *(heapPtr + cont) = arr2[i] * arr1[y];
                cont++;
            }
        }
        return heapPtr;
}

void iterArrPtrHeap(const int *const arr, int size) {
    for (size_t i{0}; i < size; i++) 
        cout << *(arr + i) << endl;
        // arr[i] return exactly the same result
}








//int arr1[] = {1,2,3,4,5};
//    int arr2[] = {10, 20, 30};
//    
//    
//        int *setFinalHeapArr(int arr1, int arr2) {
//            
//            int size1 = *(&arr1 + 1) - arr1;
//            int size2 = *(&arr2 + 1) - arr2;
//            int sizeNewArr = size1 * size2;
//            
//            
//        }
//    
//    
//        
//        
//     
//        int *arrPtr{nullptr};
//        arrPtr =  createArrHeap(sizeNewArr);
//     
//        int cont{0};   
//        for (size_t i{0}; i < size2; i++) {
//            for (size_t y{0}; y < size1; y++) {
//                 *(arrPtr + cont) = arr2[i] * arr1[y];
//                 cont++;
//            }
//        }   
//    
//    
//    
//    
//    
//     for (size_t i{0}; i < 15; i++) {
//        cout << *(arrPtr + i) << endl;
//     }
//    
//     delete []arrPtr;
#include <iostream>
#include <vector>
#include <string>

using std::endl;
using std::cout;
using std::cin;


// creer un array of string on heap then parse
char *createArrChar(int size, char letter);
void parsechar(const char *const charPtr, int size);

std::vector<std::string> *setPtr(std::vector<std::string> vec);
void parsePtr(const std::vector<std::string> *const vec);
void *modifyPtr(std::vector<std::string> *ptr);

std::string *setHeapPtrStr(std::string str);
void renderHeapPtrStr(const std::string *const heapStr);

std::vector<std::string> *setHeapPtrVecStr(std::vector<std::string> vecStr);
void renderHeapPtrVecStr(const std::vector<std::string> *const heapVecStr);

int main()
{
//    int num{500};
//    char let{'S'};
//    char *newCharPtr{nullptr};
//    
//	newCharPtr = createArrChar(num, let);
//    parsechar(newCharPtr, num);
//    cout << "=======================" << endl;
//    cout << *(newCharPtr + 498) << endl;
//    cout << newCharPtr[499] << endl;
//    
//    delete []newCharPtr;

    // create string arr
//    std::vector<std::string> base{"pauk", "pierre", "jack"};
//    std::vector<std::string> *newBase{nullptr};
//    newBase = setPtr(base);
//    parsePtr(newBase);
//    modifyPtr(newBase);
//    cout << "==========================" << endl;
//    parsePtr(newBase);
    
    // create a pointer on the heap
//    cout << "=======From the heap (string)==========" << endl;
//    std::string name{"jerome"};
//    std::string *newHeapStr{nullptr};
//    newHeapStr = setHeapPtrStr(name);
//    renderHeapPtrStr(newHeapStr);
//    delete newHeapStr;   
    
    cout << "=======From the heap (vector<string>)==========" << endl;
    
    std::vector<std::string> vecStrTry{"pauk", "pierre", "jack"};
    std::vector<std::string> *newHeapVecStrTry{nullptr};
    newHeapVecStrTry = setHeapPtrVecStr(vecStrTry);
    renderHeapPtrVecStr(newHeapVecStrTry);
    delete newHeapVecStrTry;
    
	return 0;
}

char *createArrChar(int size, char letter) {
    char *charPtr{nullptr};
    charPtr = new char[size];
    
    for (size_t i{0}; i < size; i++) {
        *(charPtr + i) = letter;
    }
    return charPtr;
}

void parsechar(const char *const charPtr, int size) {
    for (size_t i{0}; i < size; i++) {
        cout << charPtr[i] << " ";
    }
}

std::vector<std::string> *setPtr(std::vector<std::string> vec) {
        std::vector<std::string> *vecStr{nullptr};
        vecStr = &vec;
        return vecStr;
}

void parsePtr(const std::vector<std::string> *const vec) {
        for (size_t i{0}; i < 3; i++)
            cout << (*vec)[i] << endl;
}

void *modifyPtr(std::vector<std::string> *ptr) {
    for (size_t i{0}; i < 3; i++)
         (*ptr)[i] += " modified";
}

std::string *setHeapPtrStr(std::string str) {
        std::string *heapStr{nullptr};
        heapStr = new std::string;
        *heapStr = str;
        return heapStr;
}

void renderHeapPtrStr(const std::string *const heapStr) {
        cout << heapStr << endl; // 45Nh87.....
        cout << *heapStr << endl; // jerome
        cout << (*heapStr)[1] << endl; // e
        cout << (*heapStr)[2] << endl; // r
        cout << (*heapStr)[3] << endl; // o
}

std::vector<std::string> *setHeapPtrVecStr(std::vector<std::string> vecStr) {
        std::vector<std::string> *heapVecStr{nullptr};
        heapVecStr = new std::vector<std::string>;
        *heapVecStr = vecStr;
        return heapVecStr;
}

void renderHeapPtrVecStr(const std::vector<std::string> *const heapVecStr) {
        for (size_t i{0}; i < 3; i++) 
            cout << (*heapVecStr)[i] << endl;
}

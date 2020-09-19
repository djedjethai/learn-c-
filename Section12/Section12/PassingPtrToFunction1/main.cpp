#include <iostream>
#include <string>
#include <vector>


using std::cout;
using std::cin;
using std::endl;

void doubleData(int *ptr);
void swap(char *a, char *b);
// the vector is const, and the pointer is const as well. so both of them can't be modify
void parse(const std::vector<std::string> *const s);
void modifyAndParse(std::vector<std::string> *s);
void parseScores(int *array, int sentinel);

int main()
{
//    int num{10};
//    
//    doubleData(&num);
//    cout << num << endl;
//    
//    int *numPtr{&num};
//    doubleData(numPtr);
//    cout << num << endl;

//    char a{'a'};
//    char b{'b'};
//    swap(&a, &b);
//    cout << "value de a: " << a << endl;
//	cout << "value de b: " << b << endl;

//    std::vector<std::string> s{"htis is a string", "second string", "third string"};
//    parse(&s);
//    modifyAndParse(&s);
    int po{13};
    cout << po << endl; // 13
    cout << &po << endl; // 0x7ffeec905998
    cout << "====================" << endl;
    
    std::vector<std::string> v{"paul", "pierre", "jack"};
    cout << v[0] << endl; // paul
    cout << &v << endl; // 0x7ffeec905980
    cout << "====================" << endl;
    
    int scores[] {1, 23, 45, 21, 2, 34, -1};
    cout << scores << endl; // 0x7ffeec9059a0
    cout << *scores << endl; // 1
    cout << "====================" << endl;
//    cout << sizeof(scores) << endl; // 28 bytes (4 bytes/int)
//    cout << sizeof(*scores) << endl; // size of 1 byte
//    int length = sizeof(scores) / sizeof(*scores);
//    
//    parseScores(scores, length);

	return 0;
}

void parseScores(int *array, int sentinel) {
    cout << "==================" << endl;
//    cout << array << endl; // x0khgkhg4..
//    cout << *array << endl; // 1
//    cout << *array[6] << endl; // error
//    cout << array[6] << endl; // -1
    cout << array[sentinel - 1] << endl; // -1
    int stl = array[sentinel - 1];
    cout << "==================" << endl;
    
    while (*array != stl) {
        cout << *array << endl;
        *array++;
    }
}


// in all this following functions, the parameter *x signifie que l'on passe un pointer as parameter
// so for all arguments (except arrays) we must pass their address as parameter (as a pointer is only assign to addresses)
void doubleData(int *ptr) {
    *ptr *= 2 ;
}

void swap(char *a, char *b) {
    char s = *a;
    *a = *b;
    *b = s;
}

void parse(const std::vector<std::string> *const s) {
    for (auto p: *s)
        cout << p << endl;
}

void modifyAndParse(std::vector<std::string> *s) {
    // attention au parenthese......
    (*s)[0]= "Harry";
    (*s)[1] = "Jack";
    for (auto p: *s)
        cout << p << endl;
}



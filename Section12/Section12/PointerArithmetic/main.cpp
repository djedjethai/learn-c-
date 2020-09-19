#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
//	std::string str1{"Pierre"};
//    std::string str2{"Pierre"};
//    
//    cout << str1 << endl; // Pierre
//    cout << &str1 << endl; // 0x7ffee425da10
//    
//    std::string *strPtr1{&str1};
//    std::string *strPtr2{&str2};
//    
//    if (*strPtr1 == str1)
//        cout << *strPtr1 << endl; // Pierre
//    
//    // we compare the memory's address of the pointer
//    if (strPtr1 == strPtr2)
//        cout << "strPtr1 == strPtr2" << endl;
//    // we compare the memory's address of the pointer    
//    if (strPtr1 != strPtr2)
//        cout << "strPtr1 != strPtr2" << endl; // print here

//    int array[]{3, 6, 2, 35, 12, 56, -1};
//    
//    int *arrayPtr{array};
//    
//    while (*arrayPtr != -1) {
//        cout << *arrayPtr << endl;
//        arrayPtr++;
//    }
//    
//    cout << "========" << endl;
//    // this code is exactly the same as precedent
//    // !!! IF HAVE TO RESET THE VALUE OF THE POINTER TO THE FIRST ELMT OF THE ARRAY 
//    // (as it s on the last, because of the precedente loop....)
//    arrayPtr = array;
//    while (*arrayPtr != -1) 
//        cout << *arrayPtr++ << endl;
//     

    
    
//    char *namePtr1{nullptr};
//    char *namePtr2{nullptr};
    
    char name[] {"Franck"};
    cout << name << endl; // Franck // err, should be 0x7ffee9f4ea25 ???
    cout << name[0] << endl; // F
    cout << *name << endl; // F
    cout << &name << endl; // 0x7ffee9f4ea25
    cout << &name[0] << endl; // Franck // err, should be 0x7ffee9f4ea25 ???
    cout << &name[2] << endl; // anck // err, should be 0x7ffee9f4ea27 ???
    // cout << &name[2] - &name[0] << endl; // 2 
    // cout << name[2] - name[0] << endl; // 27 
    
//    namePtr1 = &name[0];
//    namePtr2 = &name[3];
//    
////    cout << namePtr1[0] << endl; // F
////    cout << namePtr1[3] << endl; // n
//    cout << namePtr1 << endl; // F
//    cout << namePtr2 << endl; // n
//    cout << (namePtr1 - namePtr2) << endl; // -3
//    cout << (&name[3] - &name[0]) << endl; // 3
//    cout << (&name[3] - name) << endl; // 3
//     cout << *namePtr1[0] << endl; // error
//     cout << *namePtr1[3] << endl; // error
    
//    namePtr1 = name; // same as &name[0]
//    namePtr2 = &name[3];


 cout << "=================" << endl;

    int numbers[] {2, 5, 8};
    cout << numbers << endl; // 0x7ffee8987a1c
    cout << numbers[0] << endl; // 2
    cout << *numbers << endl; // 2
    cout << &numbers << endl; // 0x7ffeed8f9a1c
    cout << &numbers[1] << endl; // 0x7ffeed6c9a20
    cout << &numbers[2] << endl; // 0x7ffeed6c9a24
   
//    
//    char name[] {"Franck"};
//    cout << name << endl; // Franck // pb d'affichage, c bien l'adress '0xhjgkjh.." qui est presente
//    cout << *name << endl; // F
//    cout << &name << endl; // 0x7ffee9f4ea25
//    cout << &name[1] << endl; // ranck // pb d'affichage, c bien l'adress '0xhjgkjh.." qui est presente

//cout << "=================" << endl;
//    
//// here as it s an object, it s like a variable
//// with pointer comportement of variable/object are similar 
//    std::string str1{"Pierre"};
//    cout << str1 << endl; // Pierre
//    // cout << *str1 << endl; // error
//    cout << &str1 << endl; // 0x7ffee425da10
//    cout << &str1[1] << endl; // ierre // pb d'affichage, c bien l'adress '0xhjgkjh.." qui est presente
//    cout << str1[1] << endl; // i 
//    cout << (&str1[3] - &str1[1]) << endl; // 2 
//    cout << (&str1[3] - &str1[0]) << endl; // 3
//    // cout << (&str1[3] - &str1) << endl; // err, pas possible
//    // cout << (&str1[3] - str1) << endl; // par contre ici error.... as it s not an array.
//    int r{str1[3]};
//    int i{str1[1]};
//    int p{str1[0]};
//    cout << r << endl; // r = 114
//    cout << i << endl; // i = 105
//    cout << p << endl; // p = 80
//    cout << (str1[3] - str1[1]) << endl; // 9 // soustrait les valeur int matching the char
//    cout << (str1[3] - str1[0]) << endl; // 34 // soustrait les valeur int matching the char
//    
//    
//    // lets try throught the pointer
//    
//    std::string *p1{&str1};
//    // std::string *p2{&str1[3]}; // error
//    // cout << (&str1[3] - p1) << endl; // error 
    
  
  
	return 0;
}

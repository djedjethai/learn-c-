#include <iostream>
#include <vector>
#include <string>
#include <cstring> 
#include <array>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::array;

// // cont int arr[] prevent any modification of the array
//void printArray(const int arr[], size_t lgt); 
//void setArray(int arr[], size_t lgt, int nVal);
//
//int main()
//{
//	int myScores[] {99, 98, 90, 86, 84};
//    
//    printArray(myScores, 5);
//    setArray(myScores, 5, 100);
//    printArray(myScores, 5);
//    
//	return 0;
//}
//
// // cont int arr[] prevent any modification of the array
//void printArray(const int arr[], size_t lgt) {
//    for (size_t i{0}; i < lgt; i++)
//        cout << arr[i] << " - " << endl;
//}
//
//void setArray(int arr[], size_t lgt, int nVal) {
//    for (size_t i{0}; i < lgt; i++) {
//        arr[i] = nVal;
//    }
//}       


// exercice
//void printGuessList(std::vector<std::string> list);
//void clearGuessList(std::vector<std::string> list);
//
//int main()
//{
//    std::vector<std::string> nameList{"Harry", "Pierre", "Paul", "Jack"};
//    printGuessList(nameList);
//    clearGuessList(nameList);
//    printGuessList(nameList);
//	return 0;
//}
//
//void printGuessList(std::vector<std::string> list) {
//    for (auto n: list)
//        cout << n << endl;
//}
//
//void clearGuessList(std::vector<std::string> list) {
//    for (size_t i{0}; i < list.size(); i++ ) {
//        list[i] = " ";
//        cout << list[i] << " - " << endl;
//       
//
//        for (size_t y{}; y < list[i].length(); y++) {
//            list[i][y] = " ";
//            cout << list[i][y] << endl;
//        }
//    }
//    for (size_t i{0}; i < list.size(); i++ ) {
//        list[i].erase(list[i].begin(), list[i].end());
//        cout << list[i] << " - " << endl;
//    }
//}
//
//        Harry
//        Pierre
//        Paul
//        Jack
//          - 
//          - 
//          - 
//          - 
//        Harry
//        Pierre
//        Paul
//        Jack


// 2nd exemple
//int main()
//{
//    array <array<char, 5>, 4> nameList  = {{{"Harr"}, {"Pier"}, {"Paul"}, {"Jack"}}};
//    for (size_t i{0}; i < 4; i++ ) {
//        for (size_t y{0}; y < 4; y++ ) {
//            // nameList[i][y] = " ";  
//            cout << nameList[i][y] ;
//        }
//    }
//	return 0;
//}
// return err     
// error: invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'std::__1::array<std::__1::array<char, 5>, 4>::value_type' (aka 'std::__1::array<char, 5>'))

// 3rd exemple copy du prof
string printGuessList(string[], size_t);
void clearGuessList(string[], size_t);

int main()
{
   string nameList[] = {"pierre", "paul", "jack"};
   size_t lgt {3};
   printGuessList(nameList, lgt);
   //clearGuessList(nameList, lgt);
   printGuessList(nameList, lgt);
    return 0;
}

string printGuessList(string list[], size_t lgt) {
    for (size_t i{0}; i < lgt; i++ ) 
       cout << list[i] << endl;

    return typeid(list).name();
}

void clearGuessList(string list[], size_t lgt) {
    for (size_t i{0}; i < 5; i++ ) 
        list[i] = " ";
}


// correction prof
//string print_guest_list(const string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
//void clear_guest_list(string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
//
////----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
////----DO NOT MODIFY THE CODE BELOW THIS LINE----
//
//int main()
//{
//    string guest_list[] {"Larry", "Moe", "Curly"};
//    size_t guest_list_size {3};
//
//    
//    print_guest_list(guest_list, guest_list_size);
//    // clear_guest_list(guest_list, guest_list_size);
//    print_guest_list(guest_list, guest_list_size);
//    return 0;
//}
//
//string print_guest_list(const string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST                                                                                WITHIN THE PARENTHESES
//    
//    for (size_t i{0}; i < guest_list_size; i++)
//        cout << guest_list[i] << endl;
//    
//    return typeid(guest_list).name();
//}
//
//
//void clear_guest_list(string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN                                                                         THE PARENTHESES
// 
//    for (size_t i{0}; i < guest_list_size; i++)
//        guest_list[i] = " ";
//}


// error: invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'std::__1::array<std::__1::array<char, 5>, 4>::value_type' (aka 'std::__1::array<char, 5>'))
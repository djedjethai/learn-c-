#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

//void transform(int[]);
//
//int main()
//{
//	int data[]{1, 2, 4, 5, 7, 8};
//    
//    for (size_t i{0}; i < 6; i++) {
//         data[i] = 0;
//          cout << data[i] << endl;
//    }
//       
//    for (auto v: data)
//        cout << v << endl;
//        
//    transform(data);
//    
//    for (auto v: data)
//        cout << v << endl;
//    
//	return 0;
//}
//
//void transform(int v[]) {
//    //cout << v.size();
//    for (size_t i{0}; i < 6; i++) {
//         v[i] = 9;
//    }
//}

void printGuessList(const std::vector<std::string> &list);
void clearGuessList(std::vector<std::string> &list);

int main()
{
    std::vector<std::string> nameList{"Harry", "Pierre", "Paul", "Jack"};
    printGuessList(nameList);
    clearGuessList(nameList);
    printGuessList(nameList);
	return 0;
}

void printGuessList(const std::vector<std::string> &list) {
    for (auto n: list)
        cout << n << endl;
}

void clearGuessList(std::vector<std::string> &list) {
    
    for (size_t i{0}; i < list.size(); i++ ) {
        list[i].erase(list[i].begin(), list[i].end());
        cout << list[i] << " - " << endl;
    }
}

//Harry
//Pierre
//Paul
//Jack
// - 
// - 
// - 
// - 
 
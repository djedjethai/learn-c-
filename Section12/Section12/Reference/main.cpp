#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main()
{
//	vector<string> vecStr{"simon", "larry", "sophie"};
//    for (auto p: vecStr)
//        p += " beuu";
//    
//    for (auto p: vecStr)
//        cout << p ; // affich simonlarrysophie

vector<string> vecStr{"simon", "larry", "sophie"};
    for (auto &p: vecStr)
        p += " beuu";
    
    for (auto p: vecStr)
        cout << p ; // affich simon beuularry beuusophie beuu
	return 0;
}

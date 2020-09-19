#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string input{};
    cout << "please enter a text without any spaces: ";
    getline(cin, input);
    
    string show{};
    for (size_t i{0}; i < input.length(); i++) {
        show.push_back(input[i]);
        for (auto s: show)
            cout << s;
            
        size_t showLen{show.length()};
        for (size_t y{1}; y < showLen; y++) {
            size_t diff{showLen - (y + 1)};
            cout << show[diff];
        }
        
        cout << endl;
    }
    
	return 0;
}

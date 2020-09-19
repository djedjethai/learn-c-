#include <iostream>
#include <string>
#include <locale>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// function to avoid code repetition
// had no idea about c++ function, google helped me (but i know functions)
string codeString (string txt, string alp, string rdmStr) 
{
    string stringMatch{};
    for (int i{0}; i < txt.length(); i++) {
        size_t indexAlpha{};
        char c{};
        c = txt[i];
        if (alp.find(c) != string::npos) {
            indexAlpha = alp.find(c);
            stringMatch += rdmStr.at(indexAlpha);
        } else 
            stringMatch += c;
    }
    return stringMatch;
}
    
int main()
{
    // start just with that (lazy to write)
	string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    
    // set the full alphabet && numbers
    size_t num{alphabet.length()};
    std::locale loc;
    for (size_t i{0}; i < num; i++)
        alphabet += std::tolower(alphabet[i], loc);
    for (size_t i{0}; i <= 9; i++)
        alphabet += std::to_string(i);
    alphabet += " ";
   
    // set a new string which will be the comparaison code
    string randomString{};
    size_t right {alphabet.length()};
    if ( right % 2 != 0 ) 
        alphabet += "?";
    for (int i = 0; i < (alphabet.length() / 2); ++i) {
        randomString += alphabet[i];
        randomString += alphabet[right];
        right--;
    }
    randomString.resize (randomString.size() - 1);
    
    // client input
    string text{};
    // cin.ignore();
    cout << "Enter your text: ";
    getline(cin, text);   
    
    string stringMatch{};
    stringMatch = codeString(text, alphabet, randomString);
    cout << "The coded string is: ";
    for (auto k: stringMatch)
        cout << k;
    cout << endl;
    cout << "========================" << endl;
    
    // return original string
    string textBack{};
    textBack = codeString(stringMatch, randomString, alphabet);
    cout << "The original string is: ";
    for (auto k: textBack)
        cout << k;
    cout << endl;
    
	return 0;
}

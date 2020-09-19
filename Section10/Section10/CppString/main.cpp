#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s0{};
    string s1{"Apple"};
    string s2{"Kiwi"};
    
//    cout << std::boolalpha;
//    cout << (s0 > s1) << endl;
//    cout << (s1 > s2) << endl;
//    cout << (s0 == s1) << endl;
//    cout << (s0.length() < s1.length()) << endl;
//    
//    s1[0] = 'C';
//    cout << s1 << endl;
//    s1.at(2) = 'u';
//    cout << s1 << endl;
    
//    string phr1 {"i am"};
//    string phr2 {"cool"};
//    cout << phr1 + " " + phr2 << endl;
    
    string phr3 {"i want"};
    // want to concat 
    // cout << phr3 + "a fresh" + " drink"; // return an err, can not concat 2 string2 litterals
    // so i need to concat them on the the c string litteral function
    char phr4[14] {};
    // strcpy(phr4, phr3);
    strcat(phr4, "a fresh");
    strcat(phr4, " drink");
    
    string phr5 {};
    phr5 = phr3 + " " + phr4;
    cout << phr5 << endl;
    
    // as i is a positive int, using size_t is the best
//    for (size_t i{0}; i < phr5.length(); i++) 
//        cout << phr5.at(i) << endl;
        
//    cout << phr5.substr(0, 6) << endl; // i want
//    cout << phr5.substr(6, 8) << endl; //  a fresh
//    cout << phr5.substr(14, 6) << endl; //  drink
//    phr5.erase(4, 5) // works the same way

//    cout << " Enter your name: ";
//    string name{};
//    cout << "Enter your name: ";
//    getline(cin, name); // si pas de getline(), la saisie s'arrete des le premier white space
//    cout << "Your name is: " << name << endl; 
      
    string sentence{};
    cout << "Enter your sentence: ";
    getline(cin, sentence);
    
    string word{};
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = sentence.find(word);
    if (position != string::npos)
        cout << "The word is at the position: " << position << endl;
    else
        cout << "Your word is not in the sentence" << endl;
        
    
}

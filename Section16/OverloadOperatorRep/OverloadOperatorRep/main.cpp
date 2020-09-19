#include <iostream>
#include <cstring>

#include "Mystring.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << std::boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};

    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false
    
    b = "george";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
    
    Mystring s1{"jerome"};
    
    s1 = s1 + "*****";
    cout << s1 << endl;               // frank*****       
    
    s1 += "-----";                        // frank*****-----
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;              // 123451234512345
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring s = "Frank";
    ++s;
    cout << s << endl;                  // FRANK
    
    Mystring result;
    result = ++s;                           
    cout << s << endl;                  // FRANK
    cout << result << endl;           // FRANK

// "=========================== NON =============================="
    
//    s = "Frank";
//    s++;
//    cout << s << endl;                  // FRANK
//    
//  
//    result = s++;
//    cout << s << endl;                  // FRANK
//    cout << result << endl;  

// "=========================== NON Member function ========================="
 
// cout << std::boolalpha << endl;
//    Mystring a {"frank"};
//    Mystring b {"frank"};
//    cout << (a==b) << endl;         // true
//    cout << (a!=b) << endl;          // false
//    
//    b = "george";
//    cout << (a==b) << endl;         // false
//    cout << (a!=b) << endl;          // true
//     cout << (a<b) << endl;         // true
// //   cout << (a>b) << endl;          // false
//    
//    Mystring s1 {"FRANK"};
//    s1 = -s1;       
//    cout << s1 << endl;             // frank              
//
//    s1 = s1 + "*****";
//    cout << s1 << endl;             // frank*****       
//    
//    s1 += "-----";                      // frank*****-----
//    cout << s1 << endl;
//    
//    Mystring s2{"12345"};
//    s1 = s2 * 3;
//    cout << s1 << endl;           // 123451234512345
//    
//    Mystring s3{"abcdef"};  
//    s3 *= 5;
//    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
//    
//    Mystring repeat_string;
//    int repeat_times;
//    cout << "Enter a string to repeat: " << endl;
//    cin >> repeat_string;
//    cout << "How many times would you like it repeated? " << endl;
//    cin >> repeat_times;
//    repeat_string *= repeat_times;
//    cout << "The resulting string is: " << repeat_string << endl;
//    
//    cout << (repeat_string * 12) << endl;
//    
//    repeat_string = "RepeatMe";
//    cout << (repeat_string + repeat_string + repeat_string) << endl;
//    
//   Mystring s = "Frank";
////    ++s;
////    cout << s << endl;                  // FRANK
//    
//    s = -s; 
//    cout << s << endl;                  // frank
//    Mystring result;
// //   result = ++s;                           
// //   cout << s << endl;                  // FRANK
//    cout << result << endl;           // FRANK
//    
//    s = "Frank";
////    s++;
////    cout << s << endl;                  // FRANK
//    
//    s = -s;
//    cout << s << endl;                  // frank
////    result = s++;
////    cout << s << endl;                  // FRANK
//    cout << result << endl;           // frank
    return 0;
}

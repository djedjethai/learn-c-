#include <iostream>
#include <cstring> // for c-style string function
#include <cctype> // for character based function

using std::cout;
using std::cin;
using std::endl;


int main()
{
//	char first_name[20] {};
//    char last_name[20] {};
//    char full_name[50] {};
//    char temp[50] {};
    
//    cout << "Enter your first name: ";
//    cin >> first_name;
//    
//    cout << "Enter your family name: ";
//    cin >> last_name;
//    
//    cout << "Yout first name is " << first_name << ", and have " << strlen(first_name) << " characters." << endl;
//    cout << "Yout last name is " << last_name << ", and have " << strlen(last_name) << " characters." << endl;
//    
//    strcpy(full_name, first_name); // copy first_name into full_name
//    strcat(full_name, " "); // concat with empty
//    strcat(full_name, last_name);
//    
//    cout << "The full name is: " << full_name << endl;


//    cout << "what is your full name ? ";
//     // we have to use this function if we want the white space not to be concidere as the end of the string
//    cin.getline(full_name, 50);
//    strcpy(temp, full_name);
//    for (size_t i{0}; i < strlen(full_name); i++) {
//        if(isalpha(full_name[i]))
//            full_name[i] = toupper(full_name[i]);
//    }
//    
//    if(strcmp(temp, full_name) == 0) 
//        cout << temp << " is same " << full_name << endl;
//    else
//        cout << temp << " is different with " << full_name << endl;
//        
//    cout << "-------------------------------------" << endl;
//    
//    cout << "The result of comparing " << temp << " with " << full_name << " is : " << strcmp(temp, full_name) << endl;
//    cout << "The result of comparing " << full_name << " with " << temp << " is : " << strcmp(full_name, temp) << endl;
//        
//    cout << "Your full name is: " << full_name << endl;

// assignment
        
        char first_name[7] {"Bjarne"}; // 6 char + 1 char vide de fin de string
        char last_name[11] {"Stroustrup"};
        char whole_name[18] {};
        
        int first_name_length{};
        first_name_length = strlen(first_name);
        int last_name_length{};
        last_name_length = strlen(last_name);
        
        strcpy(whole_name, first_name);
        strcat(whole_name, " ");
        strcat(whole_name, last_name);
        
        int whole_name_length{};
        whole_name_length = strlen(whole_name);
        
        cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
    
	return 0;
}

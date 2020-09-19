//#include <iostream>
//
//using std::endl;
//using std::cin;
//using std::cout;
//
//void printGrosseryList(int mango = 13, int apples = 3, int oranges = 7);
//void modifyGrosseryList(int mango = 0, int apples = 0, int oranges = 0);
//
//int main()
//{
//	// modifyGrosseryList(100, 2);
//    printGrosseryList(100, 0, 2);
//	return 0;
//}
//
//void printGrosseryList(int mango, int apples, int oranges) {
//    cout << "Mango: "<< mango << " - Apples: " << apples << " - Oranges: " << oranges << endl;
//}
//
//void modifyGrosseryList(int mango, int apples, int oranges) {
//    if (mango && !apples && !oranges)
//        printGrosseryList(mango);
//    else if (!mango && apples && !oranges)
//        printGrosseryList(0, apples);
//    else if (!mango && !apples && oranges)
//        printGrosseryList(0,0, oranges);
//    else if (mango && apples && !oranges)
//        printGrosseryList(mango, apples);
//    else if (mango && !apples && oranges)
//        printGrosseryList(mango, 0, oranges);
//    else if (!mango && apples && oranges)
//        printGrosseryList(0, apples, oranges);
//    else if (mango && apples && oranges)
//        printGrosseryList(mango, apples, oranges);
//    else
//        printGrosseryList();
//}

#include <iostream>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPE BELOW THIS LINE----

void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);

//----WRITE YOUR FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void modify_grocery_list() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    print_grocery_list();
    print_grocery_list(5);
    print_grocery_list(7, 11);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

void print_grocery_list(int apples, int oranges, int mangos) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE                                                                     PARENTHESES
                                                               //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}


// out of topic, just for training
std::vector<string> myVectorStringTest{"alice", "paul", "jaque"};
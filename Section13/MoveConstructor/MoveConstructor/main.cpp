#include <iostream>
#include "Move.h"
#include <vector>

using std::cout;
using std::cin;
using std::endl;

void displayData(Move d);

int main()
{
    // in these case move the object, no deep copy
	std::vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
     
    // in these case deep copy, no move.
    Move num{10};
    displayData(num);
    
    
	return 0;
}

void displayData(Move d) {
    cout << d.getData() << endl;
}

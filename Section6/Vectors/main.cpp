#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
//	vector <char> vowels; // empty
//    vector <char> vowels (5); // 5 initialized to 0
//    vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // 
//    
//    cout << vowels.at(0) << endl;
//    cout << vowels.at(4) << endl;
    
//    vector <int> testScore (3, 100); // 3 elements all initialized to 100
//    vector <int> testScore {23, 36, 67}; // 3 elements initialized at specifique values
//    cout << testScore[0] << endl;
//    cout << testScore[1] << endl;
//    cout << testScore[2] << endl;
//    cout << "Check size of the testScore vector: " << testScore.size() << endl;

//    vector testEmptyArr {5, 3, 4, 8, 47};
//    cout << testEmptyArr[0] << endl;
//    cout << testEmptyArr[1] << endl;
//    cout << testEmptyArr[2] << endl;
//    cout << testEmptyArr[3] << endl;
//    cout << testEmptyArr[4] << endl;
//    
//    cout << testEmptyArr[0] << " ; " << testEmptyArr[1] << " ; " << testEmptyArr[2] << " ; " << testEmptyArr[3] << " ; " << testEmptyArr[4] << endl;
//    
//    cout <<  "Enter a value1: ";
//    cin >> testEmptyArr[0];
//    cout <<  "Enter a value2: ";
//    cin >> testEmptyArr[1];
//    cout <<  "Enter a value3: ";
//    cin >> testEmptyArr[2];
//    cout <<  "Enter a value4: ";
//    cin >> testEmptyArr[3];
//    cout <<  "Enter a value5: ";
//    cin >> testEmptyArr[4];
//    
//    cout << testEmptyArr[0] << " ; " << testEmptyArr[1] << " ; " << testEmptyArr[2] << " ; " << testEmptyArr[3] << " ; " << testEmptyArr[4] << endl;
//
//    int valueToAdd {0};
//    cout << "Select a value to add to the vector: ";
//    cin >> valueToAdd;
//    testEmptyArr.push_back(valueToAdd);
//    cout << "The new and last value of the vector is: " << testEmptyArr[5] << endl;
//    cout << "Create an err: " << testEmptyArr[8] << endl; // no err, return 0
        
//    vector <vector <int>> moviesRating 
//    {
//        {1, 4, 5, 6},
//        {3, 1, 4, 8},
//        {6, 7, 3, 10}
//    };
//    
//    cout << "Here is the rate for the first movie: \n";
//    cout << moviesRating[0][0] << endl;
//    cout << moviesRating[0][1] << endl;
//    cout << moviesRating[0][2] << endl;
//    cout << moviesRating[0][3] << endl;
//        
//    cout << "Here is the rate for the second movie: \n";
//    cout << moviesRating.at(1).at(0) << endl;
//    cout << moviesRating.at(1).at(1) << endl;
//    cout << moviesRating.at(1).at(2) << endl;
//    cout << moviesRating.at(1).at(3) << endl;
//    cout << endl;

// assignment
//
    vector <int> vector1 {};
    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl;
    cout << endl;

    vector <int> vector2 {};
    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;
    
    vector <int> vector3 {};
    vector3.push_back(1000);
    vector3.push_back(2000);
    cout << vector3.at(0) << endl;
    cout << vector3.at(1) << endl;
    cout << vector3.size() << endl;
    
    vector <vector<int>> vector_2D;
    vector_2D.push_back(vector1);
    vector_2D[0].push_back(vector2);
    
    // vector <vector<int>> vector_2D;
//    vector <vector<int>> vector_2D;
//    vector_2D.push_back(vector1);
//    vector_2D.push_back(vector2);
//    vector_2D.push_back(vector3);
//    
//    
//    cout << "vector_2D\n";
//    cout << vector_2D.at(0).at(0) << endl;
//    cout << vector_2D.at(0).at(1) << endl;
//    cout << vector_2D.at(1).at(0) << endl;
//    cout << vector_2D.at(1).at(1) << endl;
//    cout << vector_2D.at(2).at(0) << endl;
//    cout << vector_2D.at(2).at(1) << endl;
    
//    vector1[0] = 1001;
//    cout << "vector_2D after change vector1\n";
//    cout << vector_2D.at(0).at(0) << endl;
//    cout << vector_2D.at(0).at(1) << endl;
//    cout << vector_2D.at(1).at(0) << endl;
//    cout << vector_2D.at(1).at(1) << endl;
//    
//    cout << "Elements in vector1\n";
//    cout << vector1.at(0) << endl;
//    cout << vector1.at(1) << endl;
    
	return 0;
}

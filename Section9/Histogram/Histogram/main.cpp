#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    //	int nbrData{};
    //    cout << "How many data do you have: ";
    //    cin >> nbrData;
    //
    //    int data{};
    //    vector<int> dataVec{};
    //    for (int i{}; i <= nbrData; i++) {
    //        cout << "Enter your data: ";
    //        cin >> data;
    //        dataVec.push_back(data);
    //    }
    //
    //    cout << "Your datas are: " << endl;
    //    for (auto dat : dataVec) {
    //        // cout << dat << endl;
    //        for (int i{}; i <= dat; i++) {
    //            if (i % 5 == 0)
    //                cout << "*";
    //            else
    //                cout << "-";
    //        }
    //        cout << endl;
    //    }

    vector<int> vec{ 1, 3, 5 };
    int result{};
    int curs{ 0 };

    for(int i{ 0 }; i < (vec.size() - 1); ++i) {
        for(int j = (i + 1); j < vec.size(); j++) {
            result += vec[i] * vec[j];
        }
    }

    cout << result;

    return 0;
}

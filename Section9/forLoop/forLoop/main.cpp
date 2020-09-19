#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //	for (int i{10}; i>0; i--)
    //        cout << i << endl;
    //    cout << "Loop done" << endl;

    //    for (int i{10}; i<=100; i+=10) {
    //        if (i % 15 == 0)
    //            cout << i << endl;
    //    }

    //    for (int i{1}, j{5}; i<=5; i++, j++)
    //        cout << i << " + " << j << " = " << (i + j) << endl;

    //    for (int i{0}; i < 100; i++) {
    //        cout << i;
    //        if (i % 10 == 0)
    //            cout << endl;
    //        else
    //            cout << ' ';
    //    }

    //    for (int i{0}; i <= 100; i++) {
    //        cout << i << ((i % 10 == 0) ? "\n" : " ");
    //    }

    //    std::vector<int> nums {10, 20, 30, 40, 50};
    //    // i should be unsigned instead of int, as i will be compare to nums.size() which is unsigned...
    //    for (unsigned i{0}; i<nums.size(); i++)
    //        cout << nums.at(i) << endl;

    //    int sum{0};
    //    sum = 0;
    //    for (int i{0}; i <= 15; i++) {
    //        // sum += (i % 2 != 0) ? i : 0;
    //        // cout << sum << endl; // works but double the result, i don t know why...
    //
    //        // solution du prof
    //        if (i % 2 != 0) {
    //            sum += i;
    //            cout << sum << endl;
    //        }
    //    }

    //    int scores [] {10, 20, 30, 40};
    ////    for (int score : scores)
    ////        cout << score << endl;
    //    // auto key word makes it easier, it define the type automaticly
    //    for (auto score : scores)
    //       cout << score << endl;

    std::vector<double> temps{ 87.2, 77.1, 80.0, 72.5 };
    double sum{ 0.0 };
    for(auto temp : temps)
        sum += temp;

    cout << "The average temp is " << sum / temps.size() << endl;

    return 0;
}

#include <iomanip>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //	int scores[] {10, 20, 30, 40};
    //    cout << scores[0] << endl;
    //    for(auto score: scores)
    //    cout << score << endl;

    //    std::vector<double> temps {87.22, 77.15, 80.05, 72.57};
    //    double sum {};
    //    double min{temps[0]};
    //    double max{temps[0]};
    //
    //    for (auto temp : temps) {
    //        sum += temp;
    //
    //        if (temp < min)
    //            min = temp;
    //        if (temp > max)
    //            max = temp;
    //    }
    //
    //    // we set the number of decimal using the <iomanip> module
    //    cout << std::fixed << std::setprecision(1);
    //    if (temps.size() != 0) {
    //        cout << "The average temp is " << sum / temps.size() << endl;
    //    }
    //    cout << "The min temp is " << min << endl;
    //    cout << "The max temp is " << max << endl;

    //
    //    for (auto c: "this is a test") {
    //        if (c == ' ')
    //            c = '-';
    //
    //        cout << c;
    //    }

    //    int num{};
    //    cout << "Enter an integer between 1 and 100: ";
    //    cin >> num;

    //    while (num >= 100) {
    //        cout << "Sorry it s not inferior to 100, try again" << endl;
    //        cin >> num;
    //    }

    //    while (num >= 100 || num < 1) {
    //        cout << "Sorry it s not inferior to 100, try again" << endl;
    //        cin >> num;
    //    }
    //
    //    cout << "Well done" << endl;

    bool done{ false };
    int inp{};

    while(!done) {
        cout << "Enter an integer between 5 and 10: ";
        cin >> inp;
        if(inp < 5 || inp > 10)
            cout << "Out of range, try again." << endl;
        else
            done = true;
    }
    cout << "Well done" << endl;

    return 0;
}

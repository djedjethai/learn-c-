#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int func1(int a, int b);
void func2(int &x, int y, int z);

int main()
{
	int x{10};
    int y{20};
    int z{};
    z = func1(x, y);
    cout << z << endl;
    
	return 0;
}

int func1(int a, int b) {
    int result;
    result = a + b;
    func2(result, a, b);
    return result;
}

void func2(int &x, int y, int z) {
    x += y + z;
}
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long long fibonacci(unsigned long long);

int main()
{
	cout << fibonacci(4) << endl;
	return 0;
}

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

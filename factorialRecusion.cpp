#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
	if (n <= 1)
		return 1ULL;
	return n * factorial(n - 1);
}

int main()
{
	while (true)
	{
		int n;
		cout << "Enter Number:\t";
		cin >> n;

		cout << "Factorial = ";
		cout << factorial(n) << "\n\n";
	}

	return 0;
}

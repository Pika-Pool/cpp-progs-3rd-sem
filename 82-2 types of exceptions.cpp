#include <iostream>
using namespace std;

// a dummy function that throws errors if n is 0 or 1
void check(int n)
{
	cout << "Start of function\n";

	if (n == 0)
		throw 1;
	else if (n == 1)
		throw 'c';

	cout << "End of function\n";
}

int main()
{
	int i;
	cout << "Enter an integer:\t";
	cin >> i;

	try
	{
		check(i);
		cout << "No errors\n";
	}
	catch (int e) // catch an error of type int
	{
		cout << "Integer error caught\n";
	}
	catch (char e) // catch an error of type char
	{
		cout << "Character error caught\n";
	}

	return 0;
}

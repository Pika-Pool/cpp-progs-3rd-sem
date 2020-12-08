#include <iostream>
using namespace std;

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
	catch (int e)
	{
		cout << "Integer error caught\n";
	}
	catch (char e)
	{
		cout << "Character error caught\n";
	}

	return 0;
}

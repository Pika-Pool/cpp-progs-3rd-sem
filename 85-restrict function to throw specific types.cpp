#include <iostream>
using namespace std;

void func(int t) throw(char, double)
{
	/** error as function can't throw int types
	if (t == 0)
		throw t;
	*/
	if (t == 1)
		throw 'a';
	else if (t == 2)
		throw 123.23;
}

int main()
{
	cout << "start\n";

	try
	{
		func(2);
	}
	catch (int i) /*this catch statement must be ignored then,but it is running*/
	{
		cout << "caught an integer " << i; /*this is the output on the screen*/
	}
	catch (char c)
	{
		cout << "caught character " << c;
	}
	catch (double a)
	{
		cout << "caught double " << a;
	}

	cout << "\nend\n\n";

	return 0;
}

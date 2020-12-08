#include <iostream>
using namespace std;

void func()
{
	try
	{
		cout << "Inside func() try block\n";
		throw 1;
	}
	catch (int e)
	{
		cout << "Caught integer exception inside func()\nRethrowing...\n";
		throw;
	}
}

int main()
{
	try
	{
		cout << "Inside main() try block\n\n";
		func();
	}
	catch (int e)
	{
		cout << "\nCaught integer exception in main()\n";
	}

	return 0;
}

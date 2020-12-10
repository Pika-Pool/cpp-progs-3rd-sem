#include <iostream>
using namespace std;

// function that throws error
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
		throw; // rethrow the error thrown in try block
	}
}

int main()
{
	try
	{
		cout << "Inside main() try block\n\n";
		func();
	}
	catch (int e) // catch any integer errors thrown
	{
		cout << "\nCaught integer exception in main()\n";
	}

	return 0;
}

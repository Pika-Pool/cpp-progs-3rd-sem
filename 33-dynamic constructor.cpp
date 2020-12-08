#include <iostream>
#include <cstring>
using namespace std;

class dyncons
{
	char *str;
	int length;

public:
	// a dynamic constructor is one which dynamically allocates memory
	// for a variable on object initialization
	dyncons()
	{
		length = 0;
		str = new char[length + 1];
		cout << "Allocated memory inside constructor\n";
	}

	dyncons(char *s)
	{
		length = strlen(s);
		str = new char[length + 1];
		strcpy(str, s);
		cout << "Allocated memory inside constructor\n";
	}

	void output()
	{
		cout << "String = " << str << "\n"
			 << "Number of characters in the string is " << length << "\n";
	}

	// deallocate the memory to avoid memory leaks
	~dyncons()
	{
		delete[] str;
		cout << "Deallocated memory inside destructor\n";
	}
};

int main()
{
	// create 3 objects of dyncons
	// which get destroyed after each loop
	for (int i = 0; i < 3; ++i)
	{
		cout << "\n\n";

		char s[50];
		cout << "Enter a string:\t";
		cin.getline(s, 50, '\n');

		dyncons obj(s);
		obj.output();
	}

	return 0;
}

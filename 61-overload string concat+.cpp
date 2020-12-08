#include <iostream>
#include <string.h>
using namespace std;

class String
{
	char *str;
	int len;

public:
	String(char *s) : str(s), len(strlen(s)) {}

	void display() const
	{
		cout << "String:\t" << str << "\n";
	}

	// overloading + operator
	// which concats the strings
	// and stores it in the first operand
	String operator+(String s2)
	{
		strcat(str, s2.str);
		len = strlen(str);
		return *this;
	}
};

int main()
{
	char t1[50], t2[50];
	cout << "Enter 2 strings:\n";

	cin >> t1 >> t2;

	String s1(t1), s2(t2);
	cout << "\n\nYour strings are:\n";
	s1.display();
	s2.display();

	cout << "\nConcatenating both strings:\n";
	// using overloaded + operator to concat strings
	s1 = s1 + s2;
	s1.display();

	return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
	const char *s;
	const int length;

public:
	MyString(const char *s) : s(s), length(strlen(s)) {}

	// overloading parentesis
	// to get substring of "s" member
	MyString operator()(int start, int len)
	{
		cout << "operator() called\n";

		// index cannot start before 0
		// index can't go beyond the length of string
		if (start < 0 || start + len > length)
		{
			cout << "Invalid range\n";
			return MyString("");
		}

		// store the substring in a temp string
		// return a MyString object using nameless objects concept
		char temp[length];
		for (int i = 0; i < len; ++i)
		{
			temp[i] = s[start + i];
		}
		temp[len] = '\0';

		return MyString(temp);
	}

	void display()
	{
		cout << "String:\t" << s;
	}
};

int main()
{
	char temp[100];
	cout << "Enter a string:\t";
	cin >> temp;

	int start, len;
	MyString str(temp);
	cout << "\nEnter start index and length to get substring:\t";
	cin >> start >> len;

	// using overloaded ()
	MyString substr = str(start, len);
	substr.display();

	return 0;
}

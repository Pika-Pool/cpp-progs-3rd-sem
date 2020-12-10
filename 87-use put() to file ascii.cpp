#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// object to read and right files
	fstream file;

	// open file in output mode
	file.open("Aschars.txt", ios::out);

	// store ascii characters from 33-127 into file
	for (int i = 33; i <= 127; ++i)
	{
		file.put(char(i));
		file.put(' ');
	}

	file.close();

	cout << "Text in file  -  Aschars.txt:\n";

	// open file in input mode to read
	file.open("Aschars.txt", ios::in);

	// read each character and print to console
	char c;
	while (file.get(c))
	{
		cout << c;
	}

	return 0;
}

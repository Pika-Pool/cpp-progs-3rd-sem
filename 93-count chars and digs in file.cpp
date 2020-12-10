#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	cout << "===COUNT CHARACTERS AND DIGITS IN FILE===\n";

	// get filename from user
	char filename[FILENAME_MAX];
	cout << "\nEnter filename to read:\t";
	cin.getline(filename, FILENAME_MAX, '\n');

	// object to read from file
	ifstream file(filename);
	int charCount, digCount, unknownCount;
	charCount = digCount = unknownCount = 0;

	// read character by character and check
	// if its a letter or digit or unknown value
	char c;
	while (file.get(c))
	{
		if (isalpha(c))
			charCount++;
		else if (isdigit(c))
			digCount++;
		else
			unknownCount++;
	}

	// don't forget to close the file to avoid corruption
	file.close();

	cout << "\nResult:";
	cout << "\nCharacters:\t" << charCount;
	cout << "\nDigits\t\t" << digCount;
	cout << "\nUnknowns:\t" << unknownCount;

	return 0;
}

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	cout << "===COUNT CHARACTERS AND DIGITS IN FILE===\n";

	char filename[FILENAME_MAX];
	cout << "\nEnter filename to read:\t";
	cin.getline(filename, FILENAME_MAX, '\n');

	ifstream file(filename);
	int charCount, digCount, unknownCount;
	charCount = digCount = unknownCount = 0;

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

	cout << "\nResult:";
	cout << "\nCharacters:\t" << charCount;
	cout << "\nDigits\t\t" << digCount;
	cout << "\nUnknowns:\t" << unknownCount;

	return 0;
}

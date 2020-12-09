#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
	// getting string from user
	const int stringMaxSize = 256;
	char str[stringMaxSize];
	cout << "Enter your string:\t";
	cin.getline(str, 256, '\n');

	// getting filename from user
	char filename[FILENAME_MAX];
	cout << "Enter name of file:\t";
	cin.getline(filename, FILENAME_MAX, '\n');

	// fstream object to work with files
	fstream file;

	// transforming user input to uppercase
	// storing in file specified by user
	cout << "\nStoring uppercase version";
	file.open(filename, ios::out);
	for (int i = 0; str[i] != '\0'; ++i)
	{
		file.put(toupper(str[i]));
	}
	file.close();

	// reading from file the contents entered before
	cout << "\n\nValue entered in file:\n";
	file.open(filename, ios::in);
	file.getline(str, stringMaxSize, '\n');
	cout << str << '\n';
	file.close();

	return 0;
}

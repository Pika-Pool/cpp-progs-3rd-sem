#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char filename[FILENAME_MAX];
	// get filename as input from user
	cout << "Enter file name to read from:\t";
	cin.getline(filename, FILENAME_MAX, '\n');

	// read character by character and print
	// contents of file to console
	cout << "\nCONTENTS IN FILE============================================================:\n";
	char c;
	ifstream file(filename);
	while (file.get(c))
	{
		cout << c;
	}

	return 0;
}

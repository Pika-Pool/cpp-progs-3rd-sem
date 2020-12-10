#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const int size = 2;
	// object to write to file
	ofstream filesWrite;

	for (int i = 0; i < size; ++i)
	{
		char str[50];

		cout << "Enter contents for \"file - " << i + 1 << "\":\n";
		cin.getline(str, 50, '\n');

		// open file and write user input to it
		filesWrite.open("file - " + to_string(i + 1) + ".txt");
		filesWrite << str << "\n";
		filesWrite.close();

		cout << "Contents written to file!!\n\n";
	}

	cout << "\n";

	// object to read from file
	ifstream filesRead;
	for (int i = 0; i < size; ++i)
	{
		char str[50];

		cout << "Contents of \"file - " << i + 1 << "\":\n";

		// open file, read and print contents inside
		filesRead.open("file - " + to_string(i + 1) + ".txt");
		filesRead.getline(str, 50, '\n');
		filesRead.close();

		cout << str << '\n';
	}

	return 0;
}

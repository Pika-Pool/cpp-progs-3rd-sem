#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const int size = 2;
	ofstream filesWrite[size];

	for (int i = 0; i < size; ++i)
	{
		char str[50];

		cout << "Enter contents for \"file - " << i + 1 << "\":\n";
		cin.getline(str, 50, '\n');

		filesWrite[i].open("file - " + to_string(i + 1) + ".txt");
		filesWrite[i] << str << "\n";
		filesWrite[i].close();

		cout << "Contents written to file!!\n\n";
	}

	cout << "\n";

	ifstream filesRead[size];
	for (int i = 0; i < size; ++i)
	{
		char str[50];

		cout << "Contents of \"file - " << i + 1 << "\":\n";

		filesRead[i].open("file - " + to_string(i + 1) + ".txt");
		filesRead[i].getline(str, 50, '\n');
		filesRead[i].close();

		cout << str << '\n';
	}

	return 0;
}

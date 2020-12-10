#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// object to read from file
	ifstream file;
	file.open("sample.txt");

	cout << "Content in sample.txt:\n";
	int count = 0;
	char str[256];
	// count and print lines from file
	while (file.getline(str, 256, '\n'))
	{
		cout << str << "\n";
		count++;
	}

	cout << "\n\nTotal number of lines  =  " << count;

	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file;
	file.open("sample.txt");

	cout << "Content in sample.txt:\n";
	int count = 0;
	char str[256];
	while (file.getline(str, 256, '\n'))
	{
		cout << str << "\n";
		count++;
	}

	cout << "\n\nTotal number of lines  =  " << count;

	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char filename[FILENAME_MAX];
	cout << "Enter file name to read from:\t";
	cin.getline(filename, FILENAME_MAX, '\n');
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "\nCONTENTS IN FILE============================================================:\n";
	char c;
	ifstream file(filename);
	while (file.get(c))
	{
		cout << c;
	}

	return 0;
}

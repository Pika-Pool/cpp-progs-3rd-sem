#include <iostream>
#include <fstream>
using namespace std;

void countWordsInFile(const char *fileName)
{
	ifstream file(fileName);

	char str[128];
	int count = 0;

	cout << "\nList of words are:\n";
	while (file >> str)
	{
		count++;
		cout << "\"" << str << "\"," << (count % 10 == 0 ? "\n" : " ");
	}

	cout << "\n\nTotal Words:\t" << count;
}

int main()
{
	char fileName[FILENAME_MAX];

	cout << "Enter file name:\t";
	cin.getline(fileName, FILENAME_MAX, '\n');

	countWordsInFile(fileName);

	return 0;
}

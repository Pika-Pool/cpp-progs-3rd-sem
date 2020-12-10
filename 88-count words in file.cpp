#include <iostream>
#include <fstream>
using namespace std;

// count number of words in file given by filename
void countWordsInFile(const char *fileName)
{
	// object to read files
	ifstream file(fileName);

	char str[128];
	int count = 0;

	cout << "\nList of words are:\n";
	// read file word by word
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

	// get filename as input
	cout << "Enter file name:\t";
	cin.getline(fileName, FILENAME_MAX, '\n');

	countWordsInFile(fileName);

	return 0;
}

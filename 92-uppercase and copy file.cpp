#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
	char inputFileName[FILENAME_MAX], outputFileName[FILENAME_MAX];

	cout << "===COPY FILES===\n";

	cout << "Enter filename:\t\t";
	cin.getline(inputFileName, FILENAME_MAX, '\n');
	cout << "Enter destination:\t";
	cin.getline(outputFileName, FILENAME_MAX, '\n');

	ifstream inputFile(inputFileName);
	ofstream outputFile(outputFileName);

	cout << "\nCopying...";
	char c;
	while (inputFile.get(c))
		outputFile.put(toupper(c));

	inputFile.close();
	outputFile.close();
	cout << "\nCopied contents from " << inputFileName << " to " << outputFileName;

	return 0;
}

#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
	char inputFileName[FILENAME_MAX], outputFileName[FILENAME_MAX];

	cout << "===COPY FILES===\n";

	// get file names from user
	cout << "Enter filename:\t\t";
	cin.getline(inputFileName, FILENAME_MAX, '\n');
	cout << "Enter destination:\t";
	cin.getline(outputFileName, FILENAME_MAX, '\n');

	// object to read from file
	ifstream inputFile(inputFileName);
	// object to right ot file
	ofstream outputFile(outputFileName);

	// copy all content, character by character
	// from inputFile and store in outputFile
	cout << "\nCopying...";
	char c;
	while (inputFile.get(c))
		outputFile.put(toupper(c));

	inputFile.close();
	outputFile.close();

	cout << "\nCopied contents from " << inputFileName << " to " << outputFileName;

	return 0;
}

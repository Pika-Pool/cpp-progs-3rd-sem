#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file;

	file.open("Aschars.txt", ios::out);

	for (int i = 33; i <= 127; ++i)
	{
		file.put(char(i));
		file.put(' ');
	}

	file.close();

	cout << "Text in file  -  Aschars.txt:\n";

	file.open("Aschars.txt", ios::in);

	char c;
	while (file.get(c))
	{
		cout << c;
	}

	return 0;
}

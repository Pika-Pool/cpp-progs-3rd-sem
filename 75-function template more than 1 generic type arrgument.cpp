#include <iostream>
using namespace std;

template <typename T1, typename T2>
void display(T1 a, T2 b)
{
	cout << "Argument - 1"
		 << "  :  " << a << "\n";
	cout << "Argument - 2"
		 << "  :  " << b << "\n\n";
}

int main()
{
	int i;
	float f;
	char c;

	cout << "Enter an integer:\t";
	cin >> i;

	cout << "Enter a float:\t";
	cin >> f;

	cout << "Enter a character:\t";
	cin >> c;

	cout << "int, float\n";
	display(i, f);

	cout << "int, char\n";
	display(i, c);

	cout << "float, int\n";
	display(f, i);

	cout << "float, char\n";
	display(f, c);

	cout << "char, int\n";
	display(c, i);

	cout << "char, float\n";
	display(c, f);

	return 0;
}

#include <iostream>
using namespace std;

// template taking multiple arguments
// with more than 1 type
template <typename T1, typename T2>
void display(T1 a, T2 b)
{
	// display the gicen arguments
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

	// CALL FUNCTION WITH int AND floar
	cout << "int, float\n";
	display(i, f);

	// CALL FUNCTION WITH int AND char
	cout << "int, char\n";
	display(i, c);

	// CALL FUNCTION WITH float AND int
	cout << "float, int\n";
	display(f, i);

	// CALL FUNCTION WITH float AND char
	cout << "float, char\n";
	display(f, c);

	// CALL FUNCTION WITH char AND int
	cout << "char, int\n";
	display(c, i);

	// CALL FUNCTION WITH char AND float
	cout << "char, float\n";
	display(c, f);

	return 0;
}

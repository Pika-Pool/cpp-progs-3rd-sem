#include <iostream>
using namespace std;

// function prints largest of 2 values
// a generic type T
template <typename T>
void largest(T a, T b)
{
	// would throw error if instanes type T
	// are not comparable using relational operators
	if (a > b)
		cout << a << " is larger than " << b;
	else if (a < b)
		cout << b << " is larger than " << a;
	else
		cout << a << " = " << b;
}

int main()
{
	// COMPARING INT
	int i1, i2;
	cout << "Enter 2 integers:\t";
	cin >> i1 >> i2;
	largest(i1, i2);

	// COMPARING FLOAT
	float f1, f2;
	cout << "\n\nEnter 2 floats:\t";
	cin >> f1 >> f2;
	largest(f1, f2);

	// COMPARING CHAR
	char c1, c2;
	cout << "\n\nEnter 2 chars:\t";
	cin >> c1 >> c2;
	largest(c1, c2);

	// COMPARING LONG LONG
	long long l1, l2;
	cout << "\n\nEnter 2 longs:\t";
	cin >> l1 >> l2;
	largest(l1, l2);

	return 0;
}

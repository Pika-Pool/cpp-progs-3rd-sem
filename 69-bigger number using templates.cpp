#include <iostream>
using namespace std;

template <typename T1>
void largest(T1 a, T1 b) {
	if(a > b)
		cout << a << " is larger than " << b;
	else if (a < b)
		cout << b << " is larger than " << a;
	else
		cout << a << " = " << b;
}

int main()
{
	int i1, i2;
	cout << "Enter 2 integers:\t";
	cin >> i1 >> i2;
	largest(i1, i2);

	float f1, f2;
	cout << "\n\nEnter 2 floats:\t";
	cin >> f1 >> f2;
	largest(f1, f2);

	char c1, c2;
	cout << "\n\nEnter 2 chars:\t";
	cin >> c1 >> c2;
	largest(c1, c2);

	long long l1, l2;
	cout << "\n\nEnter 2 longs:\t";
	cin >> l1 >> l2;
	largest(l1, l2);

	return 0;
}

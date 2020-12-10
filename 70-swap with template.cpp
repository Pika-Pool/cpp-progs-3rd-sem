#include <iostream>
using std::cin, std::cout;

// function swaps 2 references of any type
// a generic type T
template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	// SWAP INTEGERS
	int i1, i2;
	cout << "Enter 2 integers:\t";
	cin >> i1 >> i2;
	swap(i1, i2);
	cout << "After swapping:\t" << i1 << " " << i2;

	// SWAP FLOATS
	float f1, f2;
	cout << "\n\nEnter 2 floats:\t";
	cin >> f1 >> f2;
	swap(f1, f2);
	cout << "After swapping:\t" << f1 << " " << f2;

	// SWAP CHARS
	char c1, c2;
	cout << "\n\nEnter 2 chars:\t";
	cin >> c1 >> c2;
	swap(c1, c2);
	cout << "After swapping:\t" << c1 << " " << c2;

	// SWAP LONG LONG
	long long l1, l2;
	cout << "\n\nEnter 2 longs:\t";
	cin >> l1 >> l2;
	swap(l1, l2);
	cout << "After swapping:\t" << l1 << " " << l2;

	return 0;
}

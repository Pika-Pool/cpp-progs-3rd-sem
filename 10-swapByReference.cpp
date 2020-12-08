#include <iostream>
using namespace std;

// use pass by reference to swap two integers
void swapByReference(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	cout << "Enter number 1:\t";
	cin >> a;
	cout << "Enter number 2:\t";
	cin >> b;

	swapByReference(a, b);
	cout << "\nAfter swapping:";
	cout << "\n\tNumber 1 = " << a;
	cout << "\n\tNumber 2 = " << b;

	return 0;
}

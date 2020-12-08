#include <iostream>
using namespace std;

int main()
{
	int *p1, *p2;
	// dynamically allocate 2 integers
	p1 = new int;
	p2 = new int;

	cout << "Enter 2 integers:\n";
	cin >> *p1 >> *p2;

	cout << *p1 << " + " << *p2 << " = " << (*p1 + *p2) << '\n';
	cout << *p1 << " - " << *p2 << " = " << (*p1 - *p2) << '\n';

	// deallocate the integers
	delete p1;
	delete p2;

	return 0;
}

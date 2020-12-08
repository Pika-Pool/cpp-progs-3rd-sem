#include <iostream>
using namespace std;

class A
{
	int a;

public:
	A(int a = 0) : a(a) {}

	void show()
	{
		cout << "a  =  " << a << "\n";
	}

	// overloding + operator to add integer
	friend A operator+(int i, const A &objA);
	friend A operator+(const A &objA, int i);
};

A operator+(int i, const A &objA)
{
	cout << "(int + A) operation\n";
	return A(i + objA.a);
}

A operator+(const A &objA, int i)
{
	cout << "(A + int) operation\n";
	return A(objA.a + i);
}

int main()
{
	A objA(12);
	objA.show();

	cout << "\nAdding 50 to objA:\n";
	objA = objA + 50;
	objA.show();

	cout << "\nAdding 70 to objA:\n";
	objA = 70 + objA;
	objA.show();

	return 0;
}

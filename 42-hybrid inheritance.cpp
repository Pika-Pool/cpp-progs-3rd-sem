#include <iostream>
using namespace std;

class A
{
public:
	int x;
};

class B : public A
{
public:
	B() //constructor to initialize x in base class A
	{
		x = 10;
	}
};

class C
{
public:
	int y;
	C() //constructor to initialize y
	{
		y = 4;
	}
};

class D : public B, public C //D is derived from class B and class C
{
public:
	void sum()
	{
		cout << "x = " << x;
		cout << "\ny = " << y;
		cout << "\nSum, x + y = " << x + y;
	}
};

int main()
{
	cout << "Inheritance diagram:\n";
	cout << "  A  C\n";
	cout << "  |  |\n";
	cout << "  v  |\n";
	cout << "  B  |\n";
	cout << "  \\  |\n";
	cout << "   \\ |\n";
	cout << "    \\|\n";
	cout << "     |\n";
	cout << "     v\n";
	cout << "     D\n\n";

	D obj1; //object of derived class D
	obj1.sum();

	return 0;
}

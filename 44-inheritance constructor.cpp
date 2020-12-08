#include <iostream>
using namespace std;

class A
{
protected:
	int a;

public:
	A(int i) : a(i)
	{
		cout << "constructor of A\n";
	}

	~A()
	{
		cout << "destructor of A\n";
	}
};

class B : public A
{
protected:
	int b;

public:
	B(int ia, int ib) : A(ia)
	{
		b = ib;
		cout << "constructor of B\n";
	}

	void show()
	{
		cout << "a = " << a << "\n";
		cout << "b = " << b << "\n";
	}

	~B()
	{
		cout << "destructor of B\n";
	}
};

int main()
{
	B objB(1, 2);
	objB.show();

	return 0;
}

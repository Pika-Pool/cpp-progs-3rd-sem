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

	~B()
	{
		cout << "destructor of B\n";
	}
};

class C : public B
{
	int c;

public:
	C(int ia, int ib, int ic) : B(ia, ib)
	{
		c = ic;
		cout << "constructor of C\n";
	}

	void show()
	{
		cout << "a = " << a << "\n";
		cout << "b = " << b << "\n";
		cout << "c = " << c << "\n";
	}

	~C()
	{
		cout << "destructor of C\n";
	}
};

int main()
{
	C objC(1, 2, 3);
	objC.show();

	return 0;
}

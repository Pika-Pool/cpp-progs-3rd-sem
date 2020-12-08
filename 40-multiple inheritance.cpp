#include <iostream>
using namespace std;

class A
{
protected:
	int x;

public:
	void getx()
	{
		cout << "Enter value of x:\t";
		cin >> x;
	}
};

class B
{
protected:
	int y;

public:
	void gety()
	{
		cout << "Enter value of y:\t";
		cin >> y;
	}
};

// multiple inheritance
class C : public A, public B // C is derived from class A and class B
{
	int z;

public:
	void getz()
	{
		cout << "Enter value of z:\t";
		cin >> z;
	}
	void sum()
	{
		cout << "\nSum, x + y + z = " << x + y + z;
	}
};

int main()
{
	C obj; //object of derived class C

	obj.getx();
	obj.gety();
	obj.getz();
	obj.sum();

	return 0;
}

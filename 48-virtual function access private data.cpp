#include <iostream>
using namespace std;

class Base
{
protected:
	int x;

public:
	Base(int x = 0) : x(x) {}

	virtual void show()
	{
		cout << "value in base class = " << x << endl;
	}
};

class Derived : public Base
{
	int y;
	void show()
	{
		cout << "value in derived class = " << y << endl;
	}

public:
	Derived(int y = 0) : y(y) {}
};

int main()
{
	Base *ptr;
	Derived obj(3);

	ptr = &obj;
	// ptr can access the private member function show()
	// of Derived object
	ptr->show();

	return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;

class base
{
	int i;

public:
	base(int r = 0) : i(r) {}
	virtual void show()
	{
		cout << "From Base Class"
			 << "\nvalue of i = " << i << endl;
	}
};

class derived : public base
{
	int j;

public:
	derived(int s = 1) : j(s) {}

	void show()
	{
		cout << "From Derived Class"
			 << "\nvalue of j = " << j << endl;
	}
};
int main()
{
	base objBase;
	base *ptrBase;

	derived *ptrDerived;
	derived objDerived;

	// Explicit casting to enable a derived class pointer to point to base class object
	ptrDerived = (derived *)&objBase;
	ptrBase = &objDerived;

	ptrBase->show();
	cout << "\n";
	ptrDerived->show();
	return 0;
}

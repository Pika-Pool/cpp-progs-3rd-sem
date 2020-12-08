#include <iostream>
using namespace std;

class A
{
public:
	virtual char getName() const { return 'A'; }
};

class B : public A
{
public:
	virtual char getName() const { return 'B'; }
};

class C : public B
{
public:
	virtual char getName() const { return 'C'; }
};

int main()
{
	C c;
	B b;

	A &r1Base = c;
	cout << "r1Base is a " << r1Base.getName() << '\n';

	A &r2Base = b;
	cout << "r2Base is a " << r2Base.getName() << '\n';

	A objA;
	cout << "objA is a " << objA.getName() << '\n';

	return 0;
}

#include <iostream>
using namespace std;

class A; // defined later

class B
{
public:
	void change(A &yc, int x); // defined later
};

class A
{
private:
	int topSecret;

public:
	A()
	{
		topSecret = 0;
	}
	void printMember() { cout << "Top Secret Code = " << topSecret << endl; }

	// member function of B is a friend of A class
	friend void B::change(A &, int);
};

// can access all members of class A
void B::change(A &yc, int x) { yc.topSecret = x; }

int main()
{
	A a;
	B b;

	a.printMember();
	b.change(a, 5);
	a.printMember();

	return 0;
}

#include <iostream>
using namespace std;

class Kilometer
{
private:
	double km;

public:
	Kilometer(double kilometer = 0)
		: km{kilometer}
	{
	}

	void input()
	{
		cout << "Enter distance in kilometers:\t";
		cin >> km;
	}

	void display() const
	{
		cout << "Distance  =  " << km << " km\n";
	}

	// overload -> operator
	Kilometer *operator->()
	{
		cout << "operator->() called\n";
		return this;
	}
};

int main()
{
	Kilometer k;
	k.input();
	// since -> is overloaded
	// -> can be used similar to . operator
	// to access members
	k->display();

	cout << "\n\n";

	k->input();
	k.display();

	return 0;
}

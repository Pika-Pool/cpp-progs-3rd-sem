#include <iostream>
using namespace std;

class Kilometer
{
private:
	double km;

public:
	// convert int -> Kilometer
	Kilometer(double kilometer = 0) : km{kilometer} {}

	void input()
	{
		cout << "Enter distance in kilometers:\t";
		cin >> km;
	}

	void display()
	{
		cout << "Distance  =  " << km << " km\n";
	}

	// overloading prefix decrement operator
	friend Kilometer operator--(Kilometer &k)
	{
		return Kilometer(--k.km);
	}

	// overloading postfix decrement operator
	friend Kilometer operator--(Kilometer &k, int)
	{
		return Kilometer(k.km--);
	}
};

int main()
{
	Kilometer k;
	k.input();

	cout << "Before operations:\n";
	k.display();

	cout << "\n\n";

	cout << "On postfix decrement:\n";
	(k--).display(); // using postfix decrement opertor
	cout << "After postfix decrement:\n";
	k.display();

	cout << "\n\n";

	cout << "On prefix decrement:\n";
	(--k).display(); // using prefix decrement opertor
	cout << "After prefix decrement:\n";
	k.display();

	return 0;
}

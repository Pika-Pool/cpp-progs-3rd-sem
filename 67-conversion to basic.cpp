#include <iostream>
using namespace std;

class Kilometer
{
private:
	double km;

public:
	// convert int -> Kilometer
	Kilometer(double kilometer = 0) : km{kilometer} {}

	// Overloaded int cast
	// convert Kilometer -> int
	operator double() const { return km; }

	void input()
	{
		cout << "Enter distance in kilometers:\t";
		cin >> km;
	}

	void display()
	{
		cout << "Distance  =  " << km << " km\n";
	}
};

// print a double value
void printDouble(double d)
{
	cout << "Double value  =  " << d << "\n";
}

int main()
{
	Kilometer k;
	k.input();
	k.display();
	cout << "\nConvert to double:\n";
	printDouble(k);

	cout << "\n\n\n";

	double d;
	cout << "Enter a double:\t";
	cin >> d;
	printDouble(d);
	cout << "\nConvert to Kilometer:\n";
	k = d;
	k.display();

	return 0;
}

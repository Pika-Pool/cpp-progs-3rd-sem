#include <iostream>
using namespace std;

class Distance
{
private:
	int km, m;

public:
	Distance(int kilometer, int meter)
	{
		km = kilometer;
		m = meter;

		normalize();
	}

	// convert overflowed values to standard
	// meters <= 1000
	void normalize()
	{
		if (m >= 1000)
		{
			km += m / 1000;
			m %= 1000;
		}
	}

	// display in format km kilometers, m meters
	void display()
	{
		cout << km << " kilometers, " << m << " meters\n";
	}

	// using friend function to calculate sum of 2 Distance objects
	friend Distance sum(Distance &, Distance &);
};

Distance sum(Distance &d1, Distance &d2)
{
	// returns a nameless instance
	return Distance(d1.km + d2.km, d1.m + d2.m);
}
int main()
{
	int km, m;
	cout << "Enter distance d1(km m)\t";
	cin >> km >> m;
	Distance d1(km, m);

	cout << "Enter distance d2(km m)\t";
	cin >> km >> m;
	Distance d2(km, m);

	cout << "\nd1 => ";
	d1.display();

	cout << "d2 => ";
	d2.display();

	Distance d3 = sum(d1, d2);
	cout << "\nd1 + d1 => ";
	d3.display();

	return 0;
}

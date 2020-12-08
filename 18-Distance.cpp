#include <iostream>
using namespace std;

class Distance
{
private:
	int km, m;

public:
	Distance(int kilometer = 0, int meter = 0)
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

	// get sum of 2 distance objects
	Distance sum(Distance &d)
	{
		return Distance(this->km + d.km, this->m + d.m);
	}
};

int main()
{
	// get input
	int km, m;
	cout << "Enter distance d1(km m)\t";
	cin >> km >> m;
	Distance d1(km, m);

	cout << "Enter distance d2(km m)\t";
	cin >> km >> m;
	Distance d2(km, m);

	// diplay results
	cout << "\n\nd1 => ";
	d1.display();

	cout << "d2 => ";
	d2.display();

	Distance d3 = d1.sum(d2);
	cout << "\nd1 + d1 => ";
	d3.display();

	return 0;
}

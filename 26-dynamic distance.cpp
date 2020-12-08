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

	void input()
	{
		cout << "Enter distance(km m):\t";
		cin >> km >> m;
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
	Distance *p = new Distance[4];

	cout << "Distance - d1\n";
	p[0].input();
	p[0].display();
	cout << "\n\n";

	cout << "Distance - d2\n";
	(p + 1)->input();
	(p + 1)->display();
	cout << "\n\n";

	cout << "Distance - d3\n";
	(*(p + 2)).input();
	(*(p + 2)).display();
	cout << "\n\n";

	// sum of all three
	cout << "d1 + d2 + d3 = ";
	p[3] = p[0].sum(p[1]).sum(p[2]);
	p[3].display();

	delete[] p;

	return 0;
}

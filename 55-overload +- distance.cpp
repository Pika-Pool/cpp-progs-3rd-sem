#include <iostream>
using namespace std;

class Distance
{
private:
	int km, m;
	int totalMeters;
	// isNegative: track if distance is < 0
	bool isNegative;

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
		totalMeters = km * 1000 + m;

		if (totalMeters < 0)
		{
			isNegative = true;
			km = -totalMeters / 1000;
			m = -totalMeters % 1000;
		}
		else
		{
			isNegative = false;
			km = totalMeters / 1000;
			m = totalMeters % 1000;
		}
	}

	void input()
	{
		cout << "Enter distance(km m):\t";
		cin >> km >> m;
		normalize();
	}

	// display in format km kilometers, m meters
	void display()
	{
		if (isNegative)
			cout << "(-) " << km << " kilometers, " << m << " meters\n";
		else
			cout << "(+) " << km << " kilometers, " << m << " meters\n";
	}

	// convert distance to meters
	int getTotalMeters() const
	{
		return totalMeters;
	}

	// get sum of 2 distance objects
	Distance operator+(const Distance &d) const
	{
		int totalMeters = this->getTotalMeters() + d.getTotalMeters();
		return Distance(0, totalMeters);
	}

	// get difference of 2 distance objects
	Distance operator-(const Distance &d) const
	{
		int totalMeters = this->getTotalMeters() - d.getTotalMeters();
		return Distance(0, totalMeters);
	}
};

int main()
{
	Distance d1, d2;

	d1.input();
	d2.input();

	cout << "\n\nYour Distances:\n";
	cout << "d1  =  ";
	d1.display();
	cout << "d2  =  ";
	d2.display();

	Distance d3 = d1 + d2;
	cout << "\n\nd1 + d2  =  ";
	d3.display();

	Distance d4 = d1 - d2;
	cout << "d2 - d1  =  ";
	d4.display();

	return 0;
}

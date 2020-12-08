#include <iostream>
using namespace std;

class Time
{
private:
	int h, m, s;

public:
	Time(int hours = 0, int minutes = 0, int seconds = 0)
	{
		if (hours < 0 || minutes < 0 || seconds < 0)
			throw "Invalid time. Values can't be negative";

		h = hours;
		m = minutes;
		s = seconds;
		normlize();
	}

	// convert overflowed values to standard
	// seconds <= 60
	// minutes <= 60
	// hours <= 24
	void normlize()
	{
		if (s >= 60)
		{
			m += s / 60;
			s %= 60;
		}
		if (m >= 60)
		{
			h += m / 60;
			m %= 60;
		}
		if (h >= 24)
		{
			h %= 24;
		}
	}

	friend ostream &operator<<(ostream &out, Time &t);
	friend istream &operator>>(istream &in, Time &t);
};

// get time from input stream
istream &operator>>(istream &in, Time &t)
{
	cout << "operator>> is called\n";

	cout << "Enter hours:\t";
	in >> t.h;

	cout << "Enter minutes:\t";
	in >> t.m;

	cout << "Enter seconds:\t";
	in >> t.s;

	t.normlize();

	return in;
}

// display in format hh:mm:ss
ostream &operator<<(ostream &out, Time &t)
{
	out << "opertor<< is called\n";
	printf("Time:\t%02d:%02d:%02d\n", t.h, t.m, t.s);
	return out;
}

int main()
{
	Time t1;
	cin >> t1;

	cout << "\n\n";

	cout << t1;

	return 0;
}

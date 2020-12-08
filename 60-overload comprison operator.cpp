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

	// overloading comparison operators
	bool operator<(const Time &t)
	{
		cout << "operator< called\n";

		if (h < t.h)
			return true;
		else if (h > t.h)
			return false;
		else if (m < t.m)
			return true;
		else if (m > t.m)
			return false;
		else if (s < t.s)
			return true;
		else
			return false;
	}

	// overloading comparison operators
	bool operator>(const Time &t)
	{
		cout << "operator> called\n";

		if (h > t.h)
			return true;
		else if (h < t.h)
			return false;
		else if (m > t.m)
			return true;
		else if (m < t.m)
			return false;
		else if (s > t.s)
			return true;
		else
			return false;
	}
};

// get time from input stream
istream &operator>>(istream &in, Time &t)
{
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
	printf("Time:\t%02d:%02d:%02d", t.h, t.m, t.s);
	return out;
}

int main()
{
	Time t1, t2;

	cout << "Enter time 1:\n";
	cin >> t1;

	cout << "\nEnter time 2:\n";
	cin >> t2;

	cout << "\n\nt1  =  " << t1;
	cout << "\nt2  =  " << t2 << "\n";

	cout << "\nComparing t1 and t2:\n";
	if (t1 < t2) // using opertor<
		cout << "result:\tt1 < t2";
	else if (t1 > t2) // using opertor>
		cout << "result:\tt1 > t2";
	else
		cout << "result:\tt1 == t2";

	return 0;
}
